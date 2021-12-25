#include <stdio.h>

void xuatMang(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
 
void daoNguocMang(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[n - 1 - i] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
 
int main(void)
{
	int size;
	printf("Nhap n=");
    scanf("%d" ,&size);
    if (size > 1) {
	    int arr[size];
		for(int i=0; i < size; i++) {
			printf("A[%d]=", i);
	   		scanf("%d", &arr[i]);
	    }
	    int n = sizeof(arr)/sizeof(arr[0]);
	    daoNguocMang(arr, n);
	    xuatMang(arr, n);
	} else {
		printf("N khong hop le");
	}
    return 0;
}