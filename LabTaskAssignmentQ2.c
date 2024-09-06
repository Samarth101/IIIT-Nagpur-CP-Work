// Question 9
#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, xcenter, ycenter, r, dist;
    printf("Enter the coordinates of center :\n");
    scanf("%f %f", &xcenter, &ycenter);
    printf("Enter the radius:\n");
    scanf("%f", &r);
    printf("Enter the coordinates of the point: \n");
    scanf("%f %f", &x, &y);
    dist = sqrt(((pow(xcenter - x, 2)) + (pow(ycenter - y, 2))));
    if (dist > r)
    {
        printf("The given point is outside the circle");
    }
    else if (dist == r)
    {
        printf("Point lies on the circle");
    }
    else
        printf("Inside the circle");
    return 0;
}





