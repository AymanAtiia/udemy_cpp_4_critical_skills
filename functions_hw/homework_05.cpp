#include<iostream>
/*
Implement this function
void set_powers(int arr[], int len = 5, int m = 2)
This function will fill the array of len as following:

The i-th position: m^i, e.g. m * m * m … i times
E.g. for len = 6, m = 2 ⇒ 1 2 4 8 16 32
E.g. for len = 4, m = 3 ⇒ 1 3 9 27
After a return from call: print the array
*/
using namespace std;

void set_powers(int arr[], int n, int m)
{
  
  for(int i=0;i<n;++i) 
  {
    int p = i;
    int c = 1;
    while(p--) {c *= m;}
    arr[i] = c;
  }
}


int main()
{
  int n, m;
  cin>>n>>m;
  int in_arr[100] = {0};
  set_powers(in_arr, n, m);
  
  for(int i=0;i<n;++i) {cout<<in_arr[i]<<" ";}
  cout<<endl;
  return 0;
}
