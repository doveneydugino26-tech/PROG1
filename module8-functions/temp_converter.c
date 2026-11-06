// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

float celsiusToFahrenheit(float c);

float fahrenheitToCelsius(float f);

int main() {
  
  int choice;
  float f, c, result;
  
    printf("1 - Celsius to Fahrenheit\n""2 - Fahrenheit to Celsius\n" "Choice: ");
    scanf("%d", &choice);

if(choice==1){

    printf("Enter Celsius: ");
    scanf("%f", &c);

    result=celsiusToFahrenheit(c);

    printf("%.2f = %.2f", c, result);

    celsiusToFahrenheit(c);
  }

  else if(choice==2){

     printf("Enter Fahrenheit: ");
  scanf("%f", &f);

    result=fahrenheitToCelsius(f);

    printf("%.2f = %.2f", f, result);

    fahrenheitToCelsius(f);

  }

  return 0;
}
float celsiusToFahrenheit(float c){
  
return (c * (9.0 / 5.0)) + 32.0;
  
}

float fahrenheitToCelsius(float f){
 return (f - 32.0) * (5.0 / 9.0);
}
