#include <iostream>
using namespace std;
int main()
{
  const int INCHES_IN_FEET = 12;
  cout << "Please enter your height in inches.___\b\b\b";
  int inches;
  cin >> inches;
  cout << "Your height is " << (inches / INCHES_IN_FEET)
    << " Feet, " << (inches % INCHES_IN_FEET) << " Inches" << endl;
}
