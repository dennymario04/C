/*
Buat sebuah program sederhana,daftar nilai sebuah sekolah
buat hasil nilai apabila dibawah 60 maka C 80 B 100 A
*/

#include<stdio.h>

void InputNilai(int Nilai[],char Nama[]){
    printf("==========SMA Land Of Dawn==========\n");
    printf("Nama :%s\n",Nama);
    printf("Nilai :%d\n",Nilai);
    printf("==========SMA Land Of Dawn==========\n");
    if(Nilai <= 69){   
        printf("Nilai kamu adalah C!,Ayo belajar lagi");
    }else if(Nilai <= 80 ){
        printf("Nilai kamu adalah B!,Semangat,Pertahankan,Tingkatkan lagi!");
    }else if(Nilai <= 100){
        printf("Nilai kamu adalah A!,Tetap fokus dan konsisten!");
    }else{
        printf("Nilai tidak ada!");
    }
}
void main(){
    InputNilai(69,"Jojo");
}
