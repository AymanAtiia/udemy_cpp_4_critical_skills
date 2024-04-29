#include<iostream>
using namespace std;

int main()
{
  int n, ls_3, first, second, third;
  cin>>n;
  ls_3 = (n%1000);
  first = (ls_3%10);
  second = (ls_3%100)/10;
  third = (ls_3%1000)/100;
  cout<<(first+second+third)<<endl;
  return 0;
}
