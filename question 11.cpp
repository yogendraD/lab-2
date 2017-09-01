#include <iostream>
#include <math.h>

using namespace std;

int main()
{ double p,t,r;
  cout<<"enter the principle amount"<<endl;
  cin>>p;
  cout<<"enter the rate"<<endl;
  cin>>r;
  cout<<"enter the time in years"<<endl;
  cin>>t;

  double interest=(p*t*r)/100;
  cout <<"the simple interest is="<<interest<<endl;
  return 0;
}
