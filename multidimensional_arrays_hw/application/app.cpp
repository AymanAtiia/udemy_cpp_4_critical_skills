#include<iostream>
/*
NxN tic-tac-toe
Read integer N for the dimension of tic-tac-toe (3 <= N <= 9). Then run a
game of 2 users who keep playing till one of them wins or tie. Print the grid
after each round.
*/

using namespace std;

int main()
{
  int n;
  char arr[9][9];
  cin>>n;
  
  for(int i=0;i<n;++i)
  {
    for(int j=0;j<n;++j)
      {
        arr[i][j] = '.';
      }
   }
  bool is_won = false;
  char players[2] = {'x', 'o'};
  int r,c;
  int di[8] = {0, 0, 1, -1, 1, 1, -1, -1};
  int dj[8] = {1, -1, 0, 0, 1, -1, 1, -1};
  int idx = 0;
  int n_moves = 0;
  while(!is_won)
  {
  
    cout<<"Player "<<players[idx]<< " turn. Enter empty location (r,c) : ";
    cin>>r>>c;
    if(arr[r][c] != '.') {cout<< "Invalid Input. Try Again"<<endl; --idx;}
    else
    {
    	arr[r][c] = players[idx];
    }
    
    is_won = false;
    char curr = arr[r][c];
    
    for(int d=0;d<8;++d)
    {
    	int ni = r + di[d], nj = c + dj[d];
    	// cout<<"coord : "<<ni<< " "<<nj<<endl;
	if(ni>=0 && ni<n && nj>=0 && nj<n)
	{
	  char neighbor = arr[ni][nj];
	  // cout<<"neighor is : "<<neighbor<<endl;
	  if(neighbor == curr)
	  {
	  	ni = ni + di[d];
	  	nj = nj + dj[d]; // take additional step in the same direction
	  	
	  	if(ni>=0 && ni<n && nj>=0 && nj<n)
	  	{
	  	 char neighbor = arr[ni][nj];
	  	 if(neighbor == curr) {is_won = true;}
	  	}	
	  	
	  }
	  
	}
    }
    
    
    
    
    for(int i=0;i<n;++i)
    {
    for(int j=0;j<n;++j)
      {
        cout<<arr[i][j]<< " ";
      }
    cout<<endl;
    }
    
    if(is_won) {cout<<"Player "<<players[idx] << " has won."<<endl;}
    
    ++idx;
    ++n_moves;
    if(n_moves >= n) {cout<<"Tie."<<endl;}
    idx %= 2; 
  }
     
  return 0;
}
