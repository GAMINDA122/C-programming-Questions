#include <stdio.h>
#include <math.h>

void main() {
    char name[25];
    float mass, height, bmi;

    printf("\nBMI [ Body Mass Index ] \n");
    printf("\nEnter your name : ");
    scanf("%s", name);
    printf("\nEnter your mass(kg) : ");
    scanf("%f", &mass);
    printf("\nEnter your height(m) : ");
    scanf("%f", &height);

    bmi = mass / pow(height, 2);

    printf("\n%s, Your BMI value is %.2f and your health risk is : ", name, bmi);

    if (bmi < 18.5) {
        printf("Risk of developing problems such as nutritional deficiency and osteoporosis");
    } else if (bmi < 23) {
        printf("Low Risk (healthy range)");
    } else if (bmi < 27.5) {
        printf("Moderate risk of developing heart disease, high blood pressure, stroke, diabetes");
    } else {
        printf("High risk of developing heart disease, high blood pressure, stroke, diabetes");
    }
}
