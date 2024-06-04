#include<iostream>
// Problem : Array sum
using namespace std;
double arr_av(int arr[], int len)
{
  if(len == 1) {return arr[0];}
  
  double sub_av = arr_av(arr, len-1);
   sub_av = sub_av * (len-1);
  return (sub_av + arr[len-1])/len;
}

int main()
{
  int in_arr[100] = {0};
  int len;
  cin>>len;
  for(int i=0;i<len;++i) {cin>>in_arr[i];}
  
  cout<<arr_av(in_arr,len)<<endl;
  return 0;
}
