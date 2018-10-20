# Praktikum2
## Soal1.cpp : program menghitung bilangan terbesar dari 3 bilangan

**Alur algoritma**
1. mendeklarasikan Variabel int A, B, C, Sebagai variabel input.
2. Membaca input dari keyboard cin >> A >> B >> C.
3. Membandingkan Nilai variabel **A** dan **B**.
4. Kondisi **True**, maka bandingkan nilai variabel **A** dan **C**.
5. Kondisi **False**, maka bandingkan nilai variabel **B** dan **C**.

**code program**

```c++
#include <iostream>

using namespace std;

int main() {
    int A, B, C;
    cout << "masukkan bilangan 1: "; cin >> A;
    cout << "masukkan bilangan 2: "; cin >> B;
    cout << "masukkan bilangan 3: "; cin >> C;

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalaj: " << B << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    }
}

``` 

# Soal2.cpp##

**Alur algoritma**
1. Mendeklarasi variabel int A, B, C, dan D, sebagai variabel input.
2. Membaca input dari keyboard cin >> A >> B >> C >> D.
3. Membandingkan Nilai Variabel **A**, **B**, dan **C**.
4. Kondisi **True**, Maka bandingkan nilai variabel **A** dan **B**.
5. KOndisi **False**, Maka bandingkan nilai variabel **C** dan **D**.

**Code Program**

```c++
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

```