#include <iostream>

using namespace std;

bool bigger_or_equal_num(int* array, int length, int num) {
  for (int i = 0; i < length; ++i) {
    if (array[i] >= num) {
      return true;
    }
  }
  return false;
}

/**
 * Create a function that decides if there is a bigger or equal number than a given number in an array
 * It should take the array, it's length and a number as a parameter, then return a boolean
 */

int main() {
  int array[] = {3, 2, 4, 6, -1};
  int number = 7;
  if (bigger_or_equal_num(array, 5, number)) {
    cout << "There\'s a bigger or equal number as " << number << " in the array." << endl;
  } else {
    cout << "There\'s no bigger or equal number as " << number << " in the array." << endl;
  }
  return 0;
}
