#include<iostream>

using namespace std;

int main()
{
  int n;
  int in_arr[900] = {0};
  int appear[500] = {0};
  cin>>n;

  for (int i=0;i<n;++i)
  {
    cin>>in_arr[i];
    {
      appear[in_arr[i]] += 1;
    }
  }
  
  for (int i=0;i<500;++i)
  {
    for (int j=0;j<appear[i];++j) {cout<<i<<" ";}
  }
  
  cout<<endl;
  return 0;
}
