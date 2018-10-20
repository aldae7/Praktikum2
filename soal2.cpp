#include <iostream>

using namespace std;

int main(){
    int A, B, C, D;

        cout << "Masukkan Bilangan 1:";
        cin >> A;
        cout << "Masukkan Bilangan 2:";
        cin >> B;
        cout << "Masukkan Bilangan 3:";
        cin >> C;
        cout << "Masukkan Bilangan 4:";
        cin >> D;

        if (A>B && A>C && B>D) cout <<
    "Bilangan Terbesar = " << A << endl;
        else

        if (B>A && B>C && B>D) cout <<
    "Bilangan Terbesar = " << B << endl;

        else {
            if (C>A && C>B && C>D) cout <<
    "Bilangan Tervesar = " << C << endl;
            else
                cout << "Bilangan terbesar = " << D;
        }
}
