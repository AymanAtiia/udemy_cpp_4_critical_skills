#include<iostream>

using namespace std;

int main()
{
  int n;
  int a[200] = {0};
  cin>>n;
  
  int sml = 100000;
  int crn = 0;
  
  for (int i=0;i<n;++i) {cin>>a[i];}
  
  for(int i=0;i<n;++i)
  {
    for (int j=i+1;j<n;++j)
    {
      crn = a[i] + a[j] + j - i;
      if(crn<=sml) {sml = crn;}
    }
  }
  
  cout<<sml<<endl;
  return 0;
}
