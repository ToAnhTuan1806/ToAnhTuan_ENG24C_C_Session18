#include<stdio.h>
#include<string.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[50];
	};

	struct Student students= {"To Anh Tuan", 18, "0392806118"};
	printf("Ten sinh vien: %s\n", students.name);
	printf("Tuoi sinh vien: %d\n", students.age);
	printf("So dien thoai: %s\n", students.phoneNumber);
		
	return 0;
}
