#include <stdio.h>
int main()
{
    int choose,hour;
    printf("Did You Passed The  Programming Fundmentals :\n");
    printf("1.YES\n\n0.NO\n");
    scanf(" %d" , &choose);
    printf("You Chose %d\n" , choose);
    float grade;
    printf("Enter Your Programming GRADE :\n");
    scanf(" %f" ,  &grade);
    printf("Your Programmming GRADE IS : %.2f\n" , grade);
    printf("Enter Your TOTAL Credit Hours :\n");
    scanf(" %d" , &hour);
    printf("Your Total Credit Hour is : %d \n" , hour);
    switch (choose)
    {
        case 0:
        if(grade < 2.5 && hour <30 )
        {
            printf("You Are Not Eligible For Advance Programming Course \n");
            printf("GRADE Is Below The Merit\n");
            printf("Credit Hour Are LESS\n");
        }
        break;
       case 1:
       if(grade >= 2.5 && hour >= 30)
       {
        printf("You Are NOW Registerd For Advance Programming Course\n");
       }
       break;
       default:
       printf("INVALID CHOICE\n");
    }
    return 0;
}