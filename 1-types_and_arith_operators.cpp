// Single line comment

/*
Multi-line comment
*/

#include <iostream> // I/O
#include <vector> // Vector operations
#include <string> // String operations
#include <fstream> // Filestream

using namespace std;

int main() { // this is the main function that runs when the file is called
  // std::cout // namespacing makes this unneccessary
  cout << "This line includes a carraige return." << endl; // semicolons are required to end a statement
  cout << "Hello World!" << endl;

  // PRIMITIVE DATA TYPES
  const double PI = 3.1415926535;
  char myGrade = 'A';
  bool isHappy = true;
  int myAge = 31;
  float favNum = 3.141592; // precise to 8 places
  double otherFavNum = 1.6180339887112349; // precise to 16 places

  cout << "Favorite Number: " << favNum << endl; // using vars int cout

  // Other types include
  // short int: At least 16 bits
  // long int: At least 32 bits
  // long long int: At least 64 bits
  // unsigned int: same size as signed version
  // long double: not less than double

  // print the size in bytes of a symbol
  cout << "Size of int: " << sizeof(myAge) << " bytes" << endl; // 4 B
  cout << "Size of char: " << sizeof(myGrade) << " bytes" << endl; // 1 B
  cout << "Size of bool: " << sizeof(isHappy) << " bytes" << endl; // 1 B
  cout << "Size of float: " << sizeof(favNum) << " bytes" << endl; // 4 B
  cout << "Size of double: " << sizeof(otherFavNum) << " bytes" << endl; // 8 B

  int largestInt = 2147483647; // Largest int possible. Incrementing by one results in a negative number.

  // ARITHMETIC OPERATORS
  cout << "5 + 2 = " <<  5 + 2 << endl; // 7
  cout << "5 - 2 = " << 5 - 2 << endl; // 3
  cout << "5 * 2 = " << 5 * 2 << endl; // 10
  cout << "5 / 2 + " << 5 / 2 << endl; // 2 (note that the remainder is dropped)
  cout << "5 % 2 = " << 5 % 2 << endl; // 1 (remainder only)

  // INCREMENT, DECREMENT
  int five = 5;
  cout << "5++ = " << five++ << endl; // 5
  cout << "++5 = " << ++five << endl; // 7
  cout << "5-- = " << five-- << endl; // 7
  cout << "--5 = " << --five << endl; // 5

  five += 6;
  five = five + 6; // These two assignment statements are equivalent.

  // ORDER OF OPERATIONS
  // parens, exp, mult, div, add, sub executed in order.
  cout << "1 + 2 - 3 * 2 = " << 1 + 2 - 3 * 2 << endl; // -3
  cout << "(1 + 2 - 3) * 2 = " << (1 + 2 - 3) * 2 << endl; // 0

  // CASTING (NECESSARY FOR ACCURACY)
  cout << "4 / 5 = " << 4 / 5 << endl; // 0
  cout << "4 / 5 = " << (float) 4 / 5 << endl; // 0.8 because the (float) casts 4 as a float
  // cout << "4 / 5 = " <<  4 / (float) 5 << endl; // 0.8 Note that this also works... suspect that an operation defaults to the most precise data type involved.
  // cout << "4 / 5 = " << (char) 4 / 5 << endl; // Other types (0)
  // cout << "4 / 5 = " << (double) 4 / 5 << endl; // Other types (0.8)

  return 0; // Must return from the main function.

}
