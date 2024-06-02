#include<iostream>
/*
Implement the following 2 functions:
bool is_prime(int num);
Return true if number is prime
Int nth_prime(int n);
Return the n-th prime number. It should use is_prime function
E.g nth_prime(6) = 13
Recall: 2, 3, 5, 7, 11, 13, 17, 19
*/
using namespace std;
bool is_prime(int number)
{
  bool isPrime = true;
  if (number<2) {isPrime = false;}
  else if(number == 2) {isPrime = true;}
  else
  {
    for(int i=2;i<number;++i)
    {
      if(number%i == 0) {isPrime = false;}
    }
  }
  
  return isPrime;
}

int nth_prime(int n)
{
  int prime_count = 0;
  int prime = 2;
  
  for(int i=2;i<10000;++i)
    {
      if(is_prime(i)) 
      {
      prime = i;
      ++prime_count;
      if(prime_count==n) {break;}
      }
  }
  return prime;
}
int main()
{
  int num;
  cin>>num;
  if(is_prime(num)) {cout<<"Prime"<<endl;}
  else {cout<<"Not a prime"<<endl;}
  
  int n;
  cin>>n;
  cout<<nth_prime(n)<<endl;
  return 0;
}
