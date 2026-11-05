#include <cstdint>
#include <iostream>
using namespace std;

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */

uint16_t factorial(const uint16_t x) {
  uint16_t result = 1;

  for (uint16_t i = 1; i <= x; i++) {
    result = result * i;
  }

  return result;
}

/*
 * *** STUDENTS SHOULD WRITE CODE FOR THIS FUNCTION ***
 */
int main() {
  int n, k;

  // get and validate user input
  cout << "Enter n: ";
  cin >> n;
  cout << "Enter k: ";
  cin >> k;

  if (n <= 0 || k <= 0 || k > n) {
    cout << -1 << endl;
    return 0;
  }

  // calculate C(n,k) = n! / (k! * (n-k)!)

  uint16_t nFact = factorial(n);
  uint16_t kFact = factorial(k);
  uint16_t diffFact = factorial(n - k);

  uint16_t result = nFact / (kFact * diffFact);

  cout << "result = " << result << endl;

  return 0;
}