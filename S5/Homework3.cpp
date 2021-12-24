#include <stdio.h>
int main(){

int sochan=0,x=0,n;

printf("Moi nhap mot so : ");
scanf("%d",&n);


while (sochan<n&&sochan>=0){
	if(sochan%2==0){
	    x++;
		printf("So chan thu %d be hon %d la : %d \n" ,x,n,sochan);
	}
	sochan++;
}
}