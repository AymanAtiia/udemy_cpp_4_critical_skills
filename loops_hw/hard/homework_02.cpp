#include<iostream>

using namespace std;
// instructor's solution is a lot better.
int main()
{
  int n,digits = 0;
  cin>>n;
  int temp = n;
  int coef, res=0;
  
  while(temp>0)
  {
    temp = temp /10;
    ++digits;
  }
  // cout<<digits<<endl;
  
  while(digits>0)
  {
    
    coef = 1;
    temp = digits;
    while(temp>1) {coef *= 10; --temp;}
    res += (n%10)*coef;
    n = n/10;
    --digits;
  }
  cout<<res<<" "<<res*3<<endl;
  return 0;
}
