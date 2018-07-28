/*
 TITLE:   Employee Biodata
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to enter personal record,
  professional record,academic record.
A biodata is prepared using inheritance from multiple records.
*/




#include <iostream>
using namespace std;

class personal{
		string name;
		int age;
		char gender;
	public:
		void getp();
		string returnn()
			{return name;}
		int returna()
			{return age;}
		char returng()
			{return gender;}
		};			
								
void personal::getp(){
		cout<<"Enter name, age, gender(m/f)"<<endl;
		cin>>name>>age>>gender;
		}

class professional{
		int empid;
		float sal;
	public:
		void getp()
			{cout<<"Enter empid,sal"<<endl;
			cin>>empid>>sal;
			}
		int returne()
			{return empid;}
		float returns()
			{return sal;}
		};
class academic{
		string qual;
	public:
		void getp(){
			cout<<"Enter Qualification"<<endl;
			cin>>qual;
			}
		string returnq()
			 {return qual;}
		};

class biodata:public personal,public professional,public academic{
	public:
	void display(){
		cout<<returne()<<"\t";
		cout<<returnn()<<"\t";
		cout<<returna()<<"\t";
		cout<<returng()<<"\t";
		cout<<returns()<<"\t";
		cout<<returnq()<<endl;					
}
};

int main(){
int n;
biodata b[20];
cout<<"Enter no. of Employees"<<endl;
cin>>n;

for(int i=1;i<=n;i++){
	cout<<"Enter data of "<<i<<" employee"<<endl;
	b[i].personal::getp();
	b[i].professional::getp();
	b[i].academic::getp();
	}

for(int i=1;i<=n;i++)
	b[i].display();
				
return 0;
}



/*
	OUTPUT:
Enter no. of Employees
3
Enter data of 1 employee
Enter name, age, gender(m/f)
Ram
23
m
Enter empid,sal
101
500000
Enter Qualification
BE
Enter data of 2 employee
Enter name, age, gender(m/f)
Riya
30
f
Enter empid,sal
102
80000
Enter Qualification
ME
Enter data of 3 employee
Enter name, age, gender(m/f)
Poorva
25
f
Enter empid,sal
103
600000
Enter Qualification
MS
101	Ram	23	m	500000	BE
102	Riya	30	f	80000	ME
103	Poorva	25	f	600000	MS


*/
								
