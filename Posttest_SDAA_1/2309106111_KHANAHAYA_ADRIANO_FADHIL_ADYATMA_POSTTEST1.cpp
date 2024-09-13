#include <iostream>
using namespace std;

// Tiang asal (A), Tiang tujuan (B), dan Tiang sementara (B)
// memindahkan piringan menggunakan fungsi rekursif
void hanoi(int n, char asal, char tujuan, char sementara) {

    // jika hanya ada 1 piringan, pindahkan langsung
    if (n == 1) {
        cout << "Pindahkan piringan dari tiang " << asal << " ke tiang " << tujuan << endl;
        return;
    }

    // Pindahkan n-1 piringan dari tiang asal ke tiang sementara
    hanoi(n - 1, asal, sementara, tujuan);

    // Pindahkan piringan terakhir dari tiang asal ke tiang tujuan
    cout << "Pindahkan piringan dari tiang " << asal << " ke tiang " << tujuan << endl;
    
    // pindahkan n-1 piringan dari tiang sementara ke tiang tujuan
    hanoi(n - 1, sementara, tujuan, asal);
}

int main() {
    int n = 3; // jumlah piringan
    cout << "Solusi menara hanoi dengan " << n << "piringan " << endl;

    // memanggil fungsi rekursif untuk memulai proses
    hanoi(n, 'A', 'C', 'B');

    return 0; 
}