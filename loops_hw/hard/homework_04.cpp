#include<iostream>
using namespace std;

int main()
{
  int t, n, x;
  int cnt, res = 0;
  int temp, i;
  cin>>t;
  while(t>0)
  {
    cin>>n;
    cnt = 0;
    res = 0;
    while(n>0)
    {
      cin>>x;
      ++cnt;
      temp = 1;
      i = cnt;
      while(i>=1) {temp *= x; --i;}
      res += temp;
      --n;
    }
    cout<<res<<endl;
    --t;
  }
  return 0;
}
