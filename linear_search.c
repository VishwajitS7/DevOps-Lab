#include <stdio.h>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int target;
    scanf("%d", &target);

    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            printf("Found at index %d\n", i);
            found = 1;
            break;  
        }
    }

    if (!found) {
        printf("Element not found");
    }

    return 0;
}