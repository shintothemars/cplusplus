#include <iostream>
#include <string>
using namespace std;

// Base class / parent class
// Class Vehicle adalah class induk untuk berbagai jenis kendaraan.
class Vehicle {
public:
    // Atribut brand milik Vehicle.
    // Karena public, atribut ini bisa diakses dari class turunan dan main().
    string brand = "Ford";

    // Method honk() milik Vehicle.
    // Semua class yang mewarisi Vehicle juga dapat menggunakan method ini.
    void honk() {
        cout << "Tuut, tuut! \n";
    }
};

// Derived class / child class
// Car mewarisi semua atribut dan method public dari Vehicle.
class Car : public Vehicle {
public:
    // Atribut khusus milik class Car.
    string model = "Mustang";
};

int main() {
    // Membuat object myCar dari class Car.
    Car myCar;

    // Memanggil method honk() dari class Vehicle.
    // Walaupun honk() tidak ditulis ulang di class Car,
    // myCar tetap bisa menggunakannya karena Car mewarisi Vehicle.
    myCar.honk();

    // brand berasal dari class Vehicle.
    // model berasal dari class Car.
    // Keduanya dapat digunakan oleh object myCar.
    cout << myCar.brand + " " + myCar.model;

    return 0;
}