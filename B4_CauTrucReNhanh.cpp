#include <stdio.h>

int main(){
	printf("------------BAI 1-------------\n");
	int a;
	printf("Moi nhap so nguyen a= ");
	scanf("%d",&a);
	printf("Ket qua a= %d\n",a);
	if (a > 0){
		printf("%d la so nguyen duong\n", a);
	}else{
		printf("%d la so nguyen am\n", a);
	}
	printf("------------BAI 2: Chan Le-------------\n");
	int x;
	printf("Moi nhap so nguyen x= ");
	scanf("%d",&x);
	printf("Ket qua x= %d\n",x);
	//chan -> chia 2 du 0 -> (x%2==0)
	//le -> chia 2 du 1 -> (x%2!=0) hoac (x%2==1)
	if (x % 2 == 0){
		printf("%d la so chan\n", x);
	}else{
		printf("%d la so le\n", x);
	}
	printf("------------BAI 3: Hoc Luc-------------\n");
	float toan, van, anh;
	printf("Moi nhap diem Toan= ");
	scanf("%f",&toan);
	printf("Moi nhap diem Van= ");
	scanf("%f",&van);
	printf("Moi nhap diem Anh= ");
	scanf("%f",&anh);
	printf("Diem Toan = %.1f, Van = %.1f, Anh = %.1f\n", toan, van, anh);
	float diemTB= (toan + van + anh) / 3;
	printf("Diem Trung Binh = %.2f\n", diemTB);
	
	if (diemTB >= 9){
		printf("Hoc luc: Xuat Sac\n");
	}else if(diemTB >= 8){
		printf("Hoc luc: Gioi\n");
	}else if(diemTB >= 7){
		printf("Hoc luc: Kha\n");
	}else if(diemTB >= 5){
		printf("Hoc luc: Trung Binh\n");
	}else if(diemTB >= 3){
		printf("Hoc luc: Yeu\n");
	}else{
		printf("Hoc luc: Kem\n");
	}
	
	return 0;
}
