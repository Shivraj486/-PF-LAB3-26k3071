#include <stdio.h>
int main()
{
    int choice,rs,minutes4,PLAN,used;
    int total=0;
    
printf("PLAN 1: RS 500 for 1000 Minutes\nPLAN 2: Rs 800 for 2000 minutes\nPLAN 3: Rs 1200 For Unlimited Minutes\n");
printf(" Make Custom PLAN For PLAN 4\n");
printf("Enter Rs :\n");
scanf(" %d" , &rs);
printf(" Enter Minutes \n");
scanf(" %d" , &minutes4);
printf("PLAN 4: Rs %d For %d Minutes\n" , rs , minutes4);
printf("Enter PLAN NO: \n");
scanf("%d" , &PLAN);
printf("You Chose PLAN No : %d\n" , PLAN);
switch (PLAN)
{
    case 1:
    printf("Enter Minutes USED :\n");
    scanf("%d" , &used);
    printf(" Total Bill is equals TO 500\n");
    if(used > 1000)
    {
        total += (used - 1000)*2;
        printf(" Your Total BILL is %d\n" , total);
    }
    break;
    case 2:
    printf("Enter Minutes USED :\n");
    scanf("%d" , &used);
    printf(" Total Bill is equals TO 800\n");
    if(used > 2000)
    {
        total += (used - 2000)*2;
        printf(" Your Total BILL is %d\n" , total);
    }
    break;
    case 3:
    printf("Your Total  Bill Is 1200");
    break;

    case 4:
    printf("TOtal Bill Amount IS : %d\n" , rs);
    break;
    default :
    printf("INVALID PLAN\n");
}
    return 0;
}