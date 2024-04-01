#include<stdio.h>
  void main(){
    int a,b,c,max;
    printf("\nEnter 3 numbers to find max --->  \t");
    printf("\nEnter your 1st number : ");
    scanf("%d",&a)             ;
    printf("Enter your 2ndt number : ");
    scanf("%d",&b)             ;
    printf("Enter your 3rd number : ");
    scanf("%d",&c)            ;
    //scanf("%d %d %d",&a,&b,&c);
    if (a>b)
    if (a >c)
         max = a;
    else
         max = c;
   else
   if (b>c)
        max = b;
    else
        max = c;
    printf("\nMax number is  = %d",max);
}
