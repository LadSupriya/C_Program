#include <stdio.h>
int main() {    

    int number1, number2, sub;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sub = number1 - number2;      
    
    printf("%d - %d = %d", number1, number2, sub);
    return 0;
}