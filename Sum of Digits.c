#include <stdio.h>

int sum_of_digits(int n) {
    int digit_sum = 0;
    

    if (n < 0) {
        n = -n;
    }
    
    while (n != 0) {
        digit_sum += n % 10;
        n /= 10;
    }
    
    return digit_sum;
}

int main() {
    int n, result;
    
    printf("Enter an integer: ");
    scanf("%d", &n);
    
    result = sum_of_digits(n);
    printf("Sum of digits: %d\n", result);
    
    return 0;
}
