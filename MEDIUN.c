// Enter three number & show the median value //

#include <stdio.h>
int main(){
int x,y,z,m;
printf("Enter the three numbers respectively:\n");
scanf("%d%d%d",&x,&y,&z);

if ((x >= y && x <= z) || (x <= y && x >= z)) {
        m = x;
    } else if ((y >= x && y <= z) || (y <= x && y >= z)) {
        m = y;
    } else {
        m = z;
    }
 printf("MEDIUN: %d\n",m);

/*  
if( x>=y && x>=z && y<=x && y<=z){
    printf("MEDIUN: %d\n",z);
}
else if( x>=y && x>=z && z<=x && z<=y){
    printf("MEDIUN: %d\n",y);
}
else if( y>=x && y>=z && x<=y && x<=z){
    printf("MEDIUN: %d\n",z);
}
else if( y>=x && y>=z && z<=y && z<=x){
    printf("MEDIUN: %d\n",x);
}
else if( z>=x && z>=y && x<=y && x<=z){
    printf("MEDIUN: %d\n",y);
}
else if( z>=x && z>=y && y<=x && y<=z){
    printf("MEDIUN: %d\n",x);
}
*/
    return 0;
}