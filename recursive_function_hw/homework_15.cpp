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

bool is_prime(int m, int cnt = 2)
{
	if(cnt == m) {return true;}
	if(m <= 1) {return false;} 
	if(m == 2) {return true;}
	if(m % cnt == 0) {return false;}
	
	return is_prime(m, cnt+1);
}

int count_primes(int start, int end)
{
  if(start > end) {return 0;}
  int result = count_primes(start+1, end);
  if(is_prime(start)) {result += 1;}
  return result;
}

int main()
{
  int start, end;
  cin>>start>>end;
  
  cout<<count_primes(start, end)<<endl;
  return 0;
}
