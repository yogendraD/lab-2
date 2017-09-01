#include <iostream>

using namespace std;

int main()
{   double x;
    cout << "enter the centimeter value you want to convert" << endl;
    cin>>x;
    double meter=x/100;
    double kilometer=x/100000;

    cout << "the converted value in meters is="<<meter<<endl;
    cout <<"the converted value in kilometers is="<<kilometer<<endl;

    return 0;
}
