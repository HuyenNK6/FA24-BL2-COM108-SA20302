#include <stdio.h>
void bai1(){
	printf("1. Sinh vien\n");
	//1. nhap so luong 
	int n;
	printf("Moi nhap so luong SV n= ");
	scanf("%d", &n);
	//2. khai bao mang
	int arrTuoi[n];
	//3. nhap mang
	printf("-------NHAP------\n");
	for(int i = 0; i<n; i++){
		printf("Moi nhap tuoi cua SV thu %d la: ",i);
		scanf("%d", &arrTuoi[i]);
	}
	//4. xuat mang
	printf("-------XUAT------\n");
	for(int i = 0; i<n; i++){
		printf("Tuoi cua SV thu %d la: %d \n",i, arrTuoi[i]);
	}
	//5. tinh tong phan tu tai vi tri le
	printf("-----------TONG---------\n");
	int tong =0;
	for(int i=0; i< n; i++){
		if( i % 2 != 0){//kiem tra vi tri le
			tong += arrTuoi[i];//tính tong phan tu tai vi tri i
		}
	}
	printf("Tong phan tu tai vi tri le = %d\n", tong);
}
//////////////////////
void bai2(){
	printf("2. Nhan vien\n");
}
//////////////////////
void bai3(){
	printf("3. Dien thoai\n");
}
//////////////////////
void bai4(){
	printf("4. Dong vat\n");
}
//////////////////////
void bai5(){
	printf("5. Nguoi yeu cu\n");
}
//////////////////////
int main(){
	int luaChon;
	do{
		printf("-----------MENU---------\n");
		printf("1. Sinh vien\n");
		printf("2. Nhan vien\n");
		printf("3. Dien thoai\n");
		printf("4. Dong vat\n");
		printf("5. Nguoi yeu cu\n");
		printf("0. Thoat CT\n");
		printf("-----------------------\n");
		printf("Moi lua chon: ");
		scanf("%d", &luaChon);
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
				bai4();
				break;
			case 5:
				bai5();
				break;	
			case 0:
				printf("0. Thoat CT\n");
				return 0;
			default:
				printf("Moi nhap lai !!!!!!!\n");
		}
	}while(luaChon != 0);
	return 0;
}
