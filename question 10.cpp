#include <iostream>

using namespace std;

int main()
{ double a,b,c,d,e;
  cout<<"enter marks of 1st subject out of 80"<<endl;
  cin>>a;
  cout<<"enter marks of 2nd subject out of 80"<<endl;
  cin>>b;
  cout<<"enter marks of 3rd subject out of 80"<<endl;
  cin>>c;
  cout<<"enter marks of 4th subject out of 80"<<endl;
  cin>>d;
  cout<<"enter marks of 5th subject out of 80"<<endl;
  cin>>e;

  double total=a+b+c+d+e;
  double average=total/5;
  double percentage=(total/400)*100;
  cout<<"total marks obtained are="<<total<<endl;
  cout<<"average marks="<<average<<endl;
  cout<<"percentage of marks="<<percentage<<endl;
  return 0;
}
