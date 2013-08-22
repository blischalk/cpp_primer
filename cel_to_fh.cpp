#include <iostream>
using namespace std;

int prompt_user(void);
void display_conversion(int);

int main()
{
  display_conversion(prompt_user());
}

int prompt_user()
{
  cout << "Please enter a Celsius value: ";
  int response;
  cin >> response;
  return response;
}

void display_conversion(int celsius_val)
{
  cout << celsius_val;
  cout << " degrees Celsius is ";
  cout << (celsius_val * 1.8) + 32.0;
  cout << " Fahrenheit." << endl;
}
