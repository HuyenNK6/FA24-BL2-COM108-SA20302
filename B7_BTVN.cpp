#include <stdio.h>

int main(){
	//tinh tong cac chu so
	//vi du: 2584 -> tong = 2+5+8+4 = 19
	int n;
	int tong = 0;
	do{
		printf("Moi nhap so n: ");
		scanf("%d", &n);
		if( n > 0 ){
			do{
				tong += n % 10; //tinh tong cac phan du
				n = n/10; //n /=10;
			}while(n>0);
			printf("Tong = %d\n", tong);
			return 0;
		} else {
			printf("Moi ban nhap so nguyen duong!!!\n");
		}
	}while ( n <= 0);
	return 0;
}
