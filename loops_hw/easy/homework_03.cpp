#include<iostream>

using namespace std;

int main()
{
  int n;
  int x =1, y;
  cin>>n;
  
  while(x<=n) 
  {
    y=x;
    while(y>0) {cout<<"*"; --y;}
    cout<<endl;
    ++x;
  }
  return 0;
}
