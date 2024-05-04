#include<iostream>

using namespace std;

int main()
{
  int n;
  int y;
  cin>>n;
  
  while(n>0) 
  {
    y=n;
    while(y>0) {cout<<"*"; --y;}
    cout<<endl;
    --n;
  }
  return 0;
}
