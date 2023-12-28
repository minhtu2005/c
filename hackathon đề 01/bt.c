#include <stdio.h>
#include <string.h>


struct SinhVien {
    int id;
    char name[30];
    char birthday[30];
    char address[30];
    int status;
};



struct SinhVien studentList[45];
int studentCount = 2;

void printStudentList() {
    printf("Danh sach sinh vien:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, Birthday: %s, Address: %s, Status: %d\n",
               studentList[i].id, studentList[i].name, studentList[i].birthday,
               studentList[i].address, studentList[i].status);
    }
}


void addStudent() {
    struct SinhVien newStudent;
    printf("Nhap thong tin sinh vien moi:\n");
    printf("ID: ");
    scanf("%d", &newStudent.id);
    printf("Name: ");
    scanf("%s", newStudent.name);
    printf("Birthday: ");
    scanf("%s", newStudent.birthday);
    printf("Address: ");
    scanf("%s", newStudent.address);
    printf("Status: ");
    scanf("%d", &newStudent.status);

    studentList[studentCount++] = newStudent;
    printf("Da them sinh vien moi.\n");
}

void updateStudent() {
    char searchName[50];
    int found = 0;
    printf("Nhap ten sinh vien muon cap nhat thong tin: ");
    scanf("%s", searchName);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentList[i].name, searchName) == 0) {
            printf("Nhap thong tin moi cho sinh vien %s:\n", searchName);
            printf("ID: ");
            scanf("%d", &studentList[i].id);
            printf("Name: ");
            scanf("%s", studentList[i].name);
            printf("Birthday: ");
            scanf("%s", studentList[i].birthday);
            printf("Address: ");
            scanf("%s", studentList[i].address);
            printf("Status: ");
            scanf("%d", &studentList[i].status);

            found = 1;
            printf("Da cap nhat thong tin cho sinh vien %s.\n", searchName);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ten la %s.\n", searchName);
    }
}


void deleteStudent() {
    char deleteName[50];
    int found = 0;
    printf("Nhap ten sinh vien muon xoa: ");
    scanf("%s", deleteName);

    for (int i = 0; i < studentCount; i++) {
        if (strcmp(studentList[i].name, deleteName) == 0) {
            for (int j = i; j < studentCount - 1; j++) {
                studentList[j] = studentList[j + 1];
            }
            studentCount--;
            found = 1;
            printf("Da xoa sinh vien %s.\n", deleteName);
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay sinh vien co ten la %s.\n", deleteName);
    }
}


void bubbleSort() {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = 0; j < studentCount - i - 1; j++) {
            if (strcmp(studentList[j].name, studentList[j + 1].name) > 0) {
                struct SinhVien temp = studentList[j];
                studentList[j] = studentList[j + 1];
                studentList[j + 1] = temp;
            }
        }
    }
    printf("Da sap xep danh sach sinh vien theo ten.\n");
}


void binarySearch() {
    char searchName[50];
    int found = 0;

    bubbleSort();

    printf("Nhap ten sinh vien muon tim kiem: ");
    scanf("%s", searchName);

    int low = 0, high = studentCount - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (strcmp(studentList[mid].name, searchName) == 0) {
            found = 1;
            break;
        } else if (strcmp(studentList[mid].name, searchName) < 0) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found) {
        printf("Thong tin sinh vien tim thay:\n");
        printf("ID: %d, Name: %s, Birthday: %s, Address: %s, Status: %d\n",
               studentList[mid].id, studentList[mid].name, studentList[mid].birthday,
               studentList[mid].address, studentList[mid].status);
    } else {
        printf("Khong tim thay sinh vien co ten la %s.\n", searchName);
    }
}


void searchByStatus() {
    int searchStatus;
    printf("Nhap status muon tim kiem: ");
    scanf("%d", &searchStatus);

    printf("Danh sach sinh vien co status %d:\n", searchStatus);
    for (int i = 0; i < studentCount; i++) {
        if (studentList[i].status == searchStatus) {
            printf("ID: %d, Name: %s, Birthday: %s, Address: %s, Status: %d\n",
                   studentList[i].id, studentList[i].name, studentList[i].birthday,
                   studentList[i].address, studentList[i].status);
        }
    }
}

int main() {
    int s;
    studentList[0].id = 1;
    strcpy(studentList[0].name, "Le nhat anh");
    strcpy(studentList[0].birthday, "18/01/2005");
    strcpy(studentList[0].address, "Dong nai");
    studentList[0].status = 1;

    studentList[1].id = 2;
    strcpy(studentList[1].name, "Nguyen tam binh");
    strcpy(studentList[1].birthday, "02/06/2005");
    strcpy(studentList[1].address, "Binh duong");
    studentList[1].status = 2;
    do {
        printf("\n***********MENU*************\n");
        printf("1. In toan bo danh sach sinh vien\n");
        printf("2. Them moi sinh vien\n");
        printf("3. Cap nhat thong tin sinh vien\n");
        printf("4. Xoa sinh vien\n");
        printf("5. Sap xep va in danh sach sinh vien\n");
        printf("6. Tim kiem theo ten (su dung tim kiem nhi phan)\n");
        printf("7. Tim kiem va in ra toan bo thong tin sinh vien theo status\n");
        printf("8. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &s);

        switch (s) {
            case 1:
                printStudentList();
                break;
            case 2:
                addStudent();
                break;
            case 3:
                updateStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                bubbleSort();
                printStudentList();
                break;
            case 6:
                binarySearch();
                break;
            case 7:
                searchByStatus();
                break;
            case 8:
                printf("Chuong trinh ket thuc.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }

    } while ( s != 8);

    return 0;
}

