

void setNama(mahasiswa &a, string b) {
    a.nama = b;
    cout << a.nama;
}

int main() {
    mahasiswa joko;
    setNama(joko, "Kairi Kumar");
    return 0;
}