#include<iostream>

using namespace std;

int main()
{
  int n, q;
  int in_arr[200] = {0};
  cin>>n;
  int freq[771] = {0};
  for(int i=0;i<n;++i) {cin>>in_arr[i]; freq[in_arr[i]+500] += 1;}
  int max_iter = 0;
  for(int i=0;i<771;++i)
  {
    if (freq[i]>max_iter) {max_iter = i;}
  }
  
  // cout<<max_iter<<endl;
  
  cout<<(max_iter-500)<<" is repeated "<<freq[max_iter]<< " times."<<endl;
  
  
  
  
  return 0;
}
