#include <iostream>
using namespace std;

double do_conversion(double);

int main()
{
  double input;
  cout << "Enter the number of light years: ";
  cin >> input;

  double converted;
  converted = do_conversion(input);

  cout << input << " light years = ";
  cout << converted << " astronomical units" << endl;
}

double do_conversion(double input)
{
  return (input * 63240);
}
