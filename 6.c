#include <stdio.h>

int main() {
    int i;
    int n1 = 0, n2 = 1, n0;

    for (i = 0; i < 10; i++) {
        if (i <= 1)
            n0 = i;
        else {
            n0 = n1 + n2;
            n1 = n2;
            n2 = n0;
        }
        printf("%d ", n0);
    }

    printf("\n");

    return 0;
}