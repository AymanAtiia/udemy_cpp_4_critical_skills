#include<iostream>

using namespace std;
// instructor's solution is a lot better.
int main()
{
  int n;
  cin>>n;
  int a,b;
  for(int i=0;i<=n/2;++i)
  {
    a = i;
    b = n-i-1;
    for (int j=0;j<n;++j)
    {
      if(j==a || j== b) {cout<<"*";}
      else {cout<<" ";}
    }
    cout<<endl;
  }
  
  for(int i=(n/2)-1;i>=0;--i)
  {
    a = i;
    b = n-i-1;
    for (int j=0;j<n;++j)
    {
      if(j==a || j== b) {cout<<"*";}
      else {cout<<" ";}
    }
    cout<<endl;
  }
  return 0;
}
