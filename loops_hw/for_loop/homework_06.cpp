#include<iostream>

using namespace std;

int main()
{
  int n, a, b;
  int digit, temp;
  int res = 0;
  cin>>n>>a>>b;
  
  for (int i=1;i<=n;++i)
  {
    temp = i;
    digit = 0;
    while(temp>0)
    {
      digit += temp%10;
      temp = temp/10;
    }
    if (digit>=a && digit<=b) {res+=i;}
  }
  
  cout<<res<<endl;
    
  return 0;
}
