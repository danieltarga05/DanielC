#include <stdio.h>
int main(){
    int num1 = 3;
    int num2 = 9;
    printf("and %d\n", (num1&num2)); 
    printf("or %d\n", (num1|num2)); 
    printf("xor %d\n", (num1^num2));
    return 0;
}