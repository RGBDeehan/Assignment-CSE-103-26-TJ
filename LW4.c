/* Input a number and display whether that is perfect square or not. */

#include <stdio.h>
#include <math.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);


    double sqrt_num = sqrt(x);


    int b = (int) sqrt_num;
    if (sqrt_num == b) {
        printf("Perfect Square\n");
    } else {
        printf("Not Perfect Square\n");
    }

    return 0;
}

// ANOTHER WAY //

#include <stdio.h>
#include <math.h>

int main() {
    int x ,  b ;
    float a ;
    printf("Enter a number: ");
    scanf("%d", &x);


   a = sqrt(x) ;
    b = a ;


    if (b - a == 0) {
        printf("Perfect Square\n");
    } else {
        printf("Not Perfect Square\n");
    }

    return 0;
}

// Another //

// perfect square //
#include <stdio.h>
#include <math.h>
int main() {
int a;
float b,x;

printf("Enter the number: ");
scanf("%f",&x);

a= sqrt(x);
b= sqrt(x);

if(a==b){
    printf("It's a perfect square");
}
else{printf("It's not a perfect square");}
    return 0;
}
