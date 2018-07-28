/*
 TITLE:   File Handling1
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to create an
  output file, write information to it, close the
  file and open it again as an input file and read 
  the information from file.
  
*/




#include <iostream>
#include <fstream>
using namespace std;


class data{
	int rno;
	string name;
	public:
		void getdata();
		void display();
};

void data::getdata(){
	cout<<"Enter roll no.\n";
	cin>>rno;
	cout<<"Enter name\n";
	cin>>name;
}

void data::display()
{
	cout<<"\nRoll No. is: "<<rno<<"\tName is: "<<name;
}


int main()
{
int n;
cout<<"Enter Number of Students\n";
cin>>n;

		data *d=new data[n];
		
		ofstream fin("file1.txt");
		
		for(int i=0;i<n;i++){
			d[i].getdata();
			fin.write((char*)&d[i],sizeof(d));
			}
		fin.close();
		
		ifstream fout("file1.txt");
		
		for(int i=0;i<n&&!fout.eof();i++)
		{
		fout.read((char*)&d[i],sizeof(d));
		d[i].display();
}
		fout.close();

return 0;
}


/* 	
	OUTPUT:

Enter Number of Students
2
Enter roll no.
2447
Enter name
Poorva
Enter roll no.
2454
Enter name
Tanvi

Roll No. is: 2447	Name is: Poorva
Roll No. is: 2454	Name is: Tanvi

*/

