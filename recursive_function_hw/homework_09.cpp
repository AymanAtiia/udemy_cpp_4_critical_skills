#include<iostream>
/*
Problem : Given array, change each element at position i to be the maximum of
numbers from i to end of array.
*/

using namespace std;
void right_max(int arr[], int len, int start)
{
  if (len == 0) {return;}
  right_max(arr, len-1 , start+1);
  arr[len] = max(arr[len], arr[len+1]);
}

int main()
{
  int in_arr[100] = {0};
  int len;
  cin>>len;
  for(int i=0;i<len;++i) {cin>>in_arr[i];}
  right_max(in_arr,len,0);
  for(int i=0;i<len;++i) {cout<<in_arr[i]<<" ";}
  cout<<endl;
  return 0;
}
