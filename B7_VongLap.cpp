#include <stdio.h>

int main(){
	//Bai 1: nhap so a -> in cac so tu 1 -> a
	printf("---------BAI 1--------\n");
	int a;
	printf("Moi nhap bien a = ");
	scanf("%d", &a);
	printf("Ket qua a = %d\n", a);
	for(int i= 1; i<= a; i++){
		printf("i = %d\n",i);
	}
	//bài 2: in nguoc lai
	printf("---------BAI 2--------\n");
	int b;
	printf("Moi nhap bien b = ");
	scanf("%d", &b);
	printf("Ket qua b = %d\n", b);
	for(int i = b; i >= 0; i--){
		printf("i = %d\n",i);
	}
	//bài 3: nhap so 1-10-> in bang cuu chuong 
	printf("---------BAI 3--------\n");
	int c;
	printf("Moi nhap bien c = ");
	scanf("%d", &c);
	if(c >= 1 && c <= 10){
		for(int i=1; i<=10; i++){
			printf("%d * %d = %d\n", c, i, c*i);
		}
	}else{
		printf("Khong co bang cuu chuong %d\n",c);
	}
	//BÀI 4: nhap so n -> tinh tong tu 1-> n
	printf("---------BAI 4--------\n");
	int n;
	printf("Moi nhap so n = ");
	scanf("%d", &n);
	int i = 1;
	int tong = 0;
	while( i <= n){
		printf("i = %d\n ",i);//in thêm
		tong += i; //tong = tong + i;
		printf("tong = %d\n", tong);//in thêm
		i++;
	}
	printf("Tong Cuoi Cung = %d\n", tong);
	//BÀI 5: 
	printf("---------BAI 5--------\n");
	int x; //so tu 0-10
	do{
		printf("Moi nhap so x = ");
		scanf("%d", &x);
		if(x < 0 || x > 10){
			printf("Moi ban nhap lai!!!\n");
		}
	}while(x < 0 || x > 10);
	
	return 0;
}
