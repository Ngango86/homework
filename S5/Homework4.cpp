
   
#include <stdio.h>
int main(){
	int n;
	do{
		printf("Nhap n=");
		scanf("%d",&n);
	}while(n<=0);
	
	int count=0;

	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}

	if(count==2){
		
		printf("%d la so nguyen to",n);
	}else{
		
		printf("%d khong phai so nguyen to",n);
	}
}