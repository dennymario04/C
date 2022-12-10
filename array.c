#include<stdio.h>


void SingleDimensionArrays(){
    //kenalan dengan array
    int DaftarAngka[] = {10,30,8,5,3};
    int i;
    //accessing array
    printf("%d\n",DaftarAngka[0]);
    //change array element
    DaftarAngka[0] = 21;
    printf("%d\n",DaftarAngka[0]);
    //loop array
    for(i=0;i<=5;i++){
        printf("%d\n", DaftarAngka[i]);
    }
}
void MultiDimensionArray(){
    int matrix[2][3] = {{ 10,4,2 },{3,5,7}};
    printf("%d\n",matrix[0][2]);
}
void String(){
    char txt[] = "Denny \"ArtemisZ.\" Mario";
    printf (txt);
}

int main()
{
    String();
    return 0; 
}