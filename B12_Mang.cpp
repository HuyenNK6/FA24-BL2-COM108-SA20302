#include <stdio.h>

void bai1(){
	//1. khoi tao mang có san 6 phan tu
	int arr[6] = {3,8,1,2,9,6};
	//2. Truy xuat phan tu -> thong qua vi tri i
	printf("arr[0] = %d\n", arr[0]);
	printf("arr[1] = %d\n", arr[1]);
	printf("arr[2] = %d\n", arr[2]);
	printf("arr[3] = %d\n", arr[3]);
	printf("arr[4] = %d\n", arr[4]);
	printf("arr[5] = %d\n", arr[5]);
	//3. Gan gia tri
	arr[0] = 10;
	printf("arr[0] = %d\n", arr[0]);
}
void bai2(){
	//1. Nhap so luong
	int soLuong;
	printf("Moi ban nhap so luong SV= ");
	scanf("%d", &soLuong);
	//2. Khai báo mang
	float arrCanNang[soLuong];
	//3. Nhâp gia tri mang tu ban phim
	printf("-----------NHAP----------\n");
	for (int i = 0; i < soLuong; i++){
		printf("Nhap can nang SV thu %d = ",i);
		scanf("%f", &arrCanNang[i]);
	}
	//4. Xuat mang ra man hinh
	printf("-----------XUAT----------\n");
	for (int i = 0; i < soLuong; i++){
		printf("arrCanNang[%d]= %.2f\n", i, arrCanNang[i]);
	}
}
void bai3(){
	//1. nhap so luong
	int n;
	printf("Moi nhap so luong laptop: ");
	scanf("%d", &n);
	//2. Khai báo mang
	float arrGiaTien[n];
	//3. Nhap mang
	printf("-----------NHAP----------\n");
	for (int i = 0; i < n; i ++){
		printf("Gia cua may tinh %d = ",i);
		scanf("%f",&arrGiaTien[i]);
	}
	//4. Xuat mang
	printf("-----------XUAT----------\n");
	for (int i = 0; i < n; i++){
		printf("arrGiaTien[%d]=%.2f\n", i, arrGiaTien [i]);
	}
}

int main(){
	//bai1();
	//bai2();
	bai3();
	return 0;
}
