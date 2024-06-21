#include<iostream>
/*
Problem : is palindrome
Implement a function that decides if array is palindrome or not
Define its signature
*/

using namespace std;

bool is_palindrome(int arr[], int len, int pos)
{
  if(pos == len/2) {return true;}
  return (arr[pos] == arr[len-pos-1]) && is_palindrome(arr, len, pos+1);
}
int main()
{
  int n;
  cin>>n;
  int arr[50] = {0};
  for(int i=0;i<n;++i) {cin>>arr[i];}
  
  // for(int i=0;i<n;++i) {cout<<arr[i]<<" ";}
  bool res = is_palindrome(arr,n,0);
  if(res) {cout<<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
