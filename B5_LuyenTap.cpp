#include <stdio.h>

int main(){
	printf("-----------MENU----------\n");
	printf("1. Bai 1: kiem tra tien\n");
	printf("2. Bai 2: so sanh 3 so\n");
	printf("3. Bai 3: kiem tra tuoi\n");
	printf("4. Bai 4: tinh tien dien\n");
	printf("5. Thoat CT\n");
	printf("-------------------------\n");
	printf("Moi ban lua chon: ");
	int luaChon;
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			printf("1. Bai 1: kiem tra tien\n");
			//code bài 1
			float tien;
			printf("moi ban nhap so tien ");
			scanf("%f",&tien);
			if(tien > 30000000){
				printf("mua iphone 16promax \n");
			}else{
				printf("het tien roi");
			}
			break;
		case 2:
			printf("2. Bai 2: so sanh 3 so\n");
			//code bài 2
			printf("-----Bai 2 -----\n");
			int a,b, c;
			printf("Moi ban nhap so nguyen 1:");
			scanf("%d",&a);
			printf("Moi ban nhap so nguyen 2:");
			scanf("%d",&b);
			printf("Moi ban nhap so nguyen 3:");
			scanf("%d",&c);
			if(a>=b && a>=c){
				printf("Ket qua la :%d\n",a);
			}else if(b>=c && b>=a){
				printf("Ket qua la :%d\n",b);
			}else{
				printf("ket qua la :%d\n",c);
			}
		case 3:
			printf("3. Bai 3: kiem tra tuoi\n");
			//code bài 3
			int tuoi;
			printf("Moi ban nhap tuoi= ");
			scanf("%d", &tuoi);
			if(tuoi<18){
				printf("Do tuoi vi thanh nien: %d\n", tuoi);
			}else if(tuoi>=18 && tuoi<=60){
				printf("Do tuoi nguoi lon: %d\n", tuoi);
			}else{
				printf("Do tuoi nguoi cao tuoi: %d\n", tuoi);
			}
			break;
		case 4:
			printf("4. Bai 4: tinh tien dien\n");
			int k;
			printf("Nhap so dien :");
			scanf("%d",&k);
			
			if(k<50){
				printf("So tien dien la: %d",k*1500);
			}else if(k<100){
				printf("So tien dien la: %d ",(k-50)*2000+50*1500);
			}else{
				printf("So tien dien la: %d",(k-100)*3000+50*2000+50*1500);
			}
		
			break;
		case 5:
			printf("5. Thoat CT\n");
			return 0;
		default:
			printf("Moi ban chon lai\n");
			break;	
		
	}
	
	return 0;
}
