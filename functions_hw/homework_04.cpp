#include<iostream>
/*
Problem : Read N, then N integers for an Array. Call a function with the array to check if the array is palindrome or not
*/
using namespace std;

bool is_palindrome(int arr[], int n)
{
  int value = 0;
  bool pal = true;
  for (int i=0;i<n/2;++i) 
    {
      value = arr[n-i-1];
      
      if(!(value == arr[i])) { pal = false;}
      }
  
  return pal;
}


int main()
{
  int n;
  int in_arr[1000] = {0};
  cin>>n;
  for (int i=0;i<n;++i) {cin>>in_arr[i];}
  
  if (is_palindrome(in_arr, n)) {cout <<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  return 0;
}
