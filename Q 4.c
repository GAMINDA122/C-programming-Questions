#include<stdio.h>

void main(){//using switch
    char stno[12];
    int mark;
	 printf("Welcome to our Students ---> ") ;
    printf("\nEnter student number\t:");
    scanf("%s",stno);
    printf("\nEnter average mark\t:");
    scanf("%d",&mark);

    mark /=10;

    switch(mark){
 case 10:  case 9: case 8:  printf("\n%s - Grade is Honours!",stno);
                              break;
 case 7: case 6:                 printf("\n%s - Grade is First Division!",stno);
                              break;
 case 5:                             printf("\n%s - Grade is Second Division!",stno);
                              break;
 case 4:                             printf("\n%s - Grade is Third Division!",stno);
                              break;
 default:                            printf("\n%s - Sorry. Your grade is Fail",stno);
    }

}

