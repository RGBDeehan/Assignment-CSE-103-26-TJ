/* Input the age of a person and display whether he/she is a voter or not. */

#include <stdio.h>
int main(){
float x;
    printf("Enter the age: ");
    scanf("%f",&x);

if(x >= 18 ){
        printf("He/She is a voter");
    }
else{printf("He/She is not a voter");}
return 0;
}
