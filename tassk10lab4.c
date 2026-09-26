#include <stdio.h>
int main()
{
    int zone;
    float speed,limit=0;
    float base=100.0, fine=0.0;
    printf("Enter Zone Type : 1.School Zone\n2.Highway\n3.Residental Area\n");
    scanf(" %d" ,  &zone);
    printf("Enter Driver Speed\n");
    scanf(" %f" , &speed);
    switch (zone){
        case 1:
        limit=30;
        break;
        case 2:
        limit=100;
        break;
        case 3:
        limit=50;
        break;
        default:
        printf("Invalid ZONE\n");
    }
    if (speed > limit + 20){
        fine = base *2;
        printf("Violation: Speed Exceeded\n");
        printf("Final Fine Amount : Rs %.2f\n" , fine);
    } else if (speed > limit){
        fine = base;
        printf("Violation: Speed exceeded limi %0.0f\n" , limit);
        printf("Final FIne Amount: Rs  %.2f\n" , fine);
    

    } else {
        printf("NO VIOLATION FOUND!\n");
    }
    return 0; 
}