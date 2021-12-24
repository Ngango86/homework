#include <stdio.h>
#include <string.h>
int main() {
	int n;
	printf("Nhap chuoi n : ");     // nhap n 
	scanf("%d",&n);
	char arrs[n][50];//  mang arrs co5 phan tu: arrs[0], arrs[1]... La cac string
	for (int i=0; i<n; i++) {
		// nhap chuoi arrs[i]
		printf("Nhap chuoi: ");
		scanf("%s", arrs[i]);
	}

	printf("Sau khi nhap xong: \n");
	for (int i=0; i<n; i++) {
		printf("%s\n", arrs[i]);
	}
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-i-1; j++) {
			if(strcmp(arrs[j], arrs[j+1])>0) {
				// swap
				char tmp[50];
				strcpy(tmp,arrs[j]); // tmp = arr[j]
				strcpy(arrs[j], arrs[j+1]);// arr[j]=arr[j+1]
				strcpy(arrs[j+1], tmp);// arr[j+1]= tmp
			}
		}
	}
	printf("Sau khi sap xep xong: \n");
	for (int i=0; i<n; i++) {
		printf("%s\n", arrs[i]);
	}
}