#include <stdio.h>
void bai1(){
	printf("1. Thong tin NYC\n");
	char hoTen[50];
	printf("Moi nhap ho ten: ");
	gets(hoTen);
	float canNang;
	printf("Moi nhap can nang: ");
	scanf("%f", &canNang);
	float chieuCao;
	printf("Moi nhap chieu cao: ");
	scanf("%f", &chieuCao);
	printf("Ho ten la: %s\n", hoTen);
	printf("Can nang: %.2f\n", canNang);
	printf("Chieu cao: %.2f\n", chieuCao);
}
void bai2(){
	printf("2. Phan loai\n");
	//tu lam
}
void bai3(){
	printf("3. Mang NYC\n");
	printf("-----------Thong tin NYC-----------\n");
	int n;
	printf("Moi nhap so luong NYC: ");
	scanf("%d", &n);
	float arrCanNang[n];
	printf("---------NHAP MANG-------\n");
	for(int i=0; i<n; i++){
		printf("Moi nhap can nang NYC thu %d la: ", i);
		scanf("%f", &arrCanNang[i]);
	}
	printf("---------XUAT MANG-------\n");
	printf("So luong NYC= %d\n", n);
	int count=0;
	for(int i=0; i<n; i++){
		if(arrCanNang[i] >= 60){
			count++;
			printf("NYC co can nang >=60kg la NYC tai vi %d\n", i);
		}
	}
	
	//dem so luong NYC co can nang >= 60 kg
	if(count > 0){
		printf("So NYC co can nang >=60kg la %d\n", count);
	}else if(count==0){
		printf("Khong co NYC >=60kg\n");
	}
	float min = arrCanNang[0];
	int viTri= 0;
	for (int i=0; i<n; i++){
		if(arrCanNang[i] < min){
			min = arrCanNang[i];
			viTri=i;
		}
	}
	printf("NYC gay nhat la %.2f tai vi tri %d\n", min, viTri);
}

int main(){
	int luaChon;
	do{
		printf("--------MENU---------\n");
		printf("1. Thong tin NYC\n");
		printf("2. Phan loai\n");
		printf("3. Mang NYC\n");
		printf("4. Thoat CT\n");
		printf("---------------------\n");
		printf("Moi lua chon: ");
		scanf("%d", &luaChon);
		getchar();//loai bo ky tu thua
		switch(luaChon){
			case 1:
				bai1();
				break;
			case 2:
				bai2();
				break;
			case 3:
				bai3();
				break;
			case 4:
				printf("Thoat CT\n");
				return 0;
			default:
				printf("Moi nhap lai!!!!!!!!\n");
		}
	}while(luaChon != 4);
	
	return 0;
}
