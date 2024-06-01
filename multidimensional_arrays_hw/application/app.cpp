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
	  	
	  	
	  	int o_ni = r - di[d];
	  	int o_nj = c - dj[d];
	  	// cout<<"here : "<<o_ni<<" "<<o_nj<<endl;
	  	if(o_ni>=0 && o_ni<n && o_nj>=0 && o_nj<n)
	  	{
	  	 char neighbor = arr[o_ni][o_nj];
	  	 if(neighbor == curr) {is_won = true; break;}
	  	}
	  	
	  	
	  	int nni = ni + di[d];
	  	int nnj = nj + dj[d]; // take additional step in the same direction
	  	
	  	if(nni>=0 && nni<n && nnj>=0 && nnj<n)
	  	{
	  	 char neighbor = arr[nni][nnj];
	  	 if(neighbor == curr) {is_won = true; break;}
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
    
    if(n_moves > (n*n) && !is_won) {cout<<"Tie."<<endl; break;}
    idx %= 2; 
  }
     
  return 0;
}
