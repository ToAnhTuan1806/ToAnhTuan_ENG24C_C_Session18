#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
	char name[50];
	int age;
	char phoneNumber[50];
	};

	struct Student students;
	
	printf("Moi ban nhap ten cua sinh vien: ");
	fgets(students.name, sizeof(students.name), stdin);
	students.name[strcspn(students.name, "\n")]=0;
	printf("Moi ban nhap tuoi cua sinh vien: ");
	scanf("%d", &students.age);
	fflush(stdin);
	printf("Moi ban nhap so dien thoai cua sinh vien: ");
	fgets(students.phoneNumber, sizeof(students.phoneNumber), stdin);
	students.name[strcspn(students.name, "\n")]=0;
	
	printf("\nTen cua sinh vien: %s\n", students.name);
	printf("Tuoi cua sinh vien: %d\n", students.age);
	printf("So dien thoai cua sinh vien: %s", students.phoneNumber);
	
	return 0;
}
