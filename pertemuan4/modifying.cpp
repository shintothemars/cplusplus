#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Create a vector called numbers that will store 6 integers
  vector<int> numbers(6);
  
  // Fill all elements in the numbers vector with the value 35
  fill(numbers.begin(), numbers.end(), 35); 

  // Print all elements in the vector
  for (int num : numbers) {
    cout << num << "\n";
  }
  
  return 0;
}
