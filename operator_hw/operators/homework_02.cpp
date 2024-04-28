#include<iostream>
using namespace std;

// guess the output
int main() {

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c, // a = 1 , b = 2 , c = 2
		   c = a+b, a = b, b = c, // a = 2 , b = 3 , c = 3
		   c = a+b, a = b, b = c, // a = 3 , b = 5 , c = 5
		   c = a+b, a = b, b = c ) <<endl; // a = 5 , b = 8 , c = 8

	return 0;
}


/*
OUTPUT:
8
*/
