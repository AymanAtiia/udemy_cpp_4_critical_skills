#include<iostream>

using namespace std;
// assume positive input
int main()
{
  int x, y;
  cin>>x>>y;
  int num = x;
  while (num>=x && num<=y) {cout<<num<<endl; ++num;}
  return 0;
}
