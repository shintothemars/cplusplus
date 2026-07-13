#include <iostream>
using namespace std;

// Membuat class bernama Employee
class Employee {
private:
    // salary adalah data gaji.
    // private artinya data ini tidak boleh diakses langsung dari main().
    int salary;

public:
    // Setter adalah function untuk mengisi atau mengubah nilai salary.
    // Parameter s menerima nilai gaji dari luar class.
    void setSalary(int s) {
        salary = s; // Menyimpan nilai s ke variabel salary
    }

    // Getter adalah function untuk mengambil atau melihat nilai salary.
    int getSalary() {
        return salary; // Mengembalikan nilai salary ke pemanggil function
    }
};

int main() {
    // Membuat object bernama myObj dari class Employee
    Employee myObj;

    // Mengisi salary melalui setter.
    // Tidak bisa menulis: myObj.salary = 50000;
    // karena salary bersifat private.
    myObj.setSalary(50000);

    // Mengambil nilai salary melalui getter,
    // lalu menampilkannya ke layar.
    cout << myObj.getSalary();

    return 0;
}