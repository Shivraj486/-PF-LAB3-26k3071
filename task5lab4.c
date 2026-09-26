#include <stdio.h>
int main()
{
    int amount,city,choice;
    printf("Are You a Premimum Customer\n");
    printf("1.YES\n0.NO\n");
   scanf(" %d" , &choice);
   printf("Enter Your Order Amount :\n");
   scanf("%d" , &amount);
   printf("Your Order Amount is : %d\n" , amount);
   printf("Is Your Order With in The City\n");
   printf("1.YES\n0.NO\n");
   scanf("%d" , &city);
   switch (choice)
   {
    case 1:
    if (amount >= 3000 && amount < 50000 &&(city == 1  || city ==0)){
        printf("COD Is Avalabile\n");
    } else if(amount > 50000 && (city == 1 || city ==0)){
        printf("Cash On Delivery NOT Avalabile\n");
    }
    break;
    case 0:
    if (amount >= 3000 && amount <=50000 && city == 1)
    {
        printf("COD Is Avalabile\n");
    } else if(amount >=3000 && amount<=50000 && city ==0){
        printf("COD Is Not Avalabile");
    } else {
        printf("COD Is NOT Avalabile\n");
    }
   }

    return 0;
}