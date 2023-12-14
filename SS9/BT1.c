#include <stdio.h>
void sum (){
    printf(" Nhap so phan tu can nhap va gia tri cac phan tu\n");
    printf(" In ra gia tri cac phan tu dang quan ly\n");
    printf(" In ra gia tri cac phan tu chan va tinh tong\n");
}
int a[4];
void nhapsothu1(){
    for(int i=0; i<100; i++){
        printf("moi nhap phan tu thu a[%d]:  ",i);
        scanf("%d",&a[i]);
    }
}
void nhapsothu2(){
    printf("cac so da nhap la:\n");
    for (int i=0; i<100; i++){
        printf("%d   \n",a[i]);

    }
}
void nhapsothu3(){
    int A=0;
    for( int i=0; i<100; i++){
        if(a[i]%2==0){
            printf("cac so chan la: %d\n",a[i]);
            A+=a[i];
        }
    }printf("tong cac so la: %d\n",sum);
}
int main(){
    int nhapso;
    do {
        sum();
        printf("nhap so ban muon chon:");
        scanf("%d",&nhapso);
        switch (nhapso) {
            case 1 :
                nhapsothu1();
                break;
            case 2:
                nhapsothu2();
                break;
            case 3:
                nhapsothu3();
                break;
            default:
                if (nhapso>10||nhapso<0){
                    printf("Nhap sai xin nhap lai \n");
                }
        }
    } while (nhapso!=0);
    return 0;
}
