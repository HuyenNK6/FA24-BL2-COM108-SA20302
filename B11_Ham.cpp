//B11_Ham
#include <stdio.h>
#include <math.h>
//1. Hàm ko tra ve, ko tham so truyen vào
void bai1(){
	printf("Hello\n");
	int a,b;
	printf("Moi nhap so nguyen duong a = ");
	scanf("%d",&a);
	printf("Moi nhap so nguyen duong b = ");
	scanf("%d",&b);
	int tong =0;
	if (a < b){
		for(int i = a; i <= b; i++){
			if( i % 2 == 0){
				tong += i;
			}
		}
		printf("Tong cac so chan tu %d den %d la %d\n",a,b,tong);
	}else{
		printf("Ban nhap sai roi!!");
	}	
}
//2. Hàm ko tra ve, co tham so truyen vào
void bai2( int n ){
	int giaiThua =1;
	if( n == 0){
		giaiThua = 1;
		printf("Giai thua = %d\n", giaiThua);
	}else if( n >= 1){
		for (int i = 1; i<=n; i++){
			giaiThua *= i;
		}
		printf("Giai thua = %d\n", giaiThua);
	}else{
		printf("Khong co giai thua\n");
	}
}
//3. Ham tra ve, khong tham so truyen vao
float bai3(){
	float luong, gio, bacLuong;
	printf("Moi nhap so gio= ");
	scanf("%f", &gio);
	printf("Moi nhap so bac luong= ");
	scanf("%f", &bacLuong);
	luong = gio * bacLuong;
	return luong; //tra ve gia tri cua luong
}
//4. Ham tra ve, co tham so truyen vao
int bai4(int x){
	int tong = 0;
	if( x > 0){
		for (int i=1; i<= x; i++){
			if(i % 3 == 0 || i % 5 == 0){
				tong += i;
			}
		}
	}	
	return tong;
}
void viDu(){
	int x; //#include <math.h>
	//x= pow(3,2);
	//x= sqrt(16);
	//x= abs(-50);
	//x= ceil (8.5);//lam tron lên
	x= floor(8.5); //lam tron xuong
	printf("x= %d\n",x);
}

int main(){
	viDu();
	printf("----------------BAI 1---------------\n");
	bai1();//goi hàm thông qua tên hàm
	printf("----------------BAI 2---------------\n");
	int n;
	printf("Moi nhap so nguyen duong n= ");
	scanf("%d", &n);
	bai2(n); //goi ham -> phai truyen tham so vao
	printf("----------------BAI 3---------------\n");
	float ketQua = bai3(); //bien KetQua-> hung gia tri cua ham bai3() <-> luong
	printf("Ket qua luong= %.2f\n", ketQua);
	printf("----------------BAI 4---------------\n");
	int x;
	printf("Moi nhap so nguyen duong x= ");
	scanf("%d", &x);
	int tong= bai4(x);
	printf("Tong = %d\n", tong);
	return 0;
}
///BTVN: Ðe luyen tap so 3
