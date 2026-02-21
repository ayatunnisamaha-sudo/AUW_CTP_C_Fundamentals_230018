#include <stdio.h>

int findMax(int a, int b) {
    if(a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int max = findMax(x, y);
    printf("Max = %d\n", max);

    return 0;
}
