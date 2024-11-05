#include <stdio.h>

int main(){
	//// 1. Toan tu so hoc
	int a = 7, b = 2;
	int c = 7/2; //chia lay nguyen
	int d = 7%2; //chia lay du
	printf("c= %d \n", c);
	printf("d= %d \n", d);
	// toan tu ++ va --
	int ketQua1= ++a - (--b);
	printf("Ket qua 1 = %d \n", ketQua1);
	printf("a= %d va b= %d\n", a,b);
	
	int ketQua2= a++ - (b--);
	printf("Ket qua 2 = %d \n", ketQua2);
	printf("a= %d va b= %d\n", a,b);
	
	//2. Toan tu so sanh => true=1 false=0
	printf("a > b = %d \n", a>b); 
	printf("a != b = %d \n", a!=b); 
	printf("a == b = %d \n", a==b);
	
	//3. Toán tu logic 
	// diemToan, diemVan >= 8 -> hoc sinh Gioi
	int diemToan = 10, diemVan = 7;
	int hocLuc = (diemToan >= 8) && (diemVan >=8); //true- Gioi
	printf("Hoc Luc = %d\n", hocLuc);
	bool hanhKiem = 1;
	printf("! Hanh kiem = %d\n", !hanhKiem); //true -> false
	int check= !((diemToan >= diemVan) || (hanhKiem != 1));
	// true || false => true -> !true -> false =0
	printf("check = %d\n", check);
	//4. Toan tu gán
	int i = 3, j = 0;
	j += i; //tuong ung: j = j + i
	//j -=i; //tuong ung: j = j - i
	printf("j =  %d\n", j);
	return 0;
}
