#include<iostream>

using namespace std;

int main()
{
  int x, a, b, c, d, e;
  cin>>x;
  cin>>a>>b>>c>>d>>e;
  
  int count = 0;
  if (a>x) {count +=1;}
  if (b>x) {count +=1;}
  if (c>x) {count +=1;}
  if (d>x) {count +=1;}
  if (e>x) {count +=1;}
  cout<<5-count<<endl;
  cout<<count<<endl;
  return 0;
}
