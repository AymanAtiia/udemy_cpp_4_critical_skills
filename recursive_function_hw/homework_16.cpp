#include<iostream>
/*
Problem : Grid Sum

Given a 2D array of numbers, all of them are positive distinct. Robot start from
(0, 0). It can move to the right or bottom or diagonal. See the arrows.
It will select one direction: the maximum. Print the total path sum of this robot
  int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS)
  
Input

  3 3
  1 7 8
  2 10 11
  20 5 9
  
Output: 31 (from 1 + 10 + 11 + 9)

  Robot start at (0, 0). 3 possible values (2, 7, 10). Max 10, so go to this cell
  Then 3 possible values (5, 9, 11). Go to 11. Then only 9 available
*/

using namespace std;

int di[] = { 1, 0, 1 };
int dj[] = { 0, 1, 1 };

int path_sum(int grid[100][100], int ROWS, int COLS, int row = 0, int col = 0) {
	int sum = grid[row][col];

	if (row == ROWS - 1 && col == COLS - 1)
		return sum;

	int max_idx = -1, max_value = 0;

	for (int d = 0; d < 3; ++d) {
		int new_row = row + di[d];
		int new_col = col + dj[d];

		if (new_row >= ROWS || new_col >= COLS)
			continue;

		if (max_value < grid[new_row][new_col])
			max_value = grid[new_row][new_col], max_idx = d;
	}
	int new_row = row + di[max_idx];
	int new_col = col + dj[max_idx];

	return sum + path_sum(grid, ROWS, COLS, new_row, new_col);
}


int main()
{
  int r, c;
  cin>>r>>c;
  int grid[100][100];
  
  for(int i=0;i<r;++i)
    for(int j=0;j<c;++j)
      {cin>>grid[i][j];}
  cout<<path_sum(grid,r,c)<<endl;
  return 0;
}
