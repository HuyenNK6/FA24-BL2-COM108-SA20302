#include <stdio.h>
void bai1(){
	printf("1. Bai 1\n");
	//code bài 1
}
void bai2(){
	printf("1. Bai 1\n");
	//code bài 1
}
void bai3(){
	printf("1. Bai 1\n");
	//code bài 1
}

int main(){
	int luaChon;
	do{
		printf("------MENU------\n");
		printf("1. Bai 1\n");
		printf("2. Bai 2\n");
		printf("3. Bai 3\n");
		printf("0. Thoat CT\n");
		printf("----------------\n");
		printf("Moi nhap lua chon: ");
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
			case 0:
				printf("0. Thoat CT\n");
				return 0;
			default: 
				printf("Moi nhap lai!!!!\n");
		}
		
	}while(luaChon != 0);
	
	return 0;
}
