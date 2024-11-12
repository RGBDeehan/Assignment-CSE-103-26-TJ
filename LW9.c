#include <stdio.h>
int main(){
float x,y,z ;
    printf("Enter the 1st hand of triangle:");
    scanf("%f",&x);

    printf("Enter the 2nd hand of triangle:");
    scanf("%f",&y);

    printf("Enter the 3rd hand of triangle:");
    scanf("%f",&z);

if ( x+y>z && y+z>x && z+x>y ){
    printf("The triangle is valid");
}
else {
    printf("The triangle is invalid");
}
return 0;
}
