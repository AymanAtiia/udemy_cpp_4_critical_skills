#include<iostream>
/*
Problem :
Develop a function that allows user to do the following (menu options):
Add 2 numbers
Subtract 2 numbers
Multiply 2 numbers
Divide 2 numbers
End the program

Consider the following functions:

Function to read 2 double numbers - by reference
4 functions, one for each operation. Don’t divide by zero!
Function to display the menu of the 5 options - read number and return it.
User should enter number from 1 to 5. If not, display error message
If exit, end the program by printing how many operations were done

*/
int num_operation = 0;
using namespace std;
int choose_operation()
{
  cout<<"Choose Operation: "<<endl;
  cout<<"1) Addition."<<endl;
  cout<<"2) Subtraction."<<endl;
  cout<<"3) Multiply."<<endl;
  cout<<"4) Divide."<<endl;
  cout<<"5) Exit."<<endl;
  int n;
  cin>>n;
  return n;
}


int addition(const double &a, const double &b)
{
  ++num_operation;
  return (a+b);
}

int subtraction(const double &a, const double &b)
{
  ++num_operation;
  return (a-b);
}

int multiply(const double &a, const double &b)
{
  ++num_operation;
  return (a*b);
}

int division(const double &a, const double &b)
{
  if(b == 0) {cout<<"Error! Dividing by Zero"<<endl; return 0;}
  ++num_operation;
  return (a/b);
}


int main()
{
  
  while(true)
  {
   int choice = choose_operation();
   
   if(choice == 1)
   {
     cout<<"Enter 2 numbers : "<<endl;
     int a, b;
     cin>>a>>b;
     cout<<addition(a, b)<<endl;   
   }
   else if(choice == 2)
   {
     cout<<"Enter 2 numbers : "<<endl;
     int a, b;
     cin>>a>>b;
     cout<<subtraction(a, b)<<endl;   
   }
   
   else if(choice == 3)
   {
     cout<<"Enter 2 numbers : "<<endl;
     int a, b;
     cin>>a>>b;
     cout<<multiply(a, b)<<endl;   
   }
   else if(choice == 4)
   {
     cout<<"Enter 2 numbers : "<<endl;
     int a, b;
     cin>>a>>b;
     cout<<division(a, b)<<endl;   
   }
   else if(choice == 5)
   {
     cout<<"Exiting."<<endl;
     cout<<num_operation<< " operation(s) done."<<endl;
     break; 
   }
   else {cout<<"Error. Please try again."<<endl;}
  }
  
  return 0;
}
