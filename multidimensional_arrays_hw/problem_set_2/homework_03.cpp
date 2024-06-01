#include<iostream>
/*
Read integers N, M represents a matrix. A robot start at cell (0, 0).
Read integer K, then K commands. Each command is 2 values:
1-Direction from 1 to 4: up, right, down, left
2-Steps: a number to number steps to take in the direction. Steps [1, 1000000000]
If the robot hits the wall during the move, it circulates in the matrix.
For every command, print where is the robot now
*/


// solution of instructor is much better
using namespace std;

int main()
{
  int rows, cols;
  cin>>rows>>cols;
  int arr[100][100] = {0};
  int di[4] = {-1, 0, 1, 0};
  int dj[4] = {0, 1, 0, -1};
  
  
  int k;
  cin>>k;
  int curr_i = 0;
  int curr_j = 0;
  while(k--)
  {
    int dir, n_steps;
    cin>>dir>>n_steps;
    if(dir == 1 || dir == 3) {n_steps = n_steps%rows;}
    else {n_steps = n_steps%cols;}
    for(int s=0;s<n_steps;++s)
    {
      curr_i += di[dir-1]; curr_j += dj[dir-1];
      if(curr_i >= rows) {curr_i = 0;}
      if(curr_i < 0) {curr_i = rows-1;}
      if(curr_j >= cols) {curr_j = 0;}
      if(curr_j < 0) {curr_j = cols-1;}
    }
    cout<<curr_i<< " " <<curr_j<<endl;
  }
  
  return 0;
}
