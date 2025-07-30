#include<stdio.h>

int main(){
    int num;
    printf("Enter the 3-digit number: ");
    scanf("%d", &num);

    int reversed[3];

    // Reversing the digit
    for(int i = 0; i < 3; i++){
        reversed[i] = num % 10;
        num = num/10;
    }

    // Displaying the reversed number
    for(int i = 0; i < 3; i++){
        printf("%d ", reversed[i]);
    }

    return 0;
}
