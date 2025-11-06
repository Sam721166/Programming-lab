
#include <stdio.h>

int main() {
    int arr[100], n;
    int i, evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("\nNumber of even elements: %d", evenCount);
    printf("\nNumber of odd elements: %d", oddCount);

    return 0;
}
