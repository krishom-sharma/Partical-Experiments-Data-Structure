#include <stdio.h>
int main() {
    int m, total = 0, pass = 1;
    printf("Enter marks for five subjects (0-100):\n");
    for (int i = 1; i <= 5; i++){
        do {
            printf("Subject %d: ", i);
            scanf("%d", &m);
            if (m< 0 || m> 100) {
                printf("Invalid input. Please re-enter.\n");
            }
        }
        total += m;
        if (m < 40) {
            pass = 0;
        }
    }
    float a= total / 5.0;
    printf("Average marks: %.2f\n", a);
    printf("Result: %s\n", pass? "Passed" : "Failed");
    return 0;
}