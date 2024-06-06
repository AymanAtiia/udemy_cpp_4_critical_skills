#include<iostream>
// Problem : Array increment
using namespace std;
void increment_arr(int arr[], int len)
{
  if (len == 0) {return;}
  increment_arr(arr, len-1);
  arr[len-1] += len-1;
}

int main()
{
  int in_arr[100] = {0};
  int len;
  cin>>len;
  for(int i=0;i<len;++i) {cin>>in_arr[i];}
  increment_arr(in_arr,len);
  for(int i=0;i<len;++i) {cout<<in_arr[i]<<" ";}
  cout<<endl;
  return 0;
}
