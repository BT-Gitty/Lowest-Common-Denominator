#include "functions.hpp"

int numOfNum;


int gcd(int x, int y) {
   if (y == 0)
   return x;
   return gcd(y, x % y);  //Naturally loops until y becomes a value between 0 and 1, which becomes 0 because the data type is int.
}


int lcd(int x, int y){
  return (x * y)/gcd(x, y);  //Formula to find lcd of any two numbers.
}


int* inputNums(){
  std::cout << "How many numbers would you like to find the lcd of?\n";
  std::cin >> numOfNum;
  
  int* numList = new int[numOfNum];
  std::cout << "Enter " << numOfNum << " numbers.\n";

  for (int i = 0; i < numOfNum; i++){
    std::cin >> numList[i];
    std::cout << "You entered " << numList[i] << ".\n";
  }
  std::cout << "You have entered " << numOfNum << " numbers.\n";

  return numList;
}


int findCommonDenominator(int* numList){
  int finalLCD = lcd(numList[0], numList[1]);  //Finds lcd of first two numbers.
  //Finds the lcd of the value above and the third number. Repeats with the new value and the next number.
  for (int i=2; i < numOfNum; i++)
    finalLCD = lcd(numList[i], finalLCD);
  return finalLCD;
}
