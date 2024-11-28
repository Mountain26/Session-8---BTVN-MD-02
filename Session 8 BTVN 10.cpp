#include <stdio.h>

int main() {
    int arr[] = {1, 2, 5, 6, 7, 3, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int bienDemrong = 0;
    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
        if (count[i] > bienDemrong) {
            bienDemrong = count[i];
        }
    }
    printf("Cac phan tu co so lan xuat hien nhieu nhat la:\n");
    for (int i = 0; i < n; i++) {
        if (count[i] == bienDemrong) {
            printf("%d xuat hien %d lan\n", arr[i], bienDemrong);
        }
    }

    return 0;
}

