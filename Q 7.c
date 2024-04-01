#include<stdio.h>

void main(){ //using if

 int x,y;
        printf("\nEnter value x to find y = f(x): ");
        scanf("%d",&x);

        if(x<0)
  y=1;
 else if(x==0)
  y=0;
 else
  y=-1;
        printf("\n x value  = %d , y value = f(x) = %d",x,y);

}
