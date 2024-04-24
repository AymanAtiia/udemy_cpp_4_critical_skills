#include<iostream>
using namespace std;

int main()
{
  int a,b,c;
  
  cin>>a>>b>>c;
  
  cout<<"num1 : "<<a<<" num2 : "<<b<<" num3 : "<<c<<endl;
  
  int temp;
  temp = a;
  a = c;
  c = temp;
  
  temp = b;
  b = a;
  a = temp;
  
  cout<<"num1 : "<<a<<" num2 : "<<b<<" num3 : "<<c<<endl;
  return 0;
}
