#include <stdio.h>

int main(){
	printf("-------------MENU------------\n");
	printf("1. Bài 1: Kiem tra nam nhuan\n");
	printf("2. Bài 2: Tinh tien luong\n");
	printf("3. Bài 3: Chi so BMI\n");
	printf("4. Bài 4: Kiem tra canh tam giac\n");
	printf("0. Thoat CT\n");
	printf("-----------------------------\n");
	int luaChon;
	printf("Moi nhap lua chon: ");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("1. Bài 1: Kiem tra nam nhuan\n");
			//code
			int year;
			printf("Nhap nam = ");
			scanf("%d", &year);
			if((year % 4==0 && year % 100 !=0)|| year % 400==0){
				printf("%d là nam nhuan\n", year);
			}else{
				printf("%d khong phai la nam nhuan\n", year);
			}
			break;
		case 2:
			printf("2. Bài 2: Tinh tien luong\n");
			float soGio;
			printf("Moi nhap so gio");
			scanf("%f", &soGio);
			 if(soGio <= 40) {
			 	printf("So tien la = %.2f\n", soGio * 50);
			 }else{
			 	printf("So tien la = %.2f\n",(40 * 50 )+(soGio - 40)*(50 * 1.5) );	
			 }
			break;
		case 3:
			printf("3. Bài 3: Chi so BMI\n");
			//code			
			break;
		case 4:
			printf("4. Bài 4: Kiem tra canh tam giac\n");
			//code
			break;
		case 0:
			printf("0. Thoat CT\n");
			return 0;
		default:
			printf("Ban chon sai chuc nang\n");
			break;
	}
	
	return 0;
}
