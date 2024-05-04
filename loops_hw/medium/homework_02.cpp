#include<iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int x = 0;
  while (x<n)
  {
    if( (x%8 == 0) || ((x%4 == 0) && (x%3 == 0)) ) {cout<<x<<" ";}
    ++x;
  }
  cout<<endl;
  return 0;
}
