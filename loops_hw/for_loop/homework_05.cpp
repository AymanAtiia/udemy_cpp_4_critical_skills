#include<iostream>

using namespace std;

int main()
{
  int n;
  bool pr = true;
  cin>>n;
  
  
  for(int i=2;i<=n;++i)
  {
    for(int j=2;j<i;++j)
    {
      if(i%j==0) {pr = false;break;}
    }
    
    if(pr && i>2){cout<<",";}
    
    if(pr) {cout<<i;}
    pr = true;
  }
  cout<<endl;
  return 0;
}
