#include <stdio.h>
int main(){
	int time,sav;
	printf("nhap vao so gio lam viec trong thang ");
	scanf("%d",&time);
	printf("nhap vao muc luong theo gio ");
	scanf("%d",&sav);
	if(time > 160){
		printf("tong tien luong cua ban la %d vnd",time*sav+time*sav*10/100);
		printf("luong co ban cua ban la %d ngan vnd, luong phu cap cua ban la %d ngan vnd /n",time*sav,time*sav*10/100);
	}else{
		printf("tong tien luong cua ban la %d ngan vnd",time*sav);
	}
	return 0;
}
