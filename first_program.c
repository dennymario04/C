#include<stdio.h>
#include<math.h>
void Biodata(){
    char nama[] = "Denny Mario";
    char ttl[] = "Bagan Batu 04 September 2000";
    printf("Nama: %s\n",nama);
    printf("Tempat Tanggal Lahir: %s\n",ttl);
}

/*void Umur(){
    int tahunsekarang ;
    int tahunlahir; 
    int umursekarang = tahunsekarang - tahunlahir;
    printf("=====UMUR BERDASARKAN TAHUN===== \n");
    printf("Input tahun sekarang : ");
    scanf("%d",&tahunsekarang);
    printf("Input tahun lahir : ");
    scanf("%d",&tahunlahir);
    printf("%d",umursekarang);
}*/
void Pengurangan(){
    int nilai1 = 100;
    int nilai2 = 50;
    int hasil = nilai1 - nilai2;
    printf("%d",hasil);

}
void main(){
   Biodata();
   Pengurangan();
}