#include<iostream>

using namespace std;
/*
Help our factory in managing his employees. Create a program that does the following:
Display the following choices:

Enter your choice:
1) Add new employee
2) Print all employees
3) Delete by age
4) Update Salary by name

You will keep the program running forever. Display the choices and user input from 1 to 4 

Employee Program (v1)
For choice 1: Allow the manager to enter information of an employee
For choice 2: Print all employees. Line per employee
For choice 3: Find all employees with: start_age <= age <= end_age and remove them
For choice 4: User enter name, then salary Find the employee and update his salary


*/
int main()
{
  char choice;
  string names[100];
  string name;
  int ages[100] = {0};
  int age;
  double salaries[100] = {0};
  double salary;
  char genders[100];
  char gender;
  int count = 0;
  int deleted_employees[100] = {0};
  while(true)
  {
    cout<<"Enter Your Choice : "<<endl;
    cout<<"1)Add new employee."<<endl;
    cout<<"2)Print all employees."<<endl;
    cout<<"3)Delete by age."<<endl;
    cout<<"4)Update Salary by name."<<endl;
    cin>>choice;
    
    if (choice == '1')
    {
      cout<<"Enter name: ";
      cin>>name;
      cout<<"Enter age: ";
      cin>>age;
      cout<<"Enter salary: ";
      cin>>salary;
      cout<<"Enter gender (M/F): ";
      cin>>gender;
      
      names[count] = name;
      ages[count] = age;
      salaries[count] = salary;
      genders[count] = gender;
      ++count;
    }
    else if(choice == '2')
    {
      for(int i = 0; i<count;++i)
      {
        if(names[i] != "" && !deleted_employees[i])
        {
          cout<<names[i]<< " " <<ages[i]<< " " <<salaries[i]<< " " <<genders[i]<<endl;
        }
      }
    }
    
    else if(choice == '3')
    {
      double start, end;
      cout<<"Enter start and End age : "<<endl;
      cin>>start>>end;
      
      for(int i=0;i<count;++i)
      {
        if(ages[i] >=start && ages[i] <= end) {deleted_employees[i] = 1;}
      }
    }
    else if(choice == '4')
    {
      cout<< "Enter the name and salary : "<<endl;
      cin>>name>>salary;
      bool found = false;
      for(int i=0; i<count;++i)
      {
        if(names[i] == name && !deleted_employees[i]) {salaries[i] = salary;}
      }
      
      if(!found) {cout<<"Employee not found"<<endl;}
    }
    else {cout<<"invalid input... try again."<<endl;}
    cout<<"**************************"<<endl;
  }
  return 0;
}
