#include <stdio.h>

int main() {
    int i = 0;
    int n1 = 0, n2 = 1, n0 = 2;

    while(i <10) {
        if (i <= 1)
            n0 = i;
        else {
            n0 = n1 + n2;
            n1 = n2;
            n2 = n0;
        }
        printf("%d ", n0);
        i++;
    }

    printf("\n");

    return 0;
}