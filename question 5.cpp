#include <iostream>
#include <math.h>

using namespace std;

int main()
{ double x,y;
  cout<<"enter the number whose power is to be raised"<<endl;
  cin>>x;
  cout<<"enter the power you want to raise"<<endl;
  cin>>y;
  double z=pow(x,y);
  cout <<"the required number is="<<z<<endl;
  return 0;
}
