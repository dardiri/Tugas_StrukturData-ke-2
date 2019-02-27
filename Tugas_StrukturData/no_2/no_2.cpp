#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j[20];
    int input;
    cout<<"||#####################################||\n";
    cout<<"||=======PROGRAM DERET FIBONACCI=======||\n";
    cout<<"||*************REVI PROJECT************||\n";
    cout<<"||#####################################||\n\n";
    cout<<"Input Deret Fibonacci = ";
    cin>>input;
    cout<<endl;
    for (i=0; i<=input; i++){
        if (i<2)
        j[i]=i ;
        else
        j[i] =j[i-1]+j[i-2];
    }

    for (i=1; i<=input; i++){
        cout<<j[i]<<" ";
    }
    cout<<endl;
    getch();

}
