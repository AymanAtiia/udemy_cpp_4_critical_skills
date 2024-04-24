/*
https://web.archive.org/web/20170810175653/http://www.acmaast.com/problem.php?id=83

Given 8 space-separated integers, find the sum of those in even places and the sum of those in odd places.

Note: Even place means the 2nd, 4th, 6th or 8th numbers, while odd places are the 1st, 3rd, 5th and 7th numbers.

Example Input:
11 2 7 9 12 -8 3 -1

Example Output:
2 33

Example Explanation:
2 + 9 + (-8) + (-1) = 2
11 + 7 + 12 + 3 = 33
*/

#include<iostream>
using namespace std;

int main() {
	
	signed int num, evens = 0, odds = 0;
	
	for (int i=1; i<9; ++i)
	{
		cin>>num;
		if(i%2) { odds += num;}
		
		else { evens += num;}
	}
	
	cout << "odds : " <<odds;
	cout << " evens : " <<evens<<endl;

	return 0;
}
