#include <iostream>   // Library untuk menggunakan cout
#include <queue>      // Library untuk menggunakan queue
#include <string>     // Library untuk menggunakan string

int main() {

    // Membuat queue kosong bernama printQueue
    // Queue ini menyimpan data bertipe string
    std::queue<std::string> printQueue;

    // Menambahkan dokumen ke bagian belakang antrian
    printQueue.push("Homework.pdf");

    // Menambahkan dokumen berikutnya ke belakang antrian
    printQueue.push("Photo.jpg");

    // Selama antrian tidak kosong
    while (!printQueue.empty()) {

        // Menampilkan dokumen yang berada di paling depan antrian
        // front() hanya melihat data paling depan tanpa menghapusnya
        std::cout << "Printing: " << printQueue.front() << std::endl;

        // Menghapus dokumen yang sudah selesai dicetak
        // Setelah dihapus, dokumen berikutnya menjadi paling depan
        printQueue.pop();
    }

    // Mengakhiri program
    return 0;
}