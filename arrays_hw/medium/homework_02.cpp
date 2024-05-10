#include<iostream>

using namespace std;

int main()
{
  int n, q;
  int in_arr[200] = {0};
  cin>>n;
  for(int i=0;i<n;++i) {cin>>in_arr[i];}
  
  cin>>q;
  int quer[q] = {0};
  for(int i=0;i<q;++i) {cin>>quer[i];}
  
  
  for(int i=0;i<q;++i)
  {

    for (int j=n-1;j>=0;--j)
    {
      // cout<<j<<endl;
      if(in_arr[j] == quer[i]) {cout<<j<<endl;break;}
      else if(j == 0) {cout<<-1<<endl;break;}
    }
  }
  
  return 0;
}
