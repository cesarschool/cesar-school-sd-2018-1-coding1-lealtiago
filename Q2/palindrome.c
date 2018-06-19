#include <stdio.h>
#include <stdbool.h>

/**
 * Escreva uma função que analisa uma dada palavra ou frase, retornando se a mesma é um palíndromo ou não.
 * 
 * Função: bool isPalindrome (char[] sentence, int length)
 * Input:
 * - sentence: array de caracteres em minúsculo da palavra ou frase a ser analisada.
 * - length: tamanho do array - número de caracteres
 * Output: true se a sentença é um palídromo, falso caso negativo.
 */

bool isPalindrome (char sentence[], int length) {
    printf("\nisPalindrome::START: %s, %d\n", sentence, length);

    // TODO: 
    
    void FizzBuzz (int start, int end) {
   
    printf ("\nFizzBuzz::START: %d, %d\n", start, end);
  
    while (start < end) {
        
        if (((start % 3) == 0) && ((start % 5) == 0)) {
            printf("Fizz \n");
        } else if ((start % 3) == 0) {
            printf ("Buzz \n");
        } else if ((start % 5) == 0) { 
            printf ("FizzBuzz \n");
        } else {
            printf ("%d \n", start);
        }
        start = start + 1;
   
    }   
    
    printf("\nFizzBuzz::END\n");
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: FizzBuzz ###\n");
    
    FizzBuzz(1, 6);
    FizzBuzz(1, 16);
    FizzBuzz(1, 100);
    
    return 0;
}YOUR CODE HERE!
    
    printf("\nisPalindrome::END\n");
    return false;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: Palindrome ###\n");
    
    // true cases
    isPalindrome("ovo", 3);
    isPalindrome("arara", 5);

    // false cases
    isPalindrome("cesar", 5);
    isPalindrome("school", 6);

    return 0;
}
 
