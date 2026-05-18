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

class RekeningSyariah : public RekeningBank {
public:
    RekeningSyariah(string n, double s) : RekeningBank(n, s) {}
    
    void potongAdmin() override {
    }
};

class RekeningKonvensional : public RekeningBank {
public:
    RekeningKonvensional(string n, double s) : RekeningBank(n, s) {}
    
    void potongAdmin() override {
        saldo -= 15000;
    }
};

