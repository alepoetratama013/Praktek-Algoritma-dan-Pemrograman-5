#include <iostream>
using namespace std;

int main()
{
 int a, n,s;
 cout << "========== Gambar Bangun Datar ======== " << endl;
 cout << " 1. Kotak Bolong " << endl;
 cout << " 2. Segitiga " << endl;
 cout << " Pilih    : "; cin >> a;




    switch (a){
        case 1 :
            int p, l;
            cout << " Panjang   : "; cin >> p;
            cout << " Lebar     : "; cin >> l;
            for(int i = 1; i <= p; i++){
                    cout << " ";
                for(int j = 1; j <= l; j++){
                    if(i==1 || i==p || j==1 || j==l){
                        cout << "* ";
                    }else{
                    cout << "  ";
                    }
                }
            cout << endl;
            }
           break;

        case 2 :
            cout << " Tinggi    : "; cin >> s;
            for(int i=1; i<=s; i++){
                int x=s;
                int y=i;
                for(int j=1; j<=i; j++){
                    cout << y << " ";
                    x--;
                    y = y+x;
                }
                cout << endl;
            }
            break;
    }

    cin.get();
    return 0;
}
