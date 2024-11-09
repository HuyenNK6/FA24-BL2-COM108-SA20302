#include <stdio.h>

int main(){
	printf("------------MENU-----------\n");
	printf("1. Com ga\n");
	printf("2. Com rang dua bo\n");
	printf("3. Com nieu\n");
	printf("4. Com tho\n");
	printf("0. Thoat CT\n");
	printf("---------------------------\n");
	printf("Moi ban chon mon an so: ");
	int luaChon;
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("Moi an com ga\n");
			break;//thoat khoi case
		case 2:
			printf("Moi an com rang dua bo\n");
			break;
		case 3:
			printf("Moi an com nieu\n");
			break;
		case 4:
			printf("Moi an com tho\n");
			break;
		case 0:
			printf("Thoat CT\n");
			return 0;
		default: //tat ca cac truong hop khac ngoai case
			printf("Ban chon sai mon an\n");
			break;
	}
	printf("Toi da an xong\n");
	return 0;
}
