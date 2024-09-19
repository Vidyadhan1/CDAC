#include<iostream>
using namespace std;
class Worker{
	private:
		string Worker_Name;
		int Pay_Rate=500,salary=0;
		float No_Of_Hours_Worked;
		public:
			void info(string str,float num){
				Worker_Name=str;
				No_Of_Hours_Worked=num;
				Salary();
			}
			void Salary(){
				salary=Pay_Rate*No_Of_Hours_Worked;
			}
			void display(){
				cout<<"Name of employee is "<<Worker_Name<<endl;
				cout<<"His Salary is "<<salary;
				
			}
};
main(){
	string name;
	float hours;
	cout<<"Enter the name of Employee\n";
	getline(cin,name);
	cout<<"Number of hours worked\n";
	cin>>hours;
	Worker emp1;
	emp1.info(name,hours);
	emp1.display();}