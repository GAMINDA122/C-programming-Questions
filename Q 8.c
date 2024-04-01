#include<stdio.h>

void main()  {
 int a ,b, c;
 float r1,r2;

 printf("\nEnter coefficient of an equation to find roots ---> \n ");
 printf("\nEnter your a : ");
 scanf("%d",&a);
printf("Enter your b : ");
 scanf("%d",&b);
printf("Enter your c : ");
 scanf("%d",&c);
 //scanf("%d %d %d",&a,&b,&c);

 if(a==0 && b==0)
       printf("\nThere are no solutions");
 else if(a==0){
              printf("\nThere is only one solution ");
              r1 = -c/(float)b;
              printf("%.2f",r1);
         }else if((pow(b,2)-4*a*c)<0)
                        printf("\nThere are no roots");
                   else{
                                   r1 = (-b + sqrt(pow(b,2)-4*a*c))/(float)(2*a);
                                   r2 = (-b - sqrt(pow(b,2)-4*a*c))/(float)(2*a);
                                   printf("\nThere are 2 real roots. They are %.2f and %.2f",r1,r2);
                          }
}
