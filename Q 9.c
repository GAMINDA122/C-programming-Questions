#include<stdio.h>


void main(){
 int s1, s2, s3, max, min1, min2;
 float ran;

 printf("\nEnter sides of triangle to check whether triangle is right angle or not\n");
 printf("Enter 1st side : ");
 scanf("%d",&s1);
printf("Enter 2nd side : ");
scanf("%d",&s2);
printf("Enter 3rd side : ");
scanf("%d",&s3);
//scanf("%d %d %d",&s1,&s2,&s3);

 if(s1>s2)
        if(s1>s3){
                max = s1; min1 = s2; min2 = s3;
          }else{
                        max = s3; min1 = s2; min2 = s1;
                  }
 else
         if(s2>s3){
                             max = s2; min1 = s1; min2 = s3;
                     }else{
                                    max = s3; min1 = s2; min2 = s1;
                              }


 ran = sqrt(pow(min1,2) + pow(min2,2));

 if   (ran == (float)max)
   printf("\nAnswer : %d, %d and %d are sides of a right triangle",s1,s2,s3);
 else
   printf("\nAnswer : %d, %d and %d are not sides of a right triangle",s1,s2,s3);
}
