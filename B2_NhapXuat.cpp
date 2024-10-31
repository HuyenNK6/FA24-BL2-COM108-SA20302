#include <stdio.h>

int main(){
	#define PI 3.14
	const float e=2.7;
	//PI = 5.2; -> error vi ko thay doi duoc gia tri hang so	
	printf("PI= %.2f \n", PI);
	printf("e= %.1f \n", e);
	//Nhap so luong va gioi tinh NYC cua ban sau do in ra man hinh
	//B1: KHAI BAO BIEN
	int soLuong;
	char gioiTinh; //F hoac M
	//B2: NHAP GIA TRI TU BAN PHIM
	printf("Moi ban nhap so luong NYC: ");
	scanf("%d", &soLuong);
	getchar(); //tranh troi lenh -> xoa ky tu thua con lai
	printf("Moi ban nhap gioi tinh NYC (F/M): ");
	scanf("%c", &gioiTinh); 
	//B3: IN RA MAN HINH
	printf("So luong NYC la= %d \n", soLuong);
	printf("Gioi tinh NYC la= %c \n", gioiTinh);
	return 0;
}
