/*
 TITLE:   File Handling2
 ROLL NO: 2447
 BATCH:   G4

A C++ menu driven program which allows the user to
  create a data file containing list of name and
  phone numbers.
It allows the user to search number by name and
  also name by number.
It also allows the user to update a phone record.
*/


#include <iostream>
#include<fstream>
#include<string>
using namespace std;

class person{
	public:
		string name;
		long phno;

		void getdata();
		void putdata();
	};

		void person::getdata(){
			cout<<"\nEnter Name: ";
			cin>>name;

			cout<<"\nEnter Phone Number: ";
			cin>>phno;
		}

		void person::putdata(){
			cout<<"\n Name: "<<name;
			cout<<"\n Phone Number: "<<phno;
		}


int main() {
	int n;
	char dec;
	cout<<"\nEnter the number of records ";
	cin>>n;
	person p[n];

	fstream file;
	file.open("file2.txt",ios::in|ios::out);

		for(int i=0;i<n;i++){
			p[i].getdata();
			file.write((char*)&p[i],sizeof(p[i]));
		}

		cout<<"\t RECORDS ARE:";
		for(int i=0;i<n;i++){
			file.read((char*)&p[i],sizeof(p[i]));
			p[i].putdata();
		}

	do{
		file.seekg(0);
		int decision,i;
		cout<<"\n\tMENU \n1. Find name by number \n2.Find number by name \n3.Update telephone number";
		cin>>decision;
		
			if(decision==1){
				int flag=0;
				long no;
				cout<<"\n Enter the phone number: ";
				cin>>no;
					for(i=0;i<n;i++){
						file.read((char*)&p[i],sizeof(p[i]));
							if(p[i].phno==no){
								p[i].putdata();
								flag=1;
								break;
							}
					}
					if(flag==0)
						cout<<"\n Number not found";
					}

			else if(decision==2){
				int flag=0;
				string sname;
				cout<<"\n Enter name: ";
				cin>>sname;
					for(i=0;i<n;i++){
						file.read((char*)&p[i],sizeof(p[i]));
							if(p[i].name==sname){
								p[i].putdata();
								flag=1;
								break;
							}
						}
						if(flag==0)
						cout<<"\n Name not found";
					}

			else if(decision==3){
				int flag=0;
				long ono;
				cout<<"\n Enter old number";
				cin>>ono;
					for(int i=0;i<n;i++){
						file.read((char*)&p[i],sizeof(p[i]));
							if(p[i].phno==ono){
								cout<<"\n Enter new number";
								cin>>ono;
								p[i].phno=ono;
								file.seekp(file.tellg());
								file.write((char*)&p[i],sizeof(p[i]));
								flag=1;
								file.seekg(0);
								cout<<"\n\tUPDATED RECORD ";
								for(int i=0;i<n;i++){
											file.read((char*)&p[i],sizeof(p[i]));
											p[i].putdata();
								}

								break;
							}
					}
					if(flag==0)
					cout<<"\n Number not found";
			}

				cout<<"\n Do you want to continue ?(y/n)";
				cin>>dec;

	}while(dec=='y'||dec=='Y');
	return 0;
}


/*
	OUTPUT:

Enter the number of records 2

Enter Name: poorva

Enter Phone Number: 8993452345

Enter Name: abhishek

Enter Phone Number: 7878990987
	 RECORDS ARE:
 Name: poorva
 Phone Number: 8993452345
 Name: abhishek
 Phone Number: 7878990987
***MENU*** 
1. Find name by number 
2.Find number by name 
3.Update telephone number1

 Enter the phone number: 8993452345

 Name: poorva
 Phone Number: 8993452345
 Do you want to continue ?(y/n)y

***MENU*** 
1. Find name by number 
2.Find number by name 
3.Update telephone number2

 Enter name: abhishek

 Name: abhishek
 Phone Number: 7878990987
 Do you want to continue ?(y/n)y

***MENU*** 
1. Find name by number 
2.Find number by name 
3.Update telephone number3

 Enter old number7878990987

 Enter new number7878991234

	UPDATED RECORD 
 Name: poorva
 Phone Number: 8993452345
 Name: abhishek
 Phone Number: 7878991234
 Do you want to continue ?(y/n)n



*/


