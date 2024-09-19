#include<iostream>
using namespace std;
class Employee{
		private:
		int emp_id;
		char emp_name[50];
		int salary;
		public:
			void info(char str,int num,int ID){
				
				salary=num;
				emp_id =ID;
			}
			int Salary(){
				return salary;
			
			}
			void display(){
				cout<<"\n\nName of employee is "<<emp_name<<endl;
				cout<<"His Salary is "<<salary;
			}
};
main(){
	char name[50];
	int sal,id,temp=0,max=0;
	Employee emp[9];	
 
 for (int i=0;i<10;i++){
		cout<<"Enter the name "<<i+1<<" of Employee\n";
		cin>>name;
		cout<<"Enter the ID of "<<i+1<<" Employee\n";
		cin>>id;
		cout<<"Enter his Salary\n";
		cin>>sal;
		emp[i].info(name[50],sal,id);
	}
	for (int i=0;i<10;i++){
		emp[i].display();
	}
	for (int i=0;i<10;i++){
		if(emp[i].Salary()>max){
			max=emp[i].Salary();
			temp=i;
		};
	}
	cout<<"maximum employee salary is "<<emp[temp].Salary();
	}