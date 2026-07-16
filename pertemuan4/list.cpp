#include <iostream>   // Library untuk menggunakan cout
#include <list>       // Library untuk menggunakan list
#include <string>     // Library untuk menggunakan tipe data string

int main() {

    // Membuat list kosong bernama playlist
    // List ini hanya dapat menyimpan data bertipe string
    std::list<std::string> playlist;

    // Menambahkan lagu "Song A" ke bagian belakang list
    playlist.push_back("Song A");

    // Menambahkan lagu "Song C" ke bagian belakang list
    playlist.push_back("Song C");

    // Membuat iterator bernama 'it'
    // Iterator dimulai dari elemen pertama (Song A)
    auto it = playlist.begin();

    // Menggeser iterator satu langkah ke depan
    // Sekarang iterator menunjuk ke Song C
    it++;

    // Menyisipkan "Song B" sebelum posisi iterator (Song C)
    // Hasil list menjadi:
    // Song A -> Song B -> Song C
    playlist.insert(it, "Song B");

    // Melakukan perulangan untuk mengambil setiap lagu dalam playlist
    // const std::string& song berarti:
    // - song : variabel sementara yang menyimpan setiap lagu
    // - const : data tidak boleh diubah
    // - & : menggunakan referensi agar lebih hemat memori
    for (const std::string& song : playlist) {

        // Menampilkan nama lagu kemudian diikuti tanda panah
        std::cout << song << " -> ";
    }

    // Menampilkan tulisan END sebagai penanda playlist telah selesai
    std::cout << "END" << std::endl;

    // Mengakhiri program dengan status sukses
    return 0;
}