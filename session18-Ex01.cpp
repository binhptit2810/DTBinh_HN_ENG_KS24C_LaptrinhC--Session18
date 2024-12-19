#include <stdio.h>

int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20];
	};
	// khai bao bien tu kieu du lieu cau truc
	struct Student sinhvien1 = {"Dang Thanh Binh",18,"0123456789"};
	struct Student sinhvien2 = {"Dang Hai Anh",18,"0987654321"};
	//in bien ra ngoai man hinh
	printf("Ten cua sinh vien thu nhat la : %s\n",sinhvien1.name);
	printf("Tuoi cua sinh vien thu nhat la : %d\n",sinhvien1.age);
	printf("So dien thoai cua sinh vien thu nhat la : %s\n",sinhvien1.phoneNumber);
	printf("Ten cua sinh vien thu hai la : %s\n",sinhvien2.name);
	printf("Tuoi cua sinh vien thu hai la : %d\n",sinhvien2.age);
	printf("So dien thoai cua sinh vien thu hai la : %s\n",sinhvien2.phoneNumber);
	return 0;
} 
