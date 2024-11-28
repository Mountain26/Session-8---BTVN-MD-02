#include <stdio.h>

int main() {
    int arr[9] = {1, 2, 3, 2, 4, 3, 2, 5, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int bienDem = 0;
    int giatriXuathien;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;          
				}
        }
        if (count > bienDem) {
            bienDem = count;
            giatriXuathien = arr[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d, so lan xuat hien: %d\n", giatriXuathien, bienDem);
    return 0;
}

