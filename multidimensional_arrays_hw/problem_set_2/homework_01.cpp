#include<iostream>
/*
Read 2 integers N and M, then Read matrix NxM.
Then read integer Q, for Q queries.
For each query read 4 integers: i j r c
For each query, print how many prime numbers in the requested grid.
*/
using namespace std;

int main()
{
  int rows, cols;
  cin>>rows>>cols;
  int arr[100][100] = {0};
  for(int i=0;i<rows;++i)
  {
    for(int j=0;j<cols;++j)
    {
      cin>>arr[i][j];
    }
  }
  
  int q;
  int sub_i, sub_j, r, c;
  cin>>q;
  
  while(q--)
  {
    cin>>sub_i>>sub_j>>r>>c;
    int prime_cnt = 0;
    for(int i=0;i<r;++i)
    {
      for(int j=0;j<c;++j)
      {
        bool is_prime  = true;
        int val = arr[sub_i + i][sub_j + j];
        
        if(val>2)
        {
          for(int k=2;k<val;++k)
          {
            if(val%k == 0) {is_prime = false;}
          }
        }
        else if (val<= 0) {continue;}

        if(is_prime) {prime_cnt += 1;}
      }
    }
    cout<<prime_cnt<<endl;
  }
  
  return 0;
}
