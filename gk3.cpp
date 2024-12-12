#include <stdio.h>
int main(){
	int i;
	float m;
	printf("1. USD to VND \n");
	printf("2. EUR to VND \n");
	printf("3. GBP to VND \n");
	printf("4. JPY to VND \n");
	printf("5. VND to USD \n");
	printf("6. VND to EUR \n");
	printf("7. VND to GBP \n");
	printf("8. VND to JPY \n");
	printf("chon vao loai tien muon doi ");
	scanf("%d", &i);
	printf("nhap vao so tien muon doi ");
	scanf("%f",&m);
	switch(i){
		case 1:
			printf("%f USD bang %f VND",m,m*23.500);
			break;
		case 2:
			printf("%f EUR bang %f VND",m,m*25.000);
			break;
		case 3:
			printf("%f GBP bang %f VND",m,m*28.000);
			break;
		case 4:
			printf("%f JPY bang %f VND",m,m*180);
			break;
		case 5:
			printf("%f VND bang %f USD",m,m/23.500);
			break;
		case 6:
			printf("%f VND bang %f EUR",m,m/25.000);
			break;
		case 7:
			printf("%f VND bang %f GBP",m,m/28.000);
			break;	
		case 8:
			printf("%f VND bang %f JPY",m,m/180);
			break;
	}
	return 0;
}
