#include<stdio.h>

int main(){
    int n;
    printf("Masukkan tinggi pola : ");
    scanf("%d",&n);
    printf("\n Pola 1");
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n Pola 2");
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}