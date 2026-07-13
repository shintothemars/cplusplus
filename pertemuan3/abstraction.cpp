#include <iostream>
#include <string>
using namespace std;

// Shape adalah abstract class.
// Class ini hanya menjadi "aturan/cetakan umum" untuk semua bentuk.
class Shape {
protected:
    // color disimpan sebagai protected:
    // bisa dipakai oleh class Shape dan class turunannya,
    // tetapi tidak bisa diakses langsung dari main().
    string color;

public:
    // Constructor untuk mengisi warna bentuk.
    Shape(string color) : color(color) {}

    // Pure virtual method.
    // = 0 artinya method area() belum punya isi di class Shape.
    // Setiap class turunan WAJIB membuat cara menghitung luasnya sendiri.
    virtual double area() = 0;

    // Concrete method: sudah punya isi dan bisa langsung digunakan
    // oleh class turunan.
    string getColor() {
        return color;
    }

    // Virtual destructor.
    // Berguna agar object turunan dibersihkan dengan benar
    // saat dihapus melalui pointer Shape.
    virtual ~Shape() {}
};

// Rectangle adalah class turunan dari Shape.
class Rectangle : public Shape {
private:
    // Data khusus milik persegi panjang.
    double length, width;

public:
    // Constructor Rectangle.
    // Shape(color) mengirim nilai color ke constructor class induk.
    Rectangle(string color, double length, double width) : Shape(color) {
        this->length = length;
        this->width = width;
    }

    // Mengisi method area() yang sebelumnya masih kosong di Shape.
    // Rumus luas persegi panjang = panjang × lebar.
    double area() override {
        return length * width;
    }
};

int main() {
    // Pointer bertipe Shape menunjuk ke object Rectangle.
    // Ini menunjukkan polymorphism.
    Shape* s = new Rectangle("Yellow", 2, 4);

    // getColor() berasal dari Shape.
    // area() dijalankan menggunakan rumus milik Rectangle.
    cout << "Rectangle color is " << s->getColor()
         << " and area is: " << s->area() << endl;

    // Menghapus object yang dibuat dengan new.
    delete s;

    return 0;
}