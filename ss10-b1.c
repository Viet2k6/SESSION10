#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key;
	printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Phan tu %d nam o vi tri thu %d trong mang.\n", key, i);
            return 0; 
        }
    }
    printf("Phan tu %d khong ton tai trong mang.\n", key);

    return 0;
}








