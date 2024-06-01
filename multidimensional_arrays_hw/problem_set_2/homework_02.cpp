#include<iostream>
/*
Read integers N, M, then Read matrix NxM. Print all positions that are
mountain. Position is mountain if its value > 8 neighbours values
*/
using namespace std;

int main()
{
  int rows, cols;
  cin>>rows>>cols;
  int arr[100][100] = {0};
  int di[8] = {0, 0, 1, -1, 1, 1, -1, -1};
  int dj[8] = {1, -1, 0, 0, 1, -1, 1, -1};
  for(int i=0;i<rows;++i)
  {
    for(int j=0;j<cols;++j)
    {
      cin>>arr[i][j];
    }
  }
  
  for(int i=0;i<rows;++i)
  {
    for(int j=0;j<cols;++j)
    {
      int val = arr[i][j];
      bool is_mountain = true;
      for(int d=0;d<8;++d)
      {
        int ni = i + di[d], nj = j + dj[d];
        if(ni>=0 && ni<rows && nj>=0 && nj<cols)
        {
          int n_val = arr[ni][nj];
          if(n_val>val) {is_mountain = false;}
        }
      }
      if(is_mountain) {cout<<i<< " " <<j<<endl;}
    }
  }
  
  
  
  return 0;
}
