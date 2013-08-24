#include <iostream>
using namespace std;
const float SEC_IN_ARC = 60;
int main()
{
  cout << "Enter a latitude in degres, minutes, and seconds:" << endl;
  cout << "First, enter the degrees: __\b\b";
  float degrees;
  cin >> degrees;
  cout << "Next, ener the minutes of arc: __\b\b";
  float minutes;
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: __\b\b";
  float seconds;
  cin >> seconds;
  float result;
  result = degrees + 
    (minutes / SEC_IN_ARC) + 
    (seconds / SEC_IN_ARC / SEC_IN_ARC);
  cout << degrees << " degrees "
    << minutes << " minutes "
    << seconds << " seconds = "
    << result << " degrees";
}
