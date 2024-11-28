#include <stdio.h>

int main() {
	int n;
	 
	printf("Moi ban nhap vao mot so nguyen: ");
	scanf("%d", &n);
	
	int array[n][n];
    int bienSo=1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = bienSo++;
        }
    }

    printf("Ma tran vuong:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
