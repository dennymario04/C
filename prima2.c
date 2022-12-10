#include<stdio.h>

int main(){
    //Bilangan prima ada bilangan yang pembaginya adalah satu dan bilangan itu sendiri
    //cth nya 2 dan 3,4 tidak karena pembaginya ada 1,2,dan 4 
    int n,i;
    printf("Input bilangan: ");
    scanf("%d",&n);
    for ( i=2;i<=n;++i ){
        if( i%2 == 0){
            printf("%d ",i);
            printf("Bukan Bilangan Prima\n");
        }else{
            printf("%d ",i);
            printf("Bilangan Prima\n");
        }
    }
}