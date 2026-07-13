#include <iostream>
using namespace std;

// 1. ABSTRACTION
// Animal adalah gambaran umum dari hewan.
// Kita tahu hewan punya nama dan bisa bersuara,
// tetapi belum menentukan suara hewan apa.
class Animal {
private:
    // 2. ENCAPSULATION
    // name dibuat private, jadi tidak bisa diakses langsung dari main().
    // Contoh yang TIDAK boleh: myDog.name = "Buddy";
    string name;

public:
    // Setter digunakan untuk memberi atau mengubah nama hewan.
    void setName(string n) {
        name = n;
    }

    // Getter digunakan untuk mengambil atau melihat nama hewan.
    string getName() {
        return name;
    }

    // 4. POLYMORPHISM
    // virtual berarti method ini dapat diganti oleh class turunan.
    // Suara hewan secara umum belum spesifik.
    virtual void makeSound() {
        cout << "Some generic animal sound" << endl;
    }
};

// 3. INHERITANCE
// Dog adalah class turunan dari Animal.
// Artinya Dog mendapat setName(), getName(), dan makeSound() dari Animal.
class Dog : public Animal {
public:
    // override mengganti isi makeSound() dari class Animal.
    // Dog punya suara sendiri, yaitu "Woof! Woof!"
    void makeSound() override {
        cout << getName() << " says: Woof! Woof!" << endl;
    }
};

int main() {
    // Membuat object myDog dari class Dog.
    Dog myDog;

    // Mengisi nama anjing melalui setter dari class Animal.
    myDog.setName("Buddy");

    // Memanggil makeSound() versi Dog.
    myDog.makeSound();

    return 0;
}