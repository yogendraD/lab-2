#include <iostream>

using namespace std;

int main()
{ double x,y;
  cout << "enter the first angle"<<endl;
  cin>>x;
  cout << "enter the second angle"<<endl;
  cin >>y;

  double z=180-(x+y);
  cout<<"the third angle of triangle is="<<z<<endl;
  return 0;
}
