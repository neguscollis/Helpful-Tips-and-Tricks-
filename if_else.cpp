//Created by Negus Collis on September 16, 2021

#include <iostream>
using namespace std;





//If else practice
//Check to see if a triangle is either a equilateral, isosceles, or scalene


int main () {


  float side1, side2, side3; // varibles to hold the length of the triangle

  cout << "Enter the length of the Triangle sides: ";// message to the user

  cin >> side1 >> side2 >> side3; //User's input

  if (side1 == side2 && side2 == side3)//checking to see if the sides of the triangle are the same
  {
     cout << "The triangle is a equilateral triangle." << endl;//message to the User
  }
  else if (side1 == side2 || side2 == side3 || side1 == side3)//checking to see if the sides of the triangles have a least two sides are the same
  {
    cout << "The triangle is a isosceles triangle."<< endl;//message to the User
  }
  else {
    cout << "The triangle is a scalene triangle." << endl;//message to the User

  }


  return 0;
}
