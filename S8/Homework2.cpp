#include <stdio.h>
int main() {
	int n;
	printf("Nhap so n : ");
	scanf("%d",&n);
	int arr[n];

	for(int i =0; i<n; i++) {
		int t;
		do {
			t=0;
			printf("Nhap gia tri mang arr[%d] = ",i);
			scanf("%d",&arr[i]);

			for(int j=0; j<=i-1; j++) {
				if(arr[j] == arr[i]) {
					t=1;
					break;
				}
			}
		} while(t==1);
	}
	printf("Mang sau khi da nhap : \n");
	for(int i=0; i<n; i++) {
		printf("%d",arr[i]);
	}
}