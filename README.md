# Praktikum2
## Soal1.cpp : program menghitung bilangan terbesar dari 3 bilangan

**Alur algoritma**
1. mendeklarasikan Variabel int A, B, C, Sebagai variabel input.
2. Membaca input dari keyboard cin >> A >> B >> C.
3. Membandingkan Nilai variabel **A** dan **B**.
4. Kondisi **True**, maka bandingkan nilai variabel **A** dan **C**.
5. Kondisi **False**, maka bnadingkan nilai variabel **B** dan **C**.

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

``` # Praktikum21
