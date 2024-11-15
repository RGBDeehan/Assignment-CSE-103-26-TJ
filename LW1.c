#include <stdio.h>
float main(){
int x;
    printf("Enter the number: ");
    scanf("%f",&x);

    if ((int) x % 5 == 0) {
        printf("The number is divisible by 5");
    }
else {printf("The number is not divisible by 5");
}

return 0;
}
