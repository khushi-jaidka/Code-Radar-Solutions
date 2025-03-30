#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        int a = i - 1;  // Correctly initialize 'a' here for each row
        
        // Print leading spaces
        for(int l = 1; l <= n - i; l++) {
            printf(" ");
        }
        
        // Print increasing numbers
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // Print decreasing numbers
        for(int k = 1; k <= i - 1; k++) {
            printf("%d", a);
            a--;  // Decrement 'a' after printing each number
        }
        
        printf("\n"); // Move to the next line after each row
    }
    
    return 0;
}
