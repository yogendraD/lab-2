#include <iostream>

using namespace std;

int main()
{ double d;
  cout << "enter the number of days you want to convert"<<endl;
  cin>>d;
  double weeks=d/7;
  double days=d;
  double years=d/365;
  cout <<"number of weeks are="<<weeks<<endl;
  cout<<"number of days are="<<days<<endl;
  cout <<"number of years are="<<years<<endl;
  return 0;
}
