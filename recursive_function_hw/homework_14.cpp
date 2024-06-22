#include<iostream>
using namespace std;

// problem : trace this code and see what it does

void do_something1(int n) {	// print number digit by digit reversed
	if (n) {
		cout << n % 10;
		do_something1(n / 10);
	}
}

void do_something2(int n) {     // print number digit by digit in order
	if (n) {
		do_something2(n / 10);
		cout << n % 10;
	}
}

int main() {
	do_something1(123456);
	cout << "\n";
	do_something2(123456);
	cout << "\n";

	return 0;
}

