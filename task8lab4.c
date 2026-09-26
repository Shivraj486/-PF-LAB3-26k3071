#include <stdio.h>
int main()
{
    float CGPA;
    int income;
    printf("Enter Your CGPA\n");
    scanf(" %f" , &CGPA);
    printf("Your CGPA IS  : %.2f \n" , CGPA);
    printf("Enter Your Family Monthly Incomee :\n");
    scanf(" %d" , &income);
    printf("Your Family Montly Income Is : %d\n" , income);
    if (CGPA > 3.7 && income < 50000)
    {
        printf("FULL SCHOLORSHIP\n");
    } else if (CGPA > 3.3 && income  <100000)
    {
        printf("HALF SCHOLORSHIP\n");
    } else {
        printf("NO SCHOLORSHIP\n");
    }
    return 0;
}