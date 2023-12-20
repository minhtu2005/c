#include<stdio.h>
int c,d,choice;
int a[100][100];

void menu(){
    printf("1.In gia tri mang theo ma tran");
    printf("2. Sap xep mang co gia tri cac phan tu theo dong tang dan");
    printf("3. Sap xep mang co gia tri cac phan tu theo cot giam dan");
    printf("4. Thoat");
}

void outp(){
    printf("phan tu trong mang la: ");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++) {
            printf("%d", a[i][j]);
        }
    }
}

void cot() {
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d- 1; j++) {
            for (int k = 0; k < d - j - 1; k++) {
                if (a[i][k] > a[i][k + 1]) {

                    int temp = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = temp;
                }
            }
        }
    }
}

void hang() {
    for (int j = 0; j < d; j++) {
        for (int i = 0; i < c - 1; i++) {
            for (int k = 0; k <c - i - 1; k++) {
                if (a[k][j] < a[k + 1][j]) {

                    int temp = a[k][j];
                    a[k][j] = a[k + 1][j];
                    a[k + 1][j] = temp;
                }
            }
        }
    }
}


int main()
{

    printf("nhap cot: ");
    scanf("%d",&c);
    printf("nhap hang: ");
    scanf("%d",&d);
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("nhap phan tu hang %d cot %d: ",d,c);
            scanf("%d",a[i][j]);
        }
    }
    int choice;
    do {
        menu();
        printf("choose: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                outp();
                break;
            case 2:
                cot();
                outp();
                break;
            case 3:
                hang();
                outp();
                break;
            case 4:
                return 0;
            default:printf("nhap sai roi be oiiii");
        }
    }while(choice!=4);
    return 0;
}