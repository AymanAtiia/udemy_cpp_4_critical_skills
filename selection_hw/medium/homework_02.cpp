#include<iostream>

using namespace std;

// I solved using loops
int main()
{
  int N, a, res;
  res = -100000;
  cin>>N;
  
  for(int i=0;i<N;++i)
  {
    cin>>a;
    if(a>res)
      res = a;
  }
  cout<<res<<endl;
  return 0;
}
