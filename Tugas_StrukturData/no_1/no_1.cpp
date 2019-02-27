#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int I[10];
    int index [10];
    int a,b,c,input;

    cout<<"||#####################################||\n";
    cout<<"||=========PROGRAM MENCARI ANGKA=======||\n";
    cout<<"||*************REVI PROJECT************||\n";
    cout<<"||#####################################||\n\n";
    cout<<"Masukkan Jumlah Input Data : ";
    cin>>input;
    cout<<endl;

    for(a=1;a<=input;a++){
        cout << "\tInput Ke -" << a << " : ";
        cin >> I[a];
      }

      cout<<endl;
      cout << "\tInput Angka Yang di Cari : ";
      cin >> c;

      b=0;
      for (a=0;a<10;a++){
        if(I[a]==c){
            index[b]=a;
            b++;
        }
      }
      if (b>0){
            cout << "\n";
            cout << "\t Angka " << c << " Yang Dicari Ada " << b << " Buah\n";
            cout << "\t Angka Tersebut Terdapat Dalam Input Ke ";

            for(a=0;a<b;a++){
                  cout << index[a] << " ";
            }
            cout << "\n";
      }
      else{
            cout << "\n";
            cout << "\t Angka Tidak Ditemukan\n";
      }

      return 0;
}
