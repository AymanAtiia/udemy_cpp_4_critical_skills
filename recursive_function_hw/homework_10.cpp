#include<iostream>
/*
Problem : suffix sum
Write a function that sums only the last N elements in an array.
Define its signature
Input [1, 3, 4, 6, 7], 3 ⇒ 17 (4+6+7)
*/

using namespace std;

int suffix_sum(int arr[], int len, int pos)
{
  if(pos == 0) {return 0;}
  return arr[len-1] + suffix_sum(arr, len-1, pos-1);
}
int main()
{
  int n;
  cin>>n;
  int arr[50] = {0};
  for(int i=0;i<n;++i) {cin>>arr[i];}
  
  // for(int i=0;i<n;++i) {cout<<arr[i]<<" ";}
  cout<<suffix_sum(arr,n,3)<<endl;
  return 0;
}
