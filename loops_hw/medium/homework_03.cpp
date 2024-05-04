#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int x = 0, y = 0;
  while (x<n)
  {
    if( (y%3 == 0) && !(y%4 == 0)) {cout<<y<<" ";++x;}
    ++y;
  }
  cout<<endl;
  return 0;
}
