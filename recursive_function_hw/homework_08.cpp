#include<iostream>
/*
Problem : Given array, change each element at position i to be the maximum of
numbers from 0 to index i
*/

using namespace std;
void left_max(int arr[], int len)
{
  if (len == 0) {return;}
  left_max(arr, len-1);
  arr[len-1] = max(arr[len-2],arr[len-1]);
}

int main()
{
  int in_arr[100] = {0};
  int len;
  cin>>len;
  for(int i=0;i<len;++i) {cin>>in_arr[i];}
  left_max(in_arr,len);
  for(int i=0;i<len;++i) {cout<<in_arr[i]<<" ";}
  cout<<endl;
  return 0;
}
