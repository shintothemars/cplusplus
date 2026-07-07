#include <iostream>
#include <string>
using namespace std;


struct Student {
   string name;
   int age;
   float gpa;
};

Student s1 = {"Budi", 20, 3.8};

int main() {
   cout << s1.name << "\n ";
   cout << s1.age << " ";
   return 0;
}
