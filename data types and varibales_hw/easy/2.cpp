/*

A teacher want a program that reads 2 students information about math exam
	Read per student: name, id and grade
	Then print them. See the picture in the slides


Be a good software engineer
	Think deeply in your selected data types
	The teacher gives us this dialogue to guide us
	Be careful from your assumptions?
	Is exam’s grade an integer?


*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
	
	vector<string> names;
	vector<string> ids;
	vector<double> grades;
	
	string name,id;
	double grade;

	int num_students = 2;
	
	
	
	for (int i=0; i<num_students;++i)
	{
		cout<<"What is student "<< i+1 << " name: ";
		cin>>name;
		names.push_back(name);

		cout<<"His id: ";
		cin>>id;
		ids.push_back(id);

		cout<<"His math exam grade: ";
		cin>>grade;
		grades.push_back(grade);
	}


	cout<<"\nStudents grades in math\n";

	cout<<names[0]<<" (with id "<<ids[0]<<") got grade: "<<grades[0]<<"\n";
	cout<<names[1]<<" (with id "<<ids[1]<<") got grade: "<<grades[1]<<"\n";
	cout<<"Average grade is "<<(grades[0] + grades[1]) / 2.0<<"\n";
	
	// Notice we used () to apply this operation first. More later

	return 0;
}

