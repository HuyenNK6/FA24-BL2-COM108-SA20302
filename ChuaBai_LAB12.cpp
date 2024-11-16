#include <stdio.h>

int main(){
	int luaChon;
	do{
		printf("------------MENU------------\n");
		printf("1. Bai 1: Toc Do\n");
		printf("2. Bai 2: Kiem tra gioi tinh\n");
		printf("3. Bai 3: Tinh tong chan le\n");
		printf("4. Thoat\n");
		printf("----------------------------\n");
		printf("Moi nhap lua chon");
		scanf("%d",&luaChon);
		switch(luaChon){
			case 1:
				{
					printf("1. Bai 1:Toc Do\n");
					int tocdo;
					printf("Nhap toc do : \n");
					scanf("%d",&tocdo);
					printf("Van toc ban vua nhap la : %d\n",tocdo);
					if (tocdo>100){
						printf("Ban da vuot qua toc do cho phep\n");
					}else{
						printf("Ban da di dung toc do\n");
					}
					break;
				}
			case 2:
				{
					printf("2. Bai 2: Kiem tra gioi tinh\n");
					int gioitinh;
					printf("nhap gioi tinh cua ban");
					scanf("%d", &gioitinh);
					if(gioitinh == 1){
						printf("gioiTinh cua ban la nam\n");
					}else if(gioitinh == 0 ){
						printf("gioiTinh cua ban la nu\n");
					}else{
						printf("gioi tinh khac\n");
					}
					break;		
				}				
			case 3:
				{
					printf("3. Bai 3: Tinh tong chan le\n");
					int n;
					int tong = 0;
					printf("Moi Nhap n =");
					scanf("%d",&n);
					if( n%2 == 0){
						printf("%d la so chan\n",n);
						for (int i=0; i<=n; i++){//duyet cac so 0-n
							if ( i % 2 == 0){//neu la so chan
								tong += i;//tong= tong +i;
							}
						}
					}else{
						printf("%d la so le\n",n);
						for (int i=0; i<=n; i++){//duyet cac so 0-n
							if ( i % 2 != 0){//neu la so le
								tong += i;//tong= tong +i;
							}
						}
					}
					printf("Tong la= %d\n ", tong);	
					break;
				}
			case 4:
				printf("4. Thoat");
				return 0;	
			default:
				printf("Moi ban nhap lai!!!");
			    break;	
		}
	}while(luaChon!=4);
	
	
	
	
	return 0;
}
