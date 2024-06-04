#include<iostream>
// Problem : Array maximum
using namespace std;
int arr_max(int arr[], int len)
{
  static int ind = 0;
  if(ind == len-1) {return arr[len - 1];}
  int first = arr[ind];
  ++ind;
  return max(first, arr_max(arr , len));
}

int main()
{
  int in_arr[100] = {0};
  int len;
  cin>>len;
  for(int i=0;i<len;++i) {cin>>in_arr[i];}
  
  cout<<arr_max(in_arr,len)<<endl;
  return 0;
}
