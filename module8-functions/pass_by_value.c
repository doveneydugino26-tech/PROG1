#include <stdio.h>

    void tryToDouble(int num);

int main(){

    int num = 7;
    
    printf("Before calling tryToDouble: num = %d  \n", num);
  
    tryToDouble(num);
  
    printf("After calling tryToDouble: num = %d\n", num);
  
    return 0;
}

void tryToDouble(int num){
    num = num * 2;
    printf("Inside tryToDouble, doubled value = %d\n", num);
}
//What to explain in your submission://

//Why does the caller's variable stay unchanged even though the function clearly doubles something?//
/*The caller's variable stays unchanged because C uses pass-by-value. When tryToDouble(num) is called, C passes a copy of the variable's value (7), not the variable itself. The function modifies its own local copy, leaving the original num in main unaffected. Because the function returns void, no value is sent back to main.*/
