#include<iostream>

using namespace std;

int main()
{
  int n;
  int in_arr[900] = {0};
  int appear[500] = {0};
  cin>>n;

  int ord = 1;
  for (int i=0;i<n;++i)
  {
    cin>>in_arr[i];
    if(appear[in_arr[i]] == 0)
    {
      appear[in_arr[i]] = ord; 
      ++ord;
    }
  }
  
  for (int i=1;i<ord;++i)
  {
    for (int j=0;j<500;++j)
      if (appear[j] == i) {cout<< j <<" ";break;}
  }
  
  cout<<endl;
  return 0;
}
