#include<iostream>
// Problem : Array accumelate
using namespace std;
void accumelate_arr(int arr[], int len)
{
  if (len == 0) {return;}
  accumelate_arr(arr, len-1);
  arr[len-1] += arr[len-2];
}
// 1 2 3 4 5
int main()
{
  int in_arr[100] = {0};
  int len;
  cin>>len;
  for(int i=0;i<len;++i) {cin>>in_arr[i];}
  accumelate_arr(in_arr,len);
  for(int i=0;i<len;++i) {cout<<in_arr[i]<<" ";}
  cout<<endl;
  return 0;
}
