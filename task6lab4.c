#include <stdio.h>
int main()
{
    int temperature,pressure;
    printf("Enter Machine Temperature : \n");
    scanf(" %d" , &temperature);
    printf("Machine Temperature Is : %d \n" , temperature);
    printf("Enter Machine Pressure : \n");
    scanf("%d" , &pressure);
    printf("Machine Pressure Is : %d\n" , pressure);
    if (temperature > 100 || pressure > 250)
    {
        printf("Machine Shuts Down\n");
    } else if (temperature <=100 && temperature >=85 &&(pressure <=250 && pressure >= 200) )
    {
        printf("WARNING\n");
    } else {
        printf("SAFE\n");
    }
    return 0;
}