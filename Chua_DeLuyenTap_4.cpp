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
	int n;
	printf("Moi nhap so luong DT n= ");
	scanf("%d", &n);
	int arrDungLuong[n];
	printf("-------NHAP------\n");
	for (int i=0; i<n; i++){
		printf("Moi nhap Dung luong DT thu %d la: ",i);
		scanf("%d", &arrDungLuong[i]);
	}
	printf("------XUAT-------\n");
	for (int i=0; i<n; i++){
		printf("Dung luong DT thu %d la %d\n", i, arrDungLuong[i]);
	}
	//kiem tra su ton tai cua 1 gia tri trong mang
	int x;
	printf("Moi nhap gia tri can tim x= ");
	scanf("%d", &x);
	int count = 0; //bien dem
	for (int i=0; i<n; i++){
		if (x == arrDungLuong[i]){
			count++;//tim thay thi tang count lên 1 don vi
			printf("Tim thay gia tri %d trong mang\n", x);
			break; //tim thay se thoat khoi vong lap
		}
	}
	if(count ==0 ){
		printf("Khong tim thay !!!!\n");
	}
	
}
//////////////////////
void bai4(){
	printf("4. Dong vat\n");
	int n;
	printf("Moi nhap so luong DV n= ");
	scanf("%d", &n);
	float arrCanNang[n];
	printf("-------NHAP------\n");
	for (int i=0; i<n; i++){
		printf("Moi nhap can nang DV thu %d la: ",i);
		scanf("%f", &arrCanNang[i]);
	}
	printf("------XUAT-------\n");
	for (int i=0; i<n; i++){
		printf("Can nang DV thu %d la %.2f\n", i, arrCanNang[i]);
	}
	float max = arrCanNang[0];
	int viTri = 0;
	for (int i=0; i<n; i++){
		if (arrCanNang[i] > max){ //neu tim thay gia tri lon hon max
			max = arrCanNang[i]; //gan lai max = phan tu do
			viTri = i;
		}
	}
	printf("Gia tri lon nhat la %.2f tai vi tri %d\n", max,viTri);
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
