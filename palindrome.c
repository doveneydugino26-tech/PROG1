// Online C compiler (editor)
// Write and run C online using this editor.
#include <string.h>
#include <stdio.h>

int main() {
    int size = 100;
    char word[size];
    int palindrome = 1;
    int head;
    int tail;
    
    printf("Enter your word: ");
    scanf("%99[^\n]", word);
    
    printf("Original: %s\n", word);
    tail = strlen(word) -1;
    
    printf("Reversed: ");
    
    for(int i =tail; i>=0; i-- ){
        printf("%c", word[i]);
    }
    
    printf("\n");
    for ( head = 0; head<=tail/2; head++){
        if (word[head] != word[tail]){
            palindrome = 0;
            break;
        }
        tail--;
    }
    
    if(palindrome){
    printf("The word %s is a Palindrome!", word);
    }
    else{
        printf("The word %s is not a Palindrome!", word);
    }
    
    return 0;
}