#include <iostream>   // Library untuk cout
#include <vector>     // Library untuk vector
using namespace std;

int main()
{
    // Membuat vector berisi 4 angka
    vector<int> v = {10, 20, 30, 40};

    // Menggunakan iterator untuk menelusuri isi vector
    // it dimulai dari elemen pertama (v.begin())
    // Perulangan berhenti ketika it mencapai akhir vector (v.end())
    // ++it berarti pindah ke elemen berikutnya
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)

        // *it digunakan untuk mengambil nilai yang sedang ditunjuk oleh iterator
        cout << *it << " ";

    // Program selesai
    return 0;
}