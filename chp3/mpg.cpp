#include <iostream>
using namespace std;
int main()
{
  cout << "Enter miles driven:__\b\b";
  int miles;
  cin >> miles;
  cout << "Enter gallons of gas used:__\b\b";
  int gallons;
  cin >> gallons;
  float mpg = miles / gallons;
  cout << "You are getting " << mpg << "mpg" << endl;
}
