#include <stdio.h>

struct SinhVien{
	char name[50];
	int age;
	char phoneNumber[15];
};

int main(){
	struct SinhVien students[5];
	int i=1;
	while(i<=5){
		printf("hoc sinh so %d\n",i);
		printf("\tho va ten: ");
		fgets(students[i].name,sizeof students[i].name,stdin);
		printf("\ttuoi: ");
		scanf("%d",&(students[i].age));
		fflush(stdin);
		printf("\tso dien thoai: ");
		fgets(students[i].phoneNumber,sizeof students[i].phoneNumber,stdin);
		i++;
	}
	i=1;
	while(i<=55){
		printf("hoc sinh so %d\n",i);
		printf("\tho va ten: %s",students[i].name);
		printf("\ttuoi: %d\n",students[i].age);
		printf("\tso dien thoai: %s",students[i].phoneNumber);
		i++;
	}
	return 0;
}

