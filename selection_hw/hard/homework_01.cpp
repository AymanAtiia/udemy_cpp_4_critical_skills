#include<iostream>

using namespace std;

int main()
{
  int x, s1, e1, s2, e2, s3, e3;
  int interval_cnt = 0;
  cin>>x;
  cin>>s1>>e1>>s2>>e2>>s3>>e3;
  if (x>=s1 && x<=e1) {interval_cnt += 1;}
  if (x>=s2 && x<=e2) {interval_cnt += 1;}
  if (x>=s3 && x<=e3) {interval_cnt += 1;}
  cout<<interval_cnt<<endl;
  return 0;
}
