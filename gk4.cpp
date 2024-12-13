#include <stdio.h>
int main(){
	int a;
	printf("nhap vao 1 so nguyen ");
	scanf("%d",&a);
	printf("cac uoc cua %d la \n",a);
	for(int i =1 ;i<=a;i++){
		if(a%i==0){
			printf("%d ",i);
		}
	}
	return 0;
} 
