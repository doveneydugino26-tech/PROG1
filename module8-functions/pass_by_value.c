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
/* because the doubled value of num was assigned as the value of the function itself not the num variable, that is why when you call the assigned value of num it will still be 7 unless you call the function.*/
