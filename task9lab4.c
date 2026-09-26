#include <stdio.h>
int main()
{
    int people,weight;
    printf("Enter The Total Number Of People In LIFT :\n");
    scanf(" %d" , &people);
    printf("There Are %d People in Lift\n" , people);
    printf("Enter Combine Weight Of People :\n");
    scanf(" %d" ,  &weight);
    printf("The Combine Wegiht Of People In Lifi Is : %d\n" , weight);
    if(weight > 1000)
    {
        if (people <= 10)
        {
            printf("Lift Over weight");
        }
    } else if(weight < 1000){
        if(people > 10){
          printf("Number Of People Excced\n");
        }
        else {
            printf("All Clear\n");
        }
    }


    return 0;
}