#include<stdio.h>

#define CA1 1000
#define CA2 750
#define CA3 500
#define CA4 250
#define EA1 500
#define EA2 200
#define EA3 100
#define EA4 0



void main(){//using switch
 int level, jobnumber,gIndex;
 float gross, basic, house_rent, perks,net,incometax;

 printf("Enter your Level [ Level 1 to 4 ] :");
 scanf("%d",&level);
 printf("Enter your Job Number  :");
 scanf("%d",&jobnumber);
 printf("Enter your basic salary  :");
 scanf("%d",&basic);
 //printf("\nEnter level, job number, and basic pay : ");
 //scanf("%d %d %f",&level,&jobnumber,&basic);

 switch(level){
  case 1:
  perks = CA1 + EA1;
  break;
  case 2:
  perks = CA2 + EA2;
  break;
  case 3:
  perks = CA3 + EA3;
  break;
  case 4:
  perks = CA4 + EA4;
  break;
  default:
   printf("\nInvalid Level");
   exit(1);
 }

 house_rent = 0.25 * basic;
 gross = basic + house_rent + perks;
    gIndex = gross/1000;

    switch(gIndex){
        case 0:
        case 1:
                incometax = 0;
                break;
        case 2:
        case 3:
                incometax = gross * 0.03;
                break;
        case 4:
        case 5:
                incometax = gross * 0.05;
                break;
        default:
                incometax = gross * 0.08;
                break;
    }
 net = gross - incometax;
 printf("\nJob number : %d, level : %d, Net pay : %.2f\n",jobnumber,level,net);
 printf("End of the program");
}
