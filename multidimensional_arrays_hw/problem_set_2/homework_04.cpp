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
  int rows, cols, depth;
  cin>>depth>>rows>>cols;
  int arr[50][50][50] = {0};
  
  
  char choice;
  cin>>choice;
  
  if (choice == '1')
  {
    int z,x,y;
    cin>>z>>x>>y;
    int idx = z*rows*cols + x*cols + y;
    cout<<idx<<endl;
  }
  else if(choice == '2')
  {
    int idx = 0;
    cin>>idx;
    
    cout<<idx/(rows*cols)<< " ";
    idx %= (rows*cols);
    cout<<(idx/cols)<< " ";
    cout<<idx%cols<<endl;
  }
  
  else {cout<<"invalid choice"<<endl;}
  
  return 0;
}
