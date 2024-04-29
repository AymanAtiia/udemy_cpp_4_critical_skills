#include<iostream>
using namespace std;

int main()
{
  float a, b, c, d, e;
  float A,B,C;
  
  cin>>a>>b>>c>>d>>e;
  A = (a+b+c+d+e)/5.0;
  cout<<A<<endl;
  B = (a+b+c)/(d+e);
  cout<<B<<endl;
  C = ((a+b+c)/3.0)/((d+e)/2.0);
  cout<<C<<endl;
  // C is (2/3)* B
  cout<<(C/B)<<endl;
  return 0;
}
