/* Write a C program to input basic salary of an employee and calculate its Gross salary according to following: Basic Salary <= 10000 : HRA = 20%, DA = 80% Basic Salary <= 20000 : HRA = 25%, DA = 90% Basic Salary > 20000 : HRA = 30%, DA = 95% */

#include <stdio.h>
int main(){
float x , y;
    printf("Enter the amount of sallary: ");
    scanf("%f",&x);

    if ( x <= 10000) {
       y = x+(x *0.2 )+(x*0.8);
    }
else if( x > 10000 && x <= 20000) {
    y = x + ( x * 0.25 )+(x* 0.9 );
}
 else if ( x > 20000) {
    y = x + ( x * 0.3 )+(x* 0.95 );
}

printf("The gross salary is: %.2f",y);
return 0;
}

