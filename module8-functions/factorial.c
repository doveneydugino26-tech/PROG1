// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>

int factorial(int n);

int main() {
    
    int result,n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    result=factorial(n);
    printf("\n%d! = %d\n", n, result);
    
    factorial(n);
    
    return 0;
}
int factorial(int n){
    int result;
    if (n==0){
        result = 1;
    }
    else{
        result = 1;
    }
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}