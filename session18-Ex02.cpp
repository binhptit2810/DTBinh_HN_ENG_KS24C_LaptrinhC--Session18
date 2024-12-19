#include <stdio.h>

int main(){
	struct Student {
		char name[50];
		int age;
		char phoneNumber[20];
	};
	struct Student sinhvien1;
	// yeu cau nguoi dung nhap vao tung thuoc tinh cua bien
	printf("Moi ban nhap thong tin cua sinh vien\n");
	printf("Moi ban nhap ho va ten cua sinh vien : ");
	fgets(sinhvien1.name,sizeof(sinhvien1.name),stdin);
	printf("Moi ban nhap vao tuoi cua sinh vien : ");
	scanf("%d",&sinhvien1.age);
	printf("Moi ban nhap so dien thoai cua sinh vien : ");
	scanf("%s",&sinhvien1.phoneNumber);
	// in bien ra ngoai man hinh
	printf("Ten cua sinh vien la :%s\n",sinhvien1.name);
	printf("Tuoi cua sinh vien la %d\n",sinhvien1.age);
	printf("So dien thoai cua sinh vien la %s",sinhvien1.phoneNumber);
	return 0;
}
