#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main() {

  // COMPARISON OPERATORS
  // == != > < >= <=

  // LOGICAL OPERATORS
  // && || !


  // IF, ELSE IF, ELSE
  int age = 70;
  int ageAtLastExam = 16;
  bool isNotIntoxicated = true;

  if ((age >= 1) && (age < 16)) {
    cout << "You can't drive." << endl;
  } else if (! isNotIntoxicated) {
    cout << "You can't drive." << endl;
  } else if (age >= 80 && ((age > 100) || ((age - ageAtLastExam) > 5))) {
    cout << "You can't drive." << endl;
  } else {
    cout << "You can drive." << endl;
  }


  // SWITCHES
  int greetingOption = 2;
  switch(greetingOption) {
    case 1:
      cout << "bonjour" << endl;
      break;
    case 2:
      cout << "hola" << endl;
      break;
    case 3:
      cout << "Hallo" << endl;
      break;
    default:
      cout << "Hello" << endl;
  }

  // TERNARY OPERATOR


  return 0;
}