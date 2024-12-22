#include<stdio.h>

typedef struct{
	char name[50];
	int age;
	char phoneNumber[15];	
} SinhVien;
int main(){
	SinhVien std1;
	strcpy(std1.name,"Nguyen Quang Huy");
	std1.age=18;
	strcpy(std1.phoneNumber,"0399094269");
	printf("ten sv : %s",std1.name);
	printf("\ntuoi: %d",std1.age);
	printf("\nso dien thoai: %s",std1.phoneNumber);

	return 0;
}

