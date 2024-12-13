#include <stdio.h>
int main(){
	int a;
	printf("nhap vao 1 so nguyen duong ");
	scanf("%d",&a);
	if(a<4 && a>1){
		printf("%d la so nguyen to ", a);
	}else if(a==1) {
		printf("%d khong la so nguyen to", a);
	}else{
		for(int i=2;i<a;i++){
			if(a%i==0){
				printf("%d khong la so nguyen to", a);
				break;
			}else{
				printf("%d la so nguyen to", a);
				break;
			}
		}
	}
	return 0;
}
