#include<iostream>

using namespace std;

int main()
{
  int k, n;
  int in_arr[200] = {0};
  cin>>k>>n;
  for (int i=0;i<n;++i) {cin>>in_arr[i];}
  int max_sum = -100000;
  int max_ind = 0;
  for (int i=0;i<(1+n-k);++i)
  {
    int sum_ = 0;
    for(int j=0;j<k;++j)
    {
      sum_ += in_arr[i+j];
    }
    if (sum_>max_sum) {max_sum = sum_; max_ind = i;}
    
  }
  
  cout<< max_ind << " " << (max_ind+k-1) << " " << max_sum<<endl;
  return 0;
}
