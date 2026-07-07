#include <iostream>
using namespace std;

int main()
{
   int n = 3; //Membuat variabel bilangan bulat bernama n dengan nilai 3.
   char c = 'C'; //Membuat variabel karakter bernama c dengan nilai 'C'.

   // Convert char data type into integer
   cout << (int)c << endl; //(int)c artinya mengubah karakter c menjadi nilai integer-nya.
  
   //Huruf besar 'C' memiliki kode ASCII 67
   
   int sum = n + c; 
   cout << sum;
   return 0;
}
