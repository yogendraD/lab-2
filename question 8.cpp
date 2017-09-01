#include <iostream>

using namespace std;

int main()
{ double b,h;
  cout << "enter the height of triangle"<<endl;
  cin>> h;
  cout <<"enter the base of triangle"<<endl;
  cin>>b;

  double area=0.5*(b*h);
  cout<<"the required area of triangle is"<<area<<endl;

  return 0;
}
