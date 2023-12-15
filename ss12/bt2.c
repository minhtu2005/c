#include <stdio.h>
void capsothu1(int q,int w){
    printf("%d * %d= %d\n",q,w,q*w);
    if (q<=w & q%w==0){
        printf("%d La so chia het cho %d\n",w,q);
    } else {
        printf("%d  La so khong chia het cho %d\n",w,q);
    }

}
void capsothu2(int w, int e) {
    printf("%d * %d= %d\n", w, e, w * e);
    if (w < e ) {
        printf("%d / %d = %d\n", e, w, e / w);
    } else {
        printf("%d / %d = %d\n", w, e, w / e);
    }
}
void capsothu3(int q, int e) {
    printf("%d * %d= %d\n", q, e, q * e);
    if (q < e ) {
        printf("%d / %d = %d\n", e, q, e / q);
    } else {
        printf("%d / %d = %d\n", q, e, q / e);
    }
}

int main(){
    int q,w,e;
    printf("nhap 3 so q,w,e:\n");
    scanf("%d%d%d",&q,&w,&e);
    capsothu1(q,w);
    capsothu2(w,e);
    capsothu3(q,e);
    return 0;
}