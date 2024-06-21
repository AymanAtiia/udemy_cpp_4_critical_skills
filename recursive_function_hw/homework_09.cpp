#include<iostream>
/*
Problem : Given array, change each element at position i to be the maximum of
numbers from index i to end of array
E.g. input 1 3 5 7 4 2 ⇒ [7, 7, 7, 7, 4, 2]
Void right_max(int arr[], int len, int start_position = 0);
*/

using namespace std;
void right_max(int arr[], int len, int start)
{

  if (start == len-1) {return;}
  right_max(arr, len, start+1);
  arr[start] = max(arr[start], arr[start+1]);
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
