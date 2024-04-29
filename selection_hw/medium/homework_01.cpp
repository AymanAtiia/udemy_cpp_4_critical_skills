#include<iostream>

using namespace std;

int main()
{
  int a, res;
  res = -100000;
  
  for(int i=0;i<10;++i)
    cin>>a;
    if(a>res)
      res = a;
  cout<<res<<endl;
  return 0;
}
