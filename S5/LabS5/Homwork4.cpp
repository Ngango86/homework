#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n : ");
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		int count =0;
		for(int j=2;j<=i/2;j++){
			if(i%j==0){\
			count++;
			break;
			}
		}
		if(count==0){
			printf("So nguyen to nho hon %d la : %d\n",n,i);
		}
	}
}
