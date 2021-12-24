#include <stdio.h>
#include <math.h>

int main(){
	int a,a1,b,b1,d;
	do{
	printf("Nhap 2 so \n");
	scanf("%d",&a);
	scanf("%d",&b);
	}
	while(!(a>=0)||!(b>=0));
	
	a1=a,b1=b;                   
		
	    while ( a != b)
    {
        if (a > b){
            a = a - b;
            d = a;                      
        }
        else{
            b = b - a;
            d = b;                      
        }
    }
    printf("Uoc chung lon nhat la : %d\n",d);
    
    if(d==0){
    	printf("Boi chung nho nhat la : 0");
    	return 0;
	}
    int bcnn = a1*b1/d;
    printf("Boi chung nho nhat la : %d",bcnn);
}