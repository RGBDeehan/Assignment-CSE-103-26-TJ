/* Write a C program to input a number indicating income of a person and calculate tax with the given following conditions. if income is less then, 1,50,000 then no tax if taxable income is in the range 1,50,001-300,000 then charge 10% tax if taxable income is in the range 3,00,001-500,000 then charge 20% tax if taxable income is above 5,00,001 then charge 30% tax. */

#include <stdio.h>
int main () {
float x , y ;
    printf("Enter your annual income:");
    scanf("%f",&x);

if( x <= 150000) {
    y = 0;
}
else if ( x > 150000 && x <= 300000 ){
    y = (x-150000) * 0.1;
}
else if ( x > 300000 && x <= 500000) {
    y = (x-300000) * 0.2 + (150000*0.1);
}
else {
    y = (x-500000) * 0.3 + (200000*0.2)+ (150000*0.1);
}

printf("Your income tax is : %.2f\n",y);

    return 0;
}
