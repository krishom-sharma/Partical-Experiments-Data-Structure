#include <stdio.h>

int main() {
    int size = 0;
    int arr[100];
    int c;
    printf("Enter size of Array: ");
    scanf("%d", &size);
    printf("Enter elements of Array:\n");
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array elements are: \n[");
    for (int j = 0; j < size; j++){
        printf("%d ", arr[j]);}
    printf("]\n");
    for (int k = 0; k < size; k++){
        c += arr[k];}
    printf("The total: \n= %d", c);
    return 0;
}