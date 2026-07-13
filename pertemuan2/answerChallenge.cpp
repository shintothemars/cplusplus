#include <iostream>
using namespace std;

// Function untuk mencari dan menampilkan faktor dari sebuah angka
void findFactors(int num) {

    // Menampilkan judul hasil
    cout << "Factors of " << num << " are: ";

    // Perulangan dari 1 sampai num
    for (int i = 1; i <= num; i++) {

        // % adalah modulo, untuk mencari sisa pembagian
        // Jika num dibagi i sisanya 0, berarti i adalah faktor dari num
        if (num % i == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
}

int main() {

    // Menyimpan angka yang ingin dicari faktornya
    int number = 8;

    // Memanggil function untuk mencari faktor angka 8
    findFactors(number);

    return 0;
}