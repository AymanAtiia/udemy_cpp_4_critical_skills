#include<iostream>
using namespace std;


// guess the output

int main() {

	int a = 210;

	a /= 2; // a = 105
	cout<<a<<"\n";

	cout<<(a /= 3)<<"\n"; // a = 35
	cout<<(a /= 5)<<"\n"; // a = 7
	cout<<(a /= 7)<<"\n"; // a = 1

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n"; // 5*8/5/8 = 1

	a = 10;
	cout<<a++ + 10<<"\n"; // a = 11
	cout<<++a + 10<<"\n"; // a = 12
	cout<<a-- + 10<<"\n"; // a = 11
	cout<<--a + 10<<"\n"; // a = 10

	int b = 20;
	cout<<a++ + ++b<<"\n";	// Don't code this way  a = 11 , b = 21

	cout<<a<<"\n";
	++a+=10;	// Don't code this way a = 22 , b = 21
	cout<<a<<"\n";



	return 0;
}


/*
OUTPUT:
105
35
7
1
1
20
22
22
20
31
11
22
*/
