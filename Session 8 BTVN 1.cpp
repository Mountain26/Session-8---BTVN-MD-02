#include <stdio.h>

int main() {

    int array[1][2] = {123, 456};

    printf("Mang da nhap:\n");
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d", array[i][j]);
		}
    }

    return 0;
}
