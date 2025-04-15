#include <stdio.h>

int main() {
    int m, pass = 1;
    int total = 0; // Added semicolon here
    printf("Enter marks for five subjects (0-100):\n");
    
    for (int i = 1; i <= 5; i++) {
        do {
            printf("Subject %d: ", i);
            scanf("%d", &m);
            if (m < 0 || m > 100) {
                printf("Invalid input. Please re-enter.\n");
            }
        } while (m < 0 || m > 100); // Corrected the condition for the do-while loop

        total += m; // Moved this line outside of the do-while loop
        if (m < 40) {
            pass = 0;
        }
    }
    
    float a = total / 5.0;
    printf("Average marks: %.2f\n", a);
    printf("Result: %s\n", pass ? "Passed" : "Failed");
    
    return 0;
}
