#include <stdio.h>
int main() {
    int m[5];
    int sum = 0;
    float avg;
    printf("Enter marks for five subjects (0-100): "); 
    for (int i = 0; i < 5; i++) {
        while (1) { 
            printf("Subject %d: ", i + 1);
            scanf("%d", &m[i]);
            if (m[i] < 0 || m[i] > 100) {
                printf("Invalid input. Marks should be between 0 and 100. Please re-enter.\n");
            } else {
                break;
            }
        }
        sum += marks[i];
    }
    average = sum / 5.0;
    printf("Average marks: %.2f\n", avg);
    int passed = 1;
    for (int i = 0; i < 5; i++) {
        if (m[i] < 40) {
            passed = 0;#include <stdio.h>
int main() {
    int m[5];
    int sum = 0;
    float avg;
    printf("Enter marks for five subjects (0-100): \n"); 
    for (int i = 0; i < 5; i++) {
        while (1) { 
            printf("Subject %d: ", i + 1);
            scanf("%d", &m[i]);
            if (m[i] < 0 || m[i] > 100) {
                printf("Invalid input. Marks should be between 0 and 100. Please re-enter.\n");
            } else {
                break;
            }
        }
        sum += m[i];
    }
    avg = sum / 5.0;
    printf("Average marks: %.2f\n", avg);
    int passed = 1;
    for (int i = 0; i < 5; i++) {
        if (m[i] < 40) {
            passed = 0;
            break;
        }
    }
    if (passed) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }
    return 0;
}
            break;
        }
    }
    if (passed) {
        printf("Result: Passed\n");
    } else {
        printf("Result: Failed\n");
    }
    return 0;
}