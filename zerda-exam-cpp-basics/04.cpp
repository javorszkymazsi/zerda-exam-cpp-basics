#include <iostream>

using namespace std;

int how_many_divisors(int num) {
  int divs = 0;
  for (int i = 1; i <= num; ++i) {
    if (num % i == 0) {
      divs += 1;
    }
  }
  return divs;
}

/**
 * Create a function that takes an integer and returns how many divisors it has
 */

int main() {
  int num = 32;
  cout << num << " has " << how_many_divisors(num) << " divisors." << endl;
  return 0;
}
