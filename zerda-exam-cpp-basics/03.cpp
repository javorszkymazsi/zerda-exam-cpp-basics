#include <iostream>

using namespace std;

float float_multiplier(float* p, float num) {
  *p *= num;
  return *p;
}

/**
 * Create a function that takes a pointer to a float and a float, then it should
 * multiply the value of the pointer with the given float and save the result
 * where the pointer points.
 * Please multiply the total variable by 5 with it.
 */

int main() {
  float total = 123;
  float* p = &total;
  cout << "float total\'s value of " << total;
  float_multiplier(p, 5);
  cout << " has been changed to " << total << "." <<endl;
  return 0;
}
