#include<iostream>

using namespace std;

int main()
{
  int t;
  cin>>t;
  int n, x;
  while(t>0)
  {
    int c = 10000000;
    cin>>n;
    while(n>0)
    {
      cin>>x;
      if (x<c) {c = x;}
      --n;
    }
    cout<<c<<endl;
    --t;
  }
  return 0;
}
