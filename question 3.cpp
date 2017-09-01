#include <iostream>

using namespace std;

int main()
{  double F;
   cout << "please enter temperature in Fahrenheit"<< endl;
   cin>> F;
   double celsius=(((F-32)*5)/9);

   cout << "converted temperature in celsius is="<<celsius<<endl;

    return 0;
}
