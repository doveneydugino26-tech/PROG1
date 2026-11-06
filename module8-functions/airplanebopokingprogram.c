#include <stdio.h>

float calculateFare(char travelClass);

float checkBaggage(char travelClass, float baggageWeight);

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee);

int main() {
    char travelClass;
    float baggageWeight, baseFare, excessFee;

    printf("Enter travel class (E-conomy / B-usiness): ");
    scanf(" %c", &travelClass);

    printf("Enter baggage weight (kg): ");
    scanf("%f", &baggageWeight);

    baseFare = calculateFare(travelClass);
    excessFee = checkBaggage(travelClass, baggageWeight);

    if (baseFare > 0) {
        printTicket(travelClass, baggageWeight, baseFare, excessFee);
    }

    return 0;
}

float calculateFare(char travelClass) {
    if (travelClass == 'e' || travelClass == 'E') {
        return 2500.0;
    } 
    else if (travelClass == 'b' || travelClass == 'B') {
        return 6500.0;
    } 
    else {
        printf("\nInvalid Travel Class. Please enter E for Economy or B for Business.\n");
        return -1.0; 
    }
}

float checkBaggage(char travelClass, float baggageWeight) {
    float allowance = 0.0;
    
    if (travelClass == 'e' || travelClass == 'E') {
        allowance = 20.0;
    } 
    else if (travelClass == 'b' || travelClass == 'B') {
        allowance = 40.0;
    }

    float excessWeight = baggageWeight - allowance;

    if (excessWeight > 0) {
        return excessWeight * 150.0; 
    } 
    
    return 0.0; 
}

void printTicket(char travelClass, float baggageWeight, float baseFare, float excessFee) {
    float totalFare = baseFare + excessFee;
    float allowance = (travelClass == 'b' || travelClass == 'B') ? 40.0 : 20.0;

    printf("\n----- BOARDING SUMMARY -----\n");
    if (travelClass == 'b' || travelClass == 'B') {
        printf("Travel Class: Business\n");
    } else {
        printf("Travel Class: Economy\n");
    }
    
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.2f kg (Allowance: %.2f kg)\n", baggageWeight, allowance);
    printf("Excess Baggage Fee: PHP %.2f\n", excessFee);
    printf("Total Fare: PHP %.2f\n", totalFare);
    printf("-----------------------------\n");
}