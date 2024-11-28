#include <stdio.h>
int main() {
    int arr[3][3] = {
        {2, 3, 5},
        {4, 6, 7},
        {9, 13, 11}
    };
    
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if ((i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2)) {
                sum = sum + arr[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien cheo cua ma tran la: %d\n", sum);

    return 0;
}

