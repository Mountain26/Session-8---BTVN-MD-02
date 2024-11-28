#include <stdio.h>

int main() {

    int array[1][2] = {123, 456};

    printf("Mang da nhap:\n");
    for (int i = 0; i >= 0; i--) {
        for (int j = 1; j >= 0; j--) {
            printf("%d", array[i][j]);
		}
    }

    return 0;
}
