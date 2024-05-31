#include<iostream>
/*
Read integer N, then Read Square matrix NxN. Then, print 2 values. The
sum of the lower triangle matrix and the upper triangle.
*/
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[50][50] = {0};
  int upper = 0;
  int lower = 0;
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<n;++j)
    {
      cin>>arr[i][j];
      if(j>=i) {upper += arr[i][j];}
      if(i>=j) {lower += arr[i][j];}
    }
  }
  
  cout<<lower<< " " <<upper<<endl;
  
  return 0;
}
