#include <iostream>
using namespace std;
int main()
{
  const int INCHES_IN_FOOT = 12;
  const float METER_FACTOR = 0.0254;
  const float KILOGRAM_FACTOR = 2.2;
  cout << "Enter your height in Feet and Inches." << endl;
  cout << "Feet:__\b\b";
  int feet;
  cin >> feet;
  cout << "Inches:__\b\b";
  int inches;
  cin >> inches;
  cout << "Please enter your weight in pounds." << endl;
  cout << "Weight:___\b\b\b";
  int weight;
  cin >> weight;
  int height_in_inches = (feet * INCHES_IN_FOOT) + inches;
  float height_in_meters = height_in_inches * METER_FACTOR;
  float mass_in_kilograms = weight / KILOGRAM_FACTOR;
  cout << "Your BMI is " 
    << (mass_in_kilograms / (height_in_meters * height_in_meters))
    << endl;

}
