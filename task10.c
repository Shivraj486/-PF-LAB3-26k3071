#include <stdio.h>
int main()
{
  double num;
printf("Enter a Floating-point number: \n");
scanf("%lf" ,&num);
printf("With 2 Decimal places: %.2lf\n" , num);
printf("With 6 Decimal places: %6.lf\n" , num);
return 0;
}
