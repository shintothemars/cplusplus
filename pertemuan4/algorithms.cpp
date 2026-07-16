#include <iostream>    // Library untuk cout
#include <algorithm>   // Library yang berisi fungsi sort()
#include <vector>      // Library untuk vector

using namespace std;

int main() {

    // Membuat vector bertipe int
    // Isi awal vector masih belum berurutan
    vector<int> numbers = {3, 2, 5, 1, 4};

    // Mengurutkan isi vector dari kecil ke besar (ascending)
    // begin() = elemen pertama
    // end() = setelah elemen terakhir
    sort(numbers.begin(), numbers.end());

    // Menampilkan isi vector yang sudah diurutkan
    for (int number : numbers) {
        cout << number << " ";
    }

    // Mengakhiri program
    return 0;
}