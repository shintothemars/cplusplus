#include <iostream>   // Library untuk cout
#include <vector>     // Library untuk vector

int main() {

    // Membuat vector kosong bertipe int
    std::vector<int> scores;

    // Menambahkan data ke bagian akhir vector
    scores.push_back(85);   // Menambah angka 85
    scores.push_back(92);   // Menambah angka 92
    scores.push_back(78);   // Menambah angka 78

    // Mengakses elemen menggunakan index
    // Index dimulai dari 0
    // scores[1] berarti mengambil elemen ke-2 yaitu 92
    std::cout << "Second student score: " << scores[1] << std::endl;

    // Menampilkan semua isi vector
    std::cout << "All scores: ";

    // Mengambil setiap nilai dalam vector satu per satu
    for (int score : scores) {
        std::cout << score << " ";
    }

    // Program selesai
    return 0;
}