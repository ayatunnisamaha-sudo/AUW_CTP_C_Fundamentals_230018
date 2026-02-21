#include <stdio.h>

int main()
{
    int arr[5];
    int largest;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];

    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Largest = %d\n", largest);

    return 0;
}
