#include <stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct SinhVien std1;
	printf("vui long nhap ho va ten: ");
	fgets(std1.name,sizeof std1.name,stdin);
	printf("nhap tuoi: ");
	scanf("%d",&(std1.age));
	fflush(stdin);
	printf("nhap so dien thoai: ");
	fgets(std1.phoneNumber,sizeof std1.phoneNumber,stdin);
	printf("ho va ten: %s",std1.name);
	printf("tuoi: %d\n",std1.age);
	printf("so dien thoai: %s",std1.phoneNumber);
	return 0;
}
