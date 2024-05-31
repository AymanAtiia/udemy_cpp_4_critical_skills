#include<iostream>
/*
Read integers N, M, then Read matrix NxM. Then read Q for Q queries.
Each query is 2 integers: first and 2nd row indices (1-based)
Compare the 2 rows and print YES if sum of first row < sum of 2nd row 
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
  
  int q, r1, r2;
  cin>>q;
  int sum1, sum2;
  
  while(q)
  {
    cin>>r1>>r2;
    sum1 = 0; sum2 = 0;
    for(int j=0;j<cols;++j) {sum1 += arr[r1-1][j]; sum2 += arr[r2-1][j];}
    if(sum1<sum2) {cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}
    --q;
  }
  
  return 0;
}
