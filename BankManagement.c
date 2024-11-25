#include <stdio.h>
#include <string.h>

struct accountant {
    int accno;
    char name[50];
    float balance;
};

void createacc();
void displayacc();
void deposit();
void withdraw();
void displaytransactions();

int main(int argc, char const *argv[]) {
    int choice;
    do {
        printf("\n1. Create Account\n2. Display Account\n3. Deposit\n4. Withdraw\n5. Display All Transactions\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            createacc();
            break;
        case 2:
            displayacc();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            displaytransactions();
            break;
        case 6:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 6);
    return 0;
}

void createacc() {
    FILE *fileptr = fopen("account.txt", "a+");
    if (fileptr == NULL) {
        printf("Error in opening file.\n");
        return;
    }

    struct accountant acc;
    printf("Enter your name: ");
    scanf("%s", acc.name);
    printf("Enter your account number: ");
    scanf("%d", &acc.accno);
    printf("Enter your initial balance: ");
    scanf("%f", &acc.balance);

    fprintf(fileptr, "%d,%s,%.2f\n", acc.accno, acc.name, acc.balance);
    printf("Account Created Successfully\n");
    fclose(fileptr);
}

void displayacc() {
    FILE *fileptr = fopen("account.txt", "r");
    if (fileptr == NULL) {
        printf("Error in opening file or file does not exist.\n");
        return;
    }

    int accountnumber;
    printf("Enter your Account number: ");
    scanf("%d", &accountnumber);

    struct accountant acc;
    int flag = 0;
    while (fscanf(fileptr, "%d,%[^,],%f\n", &acc.accno, acc.name, &acc.balance) == 3) {
        if (accountnumber == acc.accno) {
            flag = 1;
            printf("AccountNo: %d\nName: %s\nBalance: %.2f\n", acc.accno, acc.name, acc.balance);
            break;
        }
    }
    if (flag == 0) {
        printf("Account number does not exist.\n");
    }
    fclose(fileptr);
}

void deposit() {
    FILE *fileptr = fopen("account.txt", "r");
    FILE *tempfile = fopen("temp.txt", "w");
    FILE *transfile = fopen("transactions.txt", "a+");
    if (fileptr == NULL || tempfile == NULL) {
        printf("Error in opening file or file does not exist.\n");
        return;
    }

    struct accountant acc;
    int accountnumber, depositamount, flag = 0;

    printf("Enter your account number: ");
    scanf("%d", &accountnumber);
    while (fscanf(fileptr, "%d,%[^,],%f\n", &acc.accno, acc.name, &acc.balance) == 3) {
        if (accountnumber == acc.accno) {
            printf("Enter amount to be deposited: ");
            scanf("%d", &depositamount);
            acc.balance += depositamount;
            flag = 1;
            fprintf(transfile, "%d,Deposit,%d\n", acc.accno, depositamount);
        }
        fprintf(tempfile, "%d,%s,%.2f\n", acc.accno, acc.name, acc.balance);
    }
    fclose(fileptr);
    fclose(tempfile);
    fclose(transfile);

    if (flag == 1) {
        printf("Deposit successful.\n");
        remove("account.txt");
        rename("temp.txt", "account.txt");
    } else {
        printf("Account number does not exist.\n");
        remove("temp.txt");
    }
}

void withdraw() {
    FILE *fileptr = fopen("account.txt", "r");
    FILE *tempfile = fopen("temp.txt", "w");
    FILE *transfile = fopen("transactions.txt", "a+");
    if (fileptr == NULL || tempfile == NULL) {
        printf("Error in opening file or file does not exist.\n");
        return;
    }

    struct accountant acc;
    int accountnumber, withdrawamount, flag = 0;

    printf("Enter your account number: ");
    scanf("%d", &accountnumber);
    while (fscanf(fileptr, "%d,%[^,],%f\n", &acc.accno, acc.name, &acc.balance) == 3) {
        if (accountnumber == acc.accno) {
            printf("Enter amount to be withdrawn: ");
            scanf("%d", &withdrawamount);
            if (withdrawamount > acc.balance) {
                printf("Insufficient balance!\n");
            } else {
                acc.balance -= withdrawamount;
                fprintf(transfile, "%d,Withdraw,%d\n", acc.accno, withdrawamount);
                flag = 1;
            }
        }
        fprintf(tempfile, "%d,%s,%.2f\n", acc.accno, acc.name, acc.balance);
    }
    fclose(fileptr);
    fclose(tempfile);
    fclose(transfile);

    if (flag == 1) {
        printf("Withdrawal successful.\n");
        remove("account.txt");
        rename("temp.txt", "account.txt");
    } else {
        printf("Account number does not exist or withdrawal failed.\n");
        remove("temp.txt");
    }
}

void displaytransactions() {
    FILE *fileptr = fopen("transactions.txt", "r");
    if (fileptr == NULL) {
        printf("Error in opening file or file does not exist.\n");
        return;
    }

    int accountnumber;
    printf("Enter account number: ");
    scanf("%d", &accountnumber);

    char line[100];
    int flag = 0;
    printf("Transactions for Account No: %d\n", accountnumber);
    while (fgets(line, sizeof(line), fileptr) != NULL) {
        int accno, amount;
        char type[10];
        sscanf(line, "%d,%[^,],%d", &accno, type, &amount);
        if (accno == accountnumber) {
            printf("%s: %d\n", type, amount);
            flag = 1;
        }
    }
    if (!flag) {
        printf("No transactions found for this account.\n");
    }
    fclose(fileptr);
}
