#include <stdio.h>
int main() {
    int size = 0;
    int arr[100];
    int c;
    do {
        printf("\nMenu:\n1. Enter elements of the array \n2. Display array\n3. Remove an element from the array\n4. Insert an element into the array\n5. Linear search\n6. Binary search\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &c);
        switch (c) {
        case 1: 
            printf("Enter size of Array: ");
            scanf("%d", &size);
            printf("Enter elements of Array: ");
            for (int i = 0; i < size; i++) {
                scanf("%d", &arr[i]);
                }
        break;
        case 2:
        printf("Array elements are: ");
            for (int i = 0; i < size; i++){
                printf("%d ", arr[i]);}
                printf("\n");
                break;
        case 3:
        if (size == 0) {
           printf("Array is empty. Not able to remove element.\n");
                } 
                else {
                    int p;
                    printf("Enter Position to be removed (0 to %d): ", size - 1);
                    scanf("%d", &p);
                    if (p < 0 || p >= size) {
                        printf("Invalid position!\n");
                    } else {
                        for (int i = p; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        printf("Element removed successfully.\n");
                    }
                }
            break;
      case 4:
        if (size >= 100) {
            printf("Array is full. Cannot insert more elements.\n");
            } 
            else {
            int e, a;
            printf("Enter element to insert: ");
            scanf("%d", &e);
            printf("Enter position to insert the element (0 to %d): ", size);
            scanf("%d", &a);
             if (a < 0 || a> size) {
             printf("Invalid position!\n");
                    } else {
                        for (int i = size; i > a; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[a] = e;
                        size++; 
                        printf("Element inserted successfully.\n");
                    }
                }
                break;
            case 5:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    int key;
                    printf("Enter element to search (Linear Search): ");
                    scanf("%d", &key);
                    int l = -1;
                    for (int i = 0; i < size; i++) {
                        if (arr[i] == key) {
                            l = i;
                            break;
                        }
                    }
                    if (l != -1) {
                        printf("Element found at index: %d .\n", l);
                    } else {
                        printf("Element not found.\n");
                    }
                }
                break;
            case 6:
                if (size == 0) {
                    printf("Array is empty.\n");
                } else {
                    for (int i = 0; i < size - 1; i++) {
                        for (int j = 0; j < size - i - 1; j++) {
                            if (arr[j] > arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                    printf("Sorted Array for Binary Search: ");
                    for (int i = 0; i < size; i++) {
                         printf("%d ", arr[i]);
                    }
                    printf("\n");
                    int key;
                    printf("Enter element to search (Binary Search): ");
                    scanf("%d", &key);
                    int left = 0, right = size - 1;
                    int b = -1;
                    while (left <= right) {
                        int m = left + (right - left) / 2;
                        if (arr[m] == key) {
                            b = m; 
                            break;
                        }
                        if (arr[m] < key) {
                            left = m + 1;
                        } else {
                            right = m - 1;
                        }
                    }
                    if (b != -1) {
                        printf("Element found at index: %d .\n", b);
                    } else {
                        printf("Element not found.\n");
                    }
                }
                break;
            case 7: 
                printf("Closing\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (c!= 7);
    return 0;
}