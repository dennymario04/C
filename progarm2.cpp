#include <iostream>
using namespace std;

int main() {

    int nilaiA,nilaiB;
    int total;
    int ba=0;

    cout<<"Masukan Pilihan : "<<endl;
    cout<<"1.Bilangan Ganjil"<<endl;
    cout<<"2.Bilangan Genap"<<endl;
    cin>>nilaiA;
    cout<<"Masukan Batas : ";
    cin>>nilaiB;

    cout << endl;



    if(nilaiA ==1)
    {
        cout<<"Deret bilangan Ganjil"<<endl;

        for(int i=1; i<=nilaiB; i++)
        {
            if(i%2!=0)
            {
                cout<< "Ganjil - "<<i<<endl;
                total = total + i;
                ba ++;

            }

        }
     cout<<"\ntotal jumlah = "<<total;
     cout<<" \ntotal angka yang di input = "<<ba;
   } else if(nilaiA==2)
    {
        cout<<"Deret bilangan Genap"<<endl;

        for (int i=1; i<=nilaiB; i++)
        {
            if(i%2==0)

            {
                cout<< "Ganjil - "<<i<<endl;
                total = total + i;
                ba ++;
               } 
    }
      cout << " = " << total;
      cout<<"\ntotal jumlah = "<<total;
      cout<<"\ntotal angka yang di input = "<<ba;
return 0;
}
}