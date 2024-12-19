#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
	int id;	
	char name[50];
	int age;
	char phoneNumber[50];
	};
	
	struct Student students[50];
	int i;
	for(i=0; i<5; i++){
		students[i].id=i+1;
		printf("Moi ban nhap thong tin sinh vien ID %d\n", i+1);
		printf("Moi ban nhap ten cua sinh vien: ");
		fgets(students[i].name, sizeof(students[i].name), stdin);
		students[i].name[strcspn(students[i].name, "\n")]=0;
		printf("Moi ban nhap tuoi cua sinh vien: ");
		scanf("%d", &students[i].age);
		fflush(stdin);
		printf("Moi ban nhap so dien thoai cua sinh vien: ");
		fgets(students[i].phoneNumber, sizeof(students[i].phoneNumber), stdin);
		students[i].name[strcspn(students[i].name, "\n")]=0;
		printf("\n");
	}
	for(i=0; i<5; i++){
		printf("Thong tin sinh vien ID %d\n", students[i].id);
		printf("Ten cua sinh vien: %s\n", students[i].name);
		printf("Tuoi cua sinh vien: %d\n", students[i].age);
		printf("So dien thoai cua sinh vien: %s", students[i].phoneNumber);
		printf("\n");
	}
	
	
	
	return 0;
}
