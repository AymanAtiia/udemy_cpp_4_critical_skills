#include<iostream>

using namespace std;

int main()
{
  int n;
  int in_arr[200] = {0};
  cin>>n;
  
  for (int i=0;i<n;++i){cin>>in_arr[i];}
  
  int prev = in_arr[0];
  bool inc = true;
  
  for (int i=1;i<n;++i)
  {
    if(in_arr[i]>=prev) {prev = in_arr[i];}
    else {inc = false; break;}
  }
  
  if (inc) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
