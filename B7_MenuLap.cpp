#include <stdio.h>

int main(){
	int luaChon;
	do{
		printf("--------MENU-------\n");
		printf("1. Bai 1 \n");
		printf("2. Bai 2 \n");
		printf("3. Bai 3 \n");
		printf("0. Thoat CT \n");
		printf("--------------------\n");
		printf("Moi nhap lua chon (0-3): ");
		scanf("%d", &luaChon);
		switch(luaChon){
			case 1:
				printf("1. Bai 1 \n");
				//cpde
				break;	
			case 2:
				printf("2. Bai 2 \n");
				break;
			case 3:
				printf("3. Bai 3 \n");
				break;	
			case 0:
				printf("Thoat CT \n");
				return 0;
			default:
				printf("Moi nhap lai (1-3)!!!!!\n");
				break;	
		}		
	}while(luaChon != 0);	
	return 0;
}
