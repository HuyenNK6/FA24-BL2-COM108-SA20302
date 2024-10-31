#include <stdio.h>
#include <stdbool.h>

int main(){
	//in ra man hinh
	//ket thuc moi dong code la dau ;
	printf ("Hello world \n");
	//B1: KHAI BAO BIEN
	//C1: <kieu du lieu> <ten bien>;
	int namSinh; //kieu so nguyen
	float chieuCao; //kieu so thuc
	float canNang; 
	//B2: GAN GIA TRI
	namSinh = 2006;
	chieuCao = 152;//su dung to hop phim Ctrl + Space de goi y
	canNang = 41.5;
	//B3: IN RA MAN HINH
	printf("Nam Sinh: %d \n",namSinh);
	printf("Chieu cao: %.0f \n",chieuCao);//.0f lay 0 so sau dau phay
	printf("Can nang: %.2f \n", canNang);//.2f lay 2 so sau dau phay
	//C2: <kieu du lieu> <ten bien>= <gia tri>;
	int tuoi = 18;
	double diemToan = 10;
	double diemVan = 7.5;
	//IN RA MAN HINH diemToan & diemVan trong cung 1 dong print
	printf("Tuoi: %d \n", tuoi);
	printf("Diem Toan= %0.1lf - Van = %0.2lf",diemToan, diemVan);//%lf chu l
	
	char bac = 'A';
	printf("Bac: %c", bac);
	bool gioiTinh = 1;
	gioiTinh =0 ;
	printf("Gioi tinh %d", gioiTinh);
	return 0;
}
