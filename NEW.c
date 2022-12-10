#include<stdio.h>

int main(){

     //Contoh pengggunaan switch case,membuat program voting sederhana
     //3 kandidat ketua kelas yang diwakili dengan int a b c
     int a,b,c,d;
    a=1;
    b=2;
    c=3;
    printf("Pilih calon kamu: ");
    scanf("%d",&d);
    switch (d)
    {
        case 1 :
        printf("Anda memilih calon no 1");
        break;
        case 2 :
        printf("Anda memilih calon no 2");
        break;
        case 3 :
        printf("Anda memilih calon no 3");
        break;
        default :
        printf("Kamu tak memilih siapun");
        break;
    }
    return 0;
}