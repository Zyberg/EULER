#include <iostream>
#include <cmath>

using namespace std;

void eratosthene(int nth) {
  //Compute the upper boundary
  const int UPPER = floor(nth * log(nth) + nth * log(log(nth)));
  //Compute the sqrt of the upper boundary
  const int UPPER_SQRT = (int)sqrt((double) UPPER);
  //Allocate space for the sieve
  bool *isComposite = new bool[(UPPER + 1) * sizeof(bool)];
  
  //Constructing the sieve
  for (int m = 2; m <= UPPER_SQRT; m++) {
    if (!isComposite[m]) {
      for (int k = m * m; k <= UPPER; k += m)
        isComposite[k] = true;
    }
  }

  //Counting the primes
  int counter = 0, i = 2;
  while (counter < nth) {
    if(!isComposite[i]) {
      counter++;
    }
    i++;
  }

  //Outputing the nth prime
  cout << i - 1 << endl;

  delete [] isComposite;
}

int main() {
  eratosthene(10001);
  return 0;
}
