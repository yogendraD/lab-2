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

  double x=1+(r/100);
  double y=pow(x,t);
  double interest=p*y;
  cout <<"the compound interest is="<<interest<<endl;
  return 0;
}
