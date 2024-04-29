#include<iostream>

using namespace std;


int main()
{
  int n;
  cin>>n;
  cout<<((n%2)*7 + ((n+1)%2)*100)<<endl;
  return 0;
}
