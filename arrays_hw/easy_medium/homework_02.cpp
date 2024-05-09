#include<iostream>

using namespace std;

int main()
{
  int n;
  int in_arr[200] = {0};
  cin>>n;
  
  for (int i=0;i<n;++i){cin>>in_arr[i];}
  
  int max_ = in_arr[0];
  int min_ = in_arr[0];
  
  for (int i=0;i<n;++i)
  {
    if(in_arr[i]>=max_) {max_ = in_arr[i];}
    if(in_arr[i]<=min_) {min_ = in_arr[i];}
  }
  
  for (int i=0;i<n;++i)
  {
    if(in_arr[i] == max_) {in_arr[i] = min_;}
    else if (in_arr[i] == min_) {in_arr[i] = max_;}
    
    cout<<in_arr[i]<<" ";
  }

  cout<<endl;
  return 0;
}
