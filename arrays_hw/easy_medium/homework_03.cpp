#include<iostream>

using namespace std;

int main()
{
  int n;
  int in_arr[1000] = {0};
  cin>>n;
  int print = 1000; // put out of range [0:500]
  
  for (int i=0;i<n;++i){cin>>in_arr[i];}
  
  for (int i=0;i<n;++i)
  {
    if (in_arr[i] == print) {continue;}
    else {cout<<in_arr[i]<<" "; print = in_arr[i];}
  }
  cout<<endl;
  return 0;
}
