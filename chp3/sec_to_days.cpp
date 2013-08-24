#include <iostream>
using namespace std;
int main()
{
  cout << "Enter some seconds as an integer:__\b\b";
  int input_seconds;
  cin >> input_seconds;

  const int HOURS_IN_DAY = 24;
  const int MINUTES_IN_HOUR = 60;
  const int SECONDS_IN_MINUTE = 60;

  int days = 0;
  int hours = 0;
  int minutes = 0;
  int seconds = 0;

  int i;
  for (i = 0; i < input_seconds; i++) {
    seconds++;
    if (seconds == SECONDS_IN_MINUTE) {
      seconds = 0;
      minutes++;
      if (minutes == MINUTES_IN_HOUR) {
        minutes = 0;
        hours++;
        if (hours == HOURS_IN_DAY) {
          hours = 0;
          days++;
        }
      }
    }
  }

  cout << input_seconds << " seconds = "
    << days << " days, "
    << hours << " hours, "
    << minutes << " minutes, "
    << seconds << " seconds";
}
