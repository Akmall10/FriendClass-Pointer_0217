#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    private:
        string nama;
    public:
        friend void setNama(mahasiswa &a, string);
};



int main() {
    mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}