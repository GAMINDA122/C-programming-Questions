#include<stdio.h>

void main(){
    char cusNo[15];
    int noOfUnits;
    float billamount ;

    printf("Welcome our Customers ---> ");
    printf("\nEnter customer number\t: ");
    scanf("%s", cusNo);
    printf("\nEnter no of consumption units\t: ");
    scanf("%d",&noOfUnits);

    if  (noOfUnits<=100)
 billamount = noOfUnits * 5.5;
    else if  (noOfUnits<=200)
     billamount = (noOfUnits-100) * 8.5 + 100 * 5.5;
           else if(noOfUnits<=300)
             billamount = (noOfUnits-200) * 14.5 + 8.5 * 100 + 5.5 * 100;
                 else if(noOfUnits<=400)
               billamount = (noOfUnits-300) * 21.5 + 14.5*100 + 8.5*100 + 5.5*100;
                      else
               billamount = (noOfUnits-400) * 32.5 + 100*21.5 + 14.5*100 + 8.5*100 + 5.5*100;

    printf("\nYour due amount is Rs.%.2f",billamount);
}
