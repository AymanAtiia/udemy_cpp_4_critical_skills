#include<iostream>
/*
Read integers N, M, then Read matrix NxM. Compute another array, the
transpose
*/
using namespace std;

int main()
{
  int n, m;
  cin>>n>>m;
  int arr[50][50] = {0};
  int tr_arr[50][50] = {0};
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<m;++j)
    {
      cin>>arr[i][j];
      tr_arr[j][i] = arr[i][j];
    }
  }
  
  for(int i=0;i<m;++i)
  {
    for(int j=0;j<n;++j)
    {
      cout<<tr_arr[i][j]<< " ";
    }
    cout<<endl;
  }
  return 0;
}
