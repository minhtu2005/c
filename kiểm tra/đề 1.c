#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void bubbleSort(int a[], int b)
{
    for(int i=0; i<b-1; i++)
        for(int j=0; j<b-1; j++)
        {
            if (a[j] < a[j+1])
                swap(&a[j], &a[j+1]);
        }
}
void array_after(int a[], int size)
{
    for (int i=0; i<size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void chenSo(int a[], int *n, int key)
{
    int i;
    if (key > a[0])
    {
        for (i = *n - 1; i >=0; i--)
        {
            a[i+1] = a[i];
        }
        a[0] = key;
    }else
    {
        for(i=1; i<*n; i++)
        {
            if (a[i] >= key && a[i-1] < key)
                break;
        }
        for(int j = *n-1; j >= i; j--)
        {
            a[j+1] = a[j];
        }
        a[i] = key;
    }
    (*n)++;
}

int main(){
    int a[100];
    int n;
    printf("MENU:\n");
    printf("1. Nhap gia tri n phan tu cua mang.\n");
    printf("2. In gia tri cac phan tu trong mang.\n");
    printf("3. Tinh trung binh cac phan tu duong trong mang.\n");
    printf("4. In ra vi tri cac phan tu co gia tri bang k (k nhap tu ban phim) trong mang.\n");
    printf("5. Su dung thuat toan sap xep noi bot sap xep mang giam dan.\n");
    printf("6. Tinh so luong cac phan tu la so nguyen to trong mang.\n");
    printf("7. Sap xep cac phan tu chan chia het cho 3 ...\n");
    printf("8. Nhap gia tri m tu ban phim, chen gia tri m vao mang (sap xeo giam dan) dung vi tri.\n");
    printf("9. Thoat.\n");
    int chucnang;

    while (1)
    {
        int chucnang, c, biendem, k, d, j, b, n, m ;
        float trungBinhCong;
        printf("So ban muon chon la:");
        scanf("%d", &chucnang);
        switch(chucnang)
        {
            case 1:
                printf("Gia tri n phan tu cua mang la:");
                scanf("%d", &n);
                break;
            case 2:
                for(int i=0; i<n; i++)
                {
                    printf("Nhap gia tri phan tu thu %d:", i+1);
                    scanf("%d", &a[i]);
                }
                printf("\nGia tri cac phan tu trong mang la:\n");
                for(int i=0; i<n; i++)
                {
                    printf("%d\n", a[i]);
                }
                break;
            case 3:
                c = 0;
                biendem = 0;
                for(int i=0; i<n; i++)
                {
                    if (a[i] > 0)
                    {
                        c += a[i];
                        biendem++;
                    }
                }
                if (biendem > 0)
                {
                    trungBinhCong = (float)c / biendem;
                    printf("Trung binh cac phan tu duong trong mang = %f\n", trungBinhCong);
                }else
                    printf("Khong co phan tu duong nao trong mang.\n");
                break;
            case 4:
                printf("Nhap gia tri k:");
                scanf("%d", &k);
                b = 0;
                for(int i=0; i<n; i++)
                {
                    if(a[i] == k)
                    {
                        printf("Cac vi tri co gia tri = %d la: %d\n", k, i);
                        b++;
                    }
                }
                if(!b)
                    printf("Khong co vi tri nao!\n");
                break;
            case 5:
                bubbleSort(a, n);
                printf("Mang sau khi duoc sap xep theo thu tu giam dan: \n");
                array_after(a, n);
                break;
            case 6:
                n = 0;
                printf("Danh sach cac so nguyen to la: ");
                for (int i=0; i<n; i++)
                {
                    j = 2;
                    b = 1;
                    while (j < a[i])
                    {
                        if(a[i] % j == 0)
                            b = 0;
                        break;
                        j++;
                    }
                    if(b == 1)
                    {
                        n = n + 1;
                        printf("%d ", a[i]);
                    }
                }
                printf("\nSo luong so nguyen to trong mang la: %d\n",n);
                break;
            case 8:
                printf("Nhap gia tri cua m:");
                scanf("%d", &m);
                chenSo(a, &n, m);

                printf("Mang sau khi duoc chen gia tri m: ");
                for(int i=0; i<n; i++)
                {
                    printf("%d ", a[i]);
                }printf("\n");
                break;
            case 9:
                return 0;
            default: printf("Thoat");
        }
    }while (chucnang!=9);
    return 0;
}