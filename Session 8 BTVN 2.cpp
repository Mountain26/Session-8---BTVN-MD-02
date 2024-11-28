#include <stdio.h>

int main() {

    int array[3][3] = {{1,2,3},{ 4,5,6,},{7,8,9}};
    int num;
	int count = 0; 
    printf("Moi ban nhap vao so bat ki:\n");
    scanf("%d", &num);
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
        	if ( num==array[i][j]){
        		printf(" Vi tri: %d|%d",i+1, j+1);
        		count++;		
			}
			} 
		}
		if(count==0){
			printf("Phan tu khong ton tai trong mang");	
		} 
    }
