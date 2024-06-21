#include<iostream>
/*
Problem : prefix sum
Write a function that sums only the first N elements in an array.
Define its signature
Input [1, 3, 4, 6, 7], 3 ⇒ 8 (1+3+4)
*/

using namespace std;

int prefix_sum(int arr[], int len, int pos)
{
  if(pos == 0) {return 0;}
  return arr[pos-1] + prefix_sum(arr, len-1, pos-1);
}
int main()
{
  int n;
  cin>>n;
  int arr[50] = {0};
  for(int i=0;i<n;++i) {cin>>arr[i];}
  
  // for(int i=0;i<n;++i) {cout<<arr[i]<<" ";}
  cout<<prefix_sum(arr,n,4)<<endl;
  return 0;
}
