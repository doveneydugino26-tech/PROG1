#include <stdio.h>

    float calculateBMI(float weight, float heightM);

    void categorizeBMI(float bmi);

int main() {
    float weight, heightM;

    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    printf("Enter height in meters: ");
    scanf("%f", &heightM);

    
    float bmi = calculateBMI(weight, heightM);

  
    printf("\nYour BMI is: %.2f\n", bmi);

    categorizeBMI(bmi);

    return 0;
}

    float calculateBMI(float weight, float heightM) {
    return weight / (heightM * heightM);
}


void categorizeBMI(float bmi) {
    if (bmi >= 30.0) {
        printf("Category: Obese\n");
    } 
    else if (bmi >= 25.0) {
        printf("Category: Overweight\n");
    } 
    else if (bmi >= 18.5) {
        printf("Category: Normal weight\n");
    } 
    else {
        printf("Category: Underweight\n");
    }
}