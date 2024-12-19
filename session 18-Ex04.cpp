#include <stdio.h>
#include <string.h>

//
struct Sinhvien {
    int id;              
    char name[50];       
    int age;             
    char phoneNumber[20];
};

int main() {
    struct Sinhvien sinhviens[50]; 
    int n = 5; 
    // Nhap thong tin tung sinh vien
    printf("Nhap thong tin cho %d sinh vien:\n", n);
    // Sinh vien 1
    sinhviens[0].id = 1; 
    printf("\nNhap thong tin cho sinh vien thu 1:\n");
    printf("Nhap ho va ten: ");
    fgets(sinhviens[0].name, sizeof(sinhviens[0].name), stdin);
    sinhviens[0].name[strcspn(sinhviens[0].name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &sinhviens[0].age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(sinhviens[0].phoneNumber, sizeof(sinhviens[0].phoneNumber), stdin);
    sinhviens[0].phoneNumber[strcspn(sinhviens[0].phoneNumber, "\n")] = '\0';
   // Sinh vien 2
    sinhviens[1].id = 2; 
    printf("\nNhap thong tin cho sinh vien thu 2:\n");
    printf("Nhap ho va ten: ");
    fgets(sinhviens[1].name, sizeof(sinhviens[1].name), stdin);
    sinhviens[1].name[strcspn(sinhviens[1].name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &sinhviens[1].age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(sinhviens[1].phoneNumber, sizeof(sinhviens[1].phoneNumber), stdin);
    sinhviens[1].phoneNumber[strcspn(sinhviens[1].phoneNumber, "\n")] = '\0';
    // Sinh vien 3
    sinhviens[2].id = 3; 
    printf("\nNhap thong tin cho sinh vien thu 3:\n");
    printf("Nhap ho va ten: ");
    fgets(sinhviens[2].name, sizeof(sinhviens[2].name), stdin);
    sinhviens[2].name[strcspn(sinhviens[2].name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &sinhviens[2].age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(sinhviens[2].phoneNumber, sizeof(sinhviens[2].phoneNumber), stdin);
    sinhviens[2].phoneNumber[strcspn(sinhviens[2].phoneNumber, "\n")] = '\0';
    // Sinh vien 4
    sinhviens[3].id = 4;
    printf("\nNhap thong tin cho sinh vien thu 4:\n");
    printf("Nhap ho va ten: ");
    fgets(sinhviens[3].name, sizeof(sinhviens[3].name), stdin);
    sinhviens[3].name[strcspn(sinhviens[3].name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &sinhviens[3].age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(sinhviens[3].phoneNumber, sizeof(sinhviens[3].phoneNumber), stdin);
    sinhviens[3].phoneNumber[strcspn(sinhviens[3].phoneNumber, "\n")] = '\0';
    // Sinh vien 5
    sinhviens[4].id = 5;
    printf("\nNhap thong tin cho sinh vien thu 5:\n");
    printf("Nhap ho va ten: ");
    fgets(sinhviens[4].name, sizeof(sinhviens[4].name), stdin);
    sinhviens[4].name[strcspn(sinhviens[4].name, "\n")] = '\0';
    printf("Nhap tuoi: ");
    scanf("%d", &sinhviens[4].age);
    getchar(); 
    printf("Nhap so dien thoai: ");
    fgets(sinhviens[4].phoneNumber, sizeof(sinhviens[4].phoneNumber), stdin);
    sinhviens[4].phoneNumber[strcspn(sinhviens[4].phoneNumber, "\n")] = '\0';
    // in thong tin sinh vien
    printf("\nThong tin cac sinh vien:\n");
    printf("id sinh vien : %dSinh vien 1 : %s, %d tuoi, So dien thoai: %s\n",sinhviens[0].id ,sinhviens[0].name, sinhviens[0].age, sinhviens[0].phoneNumber);
    printf("id sinh vien : %dSinh vien 2 : %s, %d tuoi, So dien thoai: %s\n",sinhviens[1].id ,sinhviens[1].name, sinhviens[1].age, sinhviens[1].phoneNumber);
    printf("id sinh vien : %dSinh vien 3 : %s, %d tuoi, So dien thoai: %s\n",sinhviens[2].id ,sinhviens[2].name, sinhviens[2].age, sinhviens[2].phoneNumber);
    printf("id sinh vien : %dSinh vien 4 : %s, %d tuoi, So dien thoai: %s\n",sinhviens[3].id ,sinhviens[3].name, sinhviens[3].age, sinhviens[3].phoneNumber);
    printf("id sinh vien : %dSinh vien 5 : %s, %d tuoi, So dien thoai: %s\n",sinhviens[4].id ,sinhviens[4].name, sinhviens[4].age, sinhviens[4].phoneNumber);
    return 0;
}

