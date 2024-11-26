#include <stdio.h>

int main(){
	char arrTen[8]= "HuyenNK";
	printf("Ten la %s\n", arrTen);
	char hoVaTen[50];
	printf("Moi nhap ho va ten: ");
	//scanf("%s", &hoVaTen);//ko dùng -> vì ko scan dc khoang trang
	gets(hoVaTen);
	printf("Ten toi la: %s\n", hoVaTen);
	///////////
	char monHoc[50];
	printf("Moi nhap ten mon hoc: ");
	gets(monHoc);
	printf("Ten mon hoc la: %s\n", monHoc);
	
	return 0;
}
