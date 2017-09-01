#include <iostream>

using namespace std;

int main()
{  double C;
   cout << "please enter temperature in celcius"<< endl;
   cin>> C;
   double fahrenheit=(9*(C/5)+32);

   cout << "converted temperature in Fahrenheit is="<<fahrenheit<<endl;

    return 0;
}
