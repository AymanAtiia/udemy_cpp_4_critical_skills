#include<iostream>

using namespace std;
// assume positive input
int main()
{
  int n;
  char c;
  cin>>n>>c;
  while (n>0) {cout<<c;--n;}
  cout<<"\n";
  return 0;
}
