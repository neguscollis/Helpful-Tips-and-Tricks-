//Created Negus Collis September-16-2021

#include <iostream>
using namespace std;





//Check to see if a number is a even number


int main () {


  int number1; //the varible to hold the number to be checked

  cout << "Please enter a number: "; // message to the user

  cin >> number1; // the number going into the varible




  if (number1 % 2 == 0) //checking to see if the remainder is 0 which means it's a even number
  {

    cout << "The number is a even number." << endl; // message to te user
  }
  else
  {

    cout << "The number is a odd number." << endl;// message to te user
  }

    cout << "Thank you have a great day!!" << endl;// message to te user




  return 0;
}
