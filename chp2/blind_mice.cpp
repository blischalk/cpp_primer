#include <iostream>
using namespace std;

void line1(void);
void line2(void);

int main()
{
  line1();
  line1();
  line2();
  line2();
}

void line1()
{
  cout << "Three blind mice." << endl;
}

void line2()
{
  cout << "See how they run." << endl;
}
