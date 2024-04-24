/*
Homework 6: Swapping 2 numbers!

Write a program that reads 2 variables num1 and num2
E.g. say we read num1 = 7 and num2 = 231

Target: we want swap the values of Num1 and Num2?
Swap means exchange

So Num1 takes value 231 and Num2 takes value 7

*/

#include<iostream>
#include <utility>

using namespace std;

void swap1(int num1, int num2) 
{
	cout<< "num1 was "<<num1;
	cout<< " num2 was "<<num2<<endl;
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	
	cout<<"num1 now is "<<num1;
	cout<<" num2 now is "<<num2<<endl;
}


void swap2(int num1, int num2)
{
	cout<< "num1 was "<<num1;
	cout<< " num2 was "<<num2<<endl;
	
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	
	cout<<"num1 now is "<<num1;
	cout<<" num2 now is "<<num2<<endl;
}



void swap3(int num1, int num2)
{
	cout<< "num1 was "<<num1;
	cout<< " num2 was "<<num2<<endl;
	
	std::swap(num1, num2);
	
	cout<<"num1 now is "<<num1;
	cout<<" num2 now is "<<num2<<endl;
}

int main() {
	int num1, num2, num3;
	
	cin>>num1>>num2;

	swap1(num1,num2);
	swap2(num1,num2);
	swap3(num1,num2);

	// if hard? maybe watch https://www.youtube.com/watch?v=A7li4rrkS54


	return 0;
}
