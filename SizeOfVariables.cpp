//Created Negus Collis September-5-2021
//How to check the size of Variables

#include <iostream>
using namespace std;





//All variables has a certain amount of space it takes on your computer
//Also int's, Unsigned int's, and UInt has a max number you could use


int main () {


  cout << "Size of int is " << sizeof(int) << " bytes\n";

  cout << "Int min value is  " << INT_MIN << " bytes\n";

  cout << "Int Max value is  " << INT_MAX << " bytes\n";

  cout << "Size of unsigned int is " << sizeof(unsigned int) << " bytes\n";

  cout << "UInt max value is  " << UINT_MAX << " bytes\n";

  cout << "Size of bool is " << sizeof(bool) << " bytes\n";

  cout << "Size of char is " << sizeof(char) << " bytes\n";

  cout << "Size of float is " << sizeof(float) << " bytes\n";

  cout << "Size of double is " << sizeof(double) << " bytes\n";


  return 0;
}
