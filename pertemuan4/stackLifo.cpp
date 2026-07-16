#include <iostream>   // Library untuk menggunakan cout
#include <stack>      // Library untuk menggunakan stack
#include <string>     // Library untuk menggunakan string

int main() {

    // Membuat stack kosong bernama undoStack
    // Stack ini menyimpan data bertipe string
    std::stack<std::string> undoStack;

    // Menambahkan aksi pertama ke bagian paling atas stack
    undoStack.push("Type 'Hello'");

    // Menambahkan aksi kedua ke bagian paling atas stack
    // Sekarang "Type 'World'" berada di paling atas
    undoStack.push("Type 'World'");

    // Menampilkan data yang berada di paling atas stack
    // top() hanya melihat data paling atas tanpa menghapusnya
    std::cout << "Undoing action: " << undoStack.top() << std::endl;

    // Menghapus data yang berada di paling atas stack
    // "Type 'World'" akan dihapus
    undoStack.pop();

    // Menampilkan data paling atas setelah penghapusan
    // Sekarang yang berada di atas adalah "Type 'Hello'"
    std::cout << "Current top action: " << undoStack.top() << std::endl;

    // Mengakhiri program
    return 0;
}