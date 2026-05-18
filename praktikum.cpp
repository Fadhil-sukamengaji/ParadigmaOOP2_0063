#include <iostream>
#include <string>

using namespace std;

class RekeningBank {
protected:
    string nama;
    int saldo;

public:
    RekeningBank(string n, int s) {
        nama = n;
        saldo = s;
    }

    virtual void potongAdmin() = 0;

    void cetakInfo() {
        cout << "Nasabah : " << nama << endl;
        cout << "Saldo   : Rp " << saldo << endl;
        cout << "-----------------------------------" << endl;
    }
};

