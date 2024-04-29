#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  // using %2
  cout<<!(n%2)<<endl;
  // using /2
  cout<<((n/2)-(n/2.0)==0)<<endl;
  // using %10
  int last_digit = n%10;
  cout<<(last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8)<<endl;
  return 0;
}
