#include<iostream>
using namespace std;

// guess the output

int main() {
	int a = 0, b = 1;

	cout<<a++<<"\n";
	cout<<++a<<"\n";
	a += 2*b+1; // a = 5 , b = 1
	b = ++a * 2; // a = 6 , b = 12
	cout<<a<<" "<<b<<"\n";

	b = a; // a = 6, b = 6
	a = 12 + a / 3 / 2 - 2 * 2; // 12 + 6/3/2 - 4 = 12 + 2/2 - 4 = 12 + 1 - 4 = 9
	cout<<a<<"\n";

	a = b; // a = 6, b = 6
	a = ((12 + a) / 3 / 2 - 2) * 2; // (18/3/2 - 2) * 2 = (3 - 2) *2 = 2
	cout<<a<<"\n";

	return 0;
}

/*
OUTPUT:
0
2
6 12
9
2
*/

