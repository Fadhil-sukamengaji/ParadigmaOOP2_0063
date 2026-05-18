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

class RekeningPremium : public RekeningBank {
public:
    RekeningPremium(string n, double s) : RekeningBank(n, s) {}
    
    void potongAdmin() override {
        if (saldo <= 10000000) {
            saldo -= 50000;
        }
    }
};

int main() {
    RekeningSyariah mhs1("Fadhil", 5000000);
    RekeningKonvensional mhs2("Budi", 2000000);
    RekeningPremium mhs3("Siti", 15000000);
    RekeningPremium mhs4("Andi", 8000000);

    mhs1.potongAdmin();
    mhs2.potongAdmin();
    mhs3.potongAdmin();
    mhs4.potongAdmin();

    mhs1.cetakInfo();
    mhs2.cetakInfo();
    mhs3.cetakInfo();
    mhs4.cetakInfo();

    return 0;
}
