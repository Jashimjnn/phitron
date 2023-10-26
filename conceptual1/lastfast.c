#include <stdio.h>


int main() {
    int num, first_digit, last_digit, new_num;


    printf("Enter a number: ");
    scanf("%d", &num);

 // Extract the first and last digits
    last_digit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;


    // Swap the first and last digits
    new_num = last_digit;
    num /= 10;
    while (num > 0) {
        new_num *= 10;
        new_num += num % 10;
        num /= 10;
    }
    new_num *= 10;
    new_num += first_digit;


    printf("The number with first and last digits swapped: %d\n", new_num);


    return 0;
}


//https://www.hackerrank.com/mdjashimuddinjn1
//@mdjashimuddinjn1