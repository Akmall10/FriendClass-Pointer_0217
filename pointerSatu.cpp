#include <iostream>
using namespace std;


        void showNim() {
            cout << "No Induk = " << nim << endl;
        }
};

int main() {
    mahasiswa mhs{1}; // Object mhs
    mhs.showNim();    // Member Access Operator

    mahasiswa &refMhs = mhs; // Pointer Reference refMhs
    refMhs.nim = 2;           // Member Access Operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs;  // Pointer Dereference pMhs
    pMhs->nim = 3;            // Arrow Operator
    pMhs->showNim();

    return 0;
}