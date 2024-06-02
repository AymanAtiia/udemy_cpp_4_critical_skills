#include<iostream>
/*
Problem : Write a function that reads 6 numbers and compute their maximum.
*/

using namespace std;
int max(int a, int b, int c)
{
  int max_ = a;
  if(b>max_) {max_ = b;}
  if(c>b) {max_ = c;}
  return max_;
}

int max(int a, int b, int c, int d)
{
  int max_ = max(a,b,c);
  if(d>max_) {max_ = d;}
  return max_;
}

int max(int a, int b, int c, int d, int e)
{
  int max_ = max(a,b,c);
  return max(max_, d, e);
}

int max(int a, int b, int c, int d, int e, int f)
{
  int max_ = max(a,b,c,d);
  return max(max_, e, f);
}


int main()
{
  cout<<max(1,2,3)<<endl;
  cout<<max(1,2,3,4)<<endl;
  cout<<max(1,2,3,4,5)<<endl;
  cout<<max(1,2,3,4,5,6)<<endl;
  return 0;
}
