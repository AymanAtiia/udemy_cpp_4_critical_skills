#include<iostream>
using namespace std;
/*
Problem : Fibonacci
Implement fibonacci: Int fibonacci(int n)
Recall fibonacci sequence: 1 1 2 3 5 8 13 21 35
E.g. fibonacci(6) = 13
Recall that: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2). E.g. fib(6) = fib(5)+fib(4) =13
  So it calls 2 subproblems of its type
*/


int fibonacci(int n, int cnt = 1)
{
  if (n<2) {return 1;}
  return fibonacci(n-1) + fibonacci(n-2);
}
int main()
{
  int n;
  cin>>n;
  cout<<fibonacci(n)<<endl;
  return 0;
}
