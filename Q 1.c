#include<stdio.h>
void main()  {
    int a,b,c,d;
    float answer;

    printf("\nEnter 4 numbers to find ratio ----> \t");
    printf("\nEnter your 1st number : ");
    scanf("%d",&a)             ;
    printf("Enter your 2ndt number : ");
    scanf("%d",&b)             ;
    printf("Enter your 3rd number : ");
    scanf("%d",&c)             ;
    printf("Enter your 4th number : ");
    scanf("%d",&d)             ;
    //scanf("%d %d %d %d",&a,&b,&c,&d);
    if((c-d)!=0){
        answer = (a+b)/(float)(c-d);
        printf("\nAnswer Ratio = %f",answer);
    }
   else
        printf ("Division by zero");
 }
