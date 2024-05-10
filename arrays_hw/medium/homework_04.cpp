#include<iostream>

using namespace std;

int main()
{
  int n, q;
  int in_arr[200] = {0};
  cin>>n;
  int freq[10] = {0};
  int temp,l_digit;
  for(int i=0;i<n;++i) {cin>>in_arr[i];}
  
  for(int i=0;i<n;++i)
  {
    temp = in_arr[i];
    while(temp>0)
    {
      l_digit = temp%10;
      freq[l_digit] +=1;
      temp /= 10;
    }
  }
  
  for (int i=0;i<10;++i)
  {
    cout<<i<<" "<<freq[i]<<endl;
  }
  
  
  
  return 0;
}
