#include<iostream>

using namespace std;

int main()
{
  int n;
  int in_arr[1000] = {0};
  int value;
  bool pal = true;
  cin>>n;

  
  for (int i=0;i<n;++i) {cin>>in_arr[i];}
  
  for (int i=0;i<n/2;++i) 
  {
    value = in_arr[n-i-1];
    
    if(!(value == in_arr[i])) { pal = false;}
    }

  
  
  if (pal) {cout <<"YES"<<endl;}
  else {cout<<"NO"<<endl;}
  
  return 0;
}
