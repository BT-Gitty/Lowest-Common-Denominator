#include "functions.hpp"

int main() {
  int finalLCD;
  finalLCD = findCommonDenominator(inputNums());
  std::cout << "The least common denominator for these numbers is " << finalLCD <<".\n";
  return 0;
}