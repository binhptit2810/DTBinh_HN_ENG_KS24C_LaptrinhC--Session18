#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student sinhvien1, sinhvien2, sinhvien3, sinhvien4, sinhvien5;

    //yeu cau nguoi dung nhap thong tin sinh vien
    printf("Moi ban nhap thong tin cua sinh vien 1\n");
    printf("Moi ban nhap ho va ten cua sinh vien 1: ");
    fgets(sinhvien1.name, sizeof(sinhvien1.name), stdin);
    sinhvien1.name[strcspn(sinhvien1.name, "\n")] = '\0'; 
    printf("Moi ban nhap tuoi cua sinh vien 1: ");
    scanf("%d", &sinhvien1.age);
    getchar(); 
    printf("Moi ban nhap so dien thoai cua sinh vien 1: ");
    fgets(sinhvien1.phoneNumber, sizeof(sinhvien1.phoneNumber), stdin);
    sinhvien1.phoneNumber[strcspn(sinhvien1.phoneNumber, "\n")] = '\0';

    //sinh vien 2
    printf("Moi ban nhap thong tin cua sinh vien 2\n");
    printf("Moi ban nhap ho va ten cua sinh vien 2: ");
    fgets(sinhvien2.name, sizeof(sinhvien2.name), stdin);
    sinhvien2.name[strcspn(sinhvien2.name, "\n")] = '\0';
    printf("Moi ban nhap tuoi cua sinh vien 2: ");
    scanf("%d", &sinhvien2.age);
    getchar();
    printf("Moi ban nhap so dien thoai cua sinh vien 2: ");
    fgets(sinhvien2.phoneNumber, sizeof(sinhvien2.phoneNumber), stdin);
    sinhvien2.phoneNumber[strcspn(sinhvien2.phoneNumber, "\n")] = '\0';
    // Sinh vien 3
    printf("Moi ban nhap thong tin cua sinh vien 3\n");
    printf("Moi ban nhap ho va ten cua sinh vien 3: ");
    fgets(sinhvien3.name, sizeof(sinhvien3.name), stdin);
    sinhvien3.name[strcspn(sinhvien3.name, "\n")] = '\0';
    printf("Moi ban nhap tuoi cua sinh vien 3: ");
    scanf("%d", &sinhvien3.age);
    getchar();
    printf("Moi ban nhap so dien thoai cua sinh vien 3: ");
    fgets(sinhvien3.phoneNumber, sizeof(sinhvien3.phoneNumber), stdin);
    sinhvien3.phoneNumber[strcspn(sinhvien3.phoneNumber, "\n")] = '\0';
    // Sinh vien 4
    printf("Moi ban nhap thong tin cua sinh vien 4\n");
    printf("Moi ban nhap ho va ten cua sinh vien 4: ");
    fgets(sinhvien4.name, sizeof(sinhvien4.name), stdin);
    sinhvien4.name[strcspn(sinhvien4.name, "\n")] = '\0';
    printf("Moi ban nhap tuoi cua sinh vien 4: ");
    scanf("%d", &sinhvien4.age);
    getchar();
    printf("Moi ban nhap so dien thoai cua sinh vien 4: ");
    fgets(sinhvien4.phoneNumber, sizeof(sinhvien4.phoneNumber), stdin);
    sinhvien4.phoneNumber[strcspn(sinhvien4.phoneNumber, "\n")] = '\0';
    // Sinh vien 5
    printf("Moi ban nhap thong tin cua sinh vien 5\n");
    printf("Moi ban nhap ho va ten cua sinh vien 5: ");
    fgets(sinhvien5.name, sizeof(sinhvien5.name), stdin);
    sinhvien5.name[strcspn(sinhvien5.name, "\n")] = '\0';
    printf("Moi ban nhap tuoi cua sinh vien 5: ");
    scanf("%d", &sinhvien5.age);
    getchar();
    printf("Moi ban nhap so dien thoai cua sinh vien 5: ");
    fgets(sinhvien5.phoneNumber, sizeof(sinhvien5.phoneNumber), stdin);
    sinhvien5.phoneNumber[strcspn(sinhvien5.phoneNumber, "\n")] = '\0';
    // In thong tin sinh vien
    printf("\nThong tin cac sinh vien:\n");
    printf("Sinh vien 1: %s, %d tuoi, So dien thoai: %s\n", sinhvien1.name, sinhvien1.age, sinhvien1.phoneNumber);
    printf("Sinh vien 2: %s, %d tuoi, So dien thoai: %s\n", sinhvien2.name, sinhvien2.age, sinhvien2.phoneNumber);
    printf("Sinh vien 3: %s, %d tuoi, So dien thoai: %s\n", sinhvien3.name, sinhvien3.age, sinhvien3.phoneNumber);
    printf("Sinh vien 4: %s, %d tuoi, So dien thoai: %s\n", sinhvien4.name, sinhvien4.age, sinhvien4.phoneNumber);
    printf("Sinh vien 5: %s, %d tuoi, So dien thoai: %s\n", sinhvien5.name, sinhvien5.age, sinhvien5.phoneNumber);
    return 0;
}

