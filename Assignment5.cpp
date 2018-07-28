/*
 TITLE:   Student Database
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to enter information of a student in order
  to create a student database. 
Database stores Name,Roll number,Class,Division,Date of Birth,Blood Group,
  Address,Telephone Number,Driving license number. 
*/
    
    #include <iostream>
    using namespace std;
    
    class StudentDatabase{						
			string name;
			int rollno;
			string clas;
			char div;
			static string colname;
			string dob;
			string bgroup;
			string address;
			long pno;
			long licno;
		public:
		static void getclg(){
				cin>>colname;
				}
		inline void disclg(){
				cout<<colname;
				}
		void put(){
cout<<"Name:"<<name<<"\n"<<"Roll No.:"<<rollno<<"\n"<<"Class:"<<clas<<"\n"<<"Division:"<<div<<"\nDate of Birth:"<<dob<<"\nBlood Group:"<<bgroup<<"\nAddress:"<<address<<"\nPhone No.:"<<pno<<"\nLicense No.:"<<licno<<"\n";}										
		
		void get(){
	cout<<"Enter Name, RollNo, Class, Division,Date of Birth, Blood Group, Address, Phone Number,License Number";
								
		cin.ignore();
		getline(cin,name);
		cin>>rollno;
		cin.ignore();
		getline(cin,clas);
		cin>>div;
		cin.ignore();
		getline(cin,dob);
		cin.ignore();
		getline(cin,bgroup);
		cin.ignore();
		getline(cin,address);
		cin>>pno;
		cin>>licno;
								
		}

		StudentDatabase(){
				name=" ";
				rollno=0;
				clas=" ";
				div=' ';
				colname="P.I.C.T ";
				dob=" ";
				bgroup=" ";
				address=" ";
				pno=0;
				licno=0;
				}
		StudentDatabase(StudentDatabase &s){
				name=s.name;
				rollno=s.rollno;
				clas=s.clas;
				div=s.div;
				dob=s.dob;
				bgroup=s.bgroup;
				address=s.address;
				pno=s.pno;
				licno=s.licno;
}

friend class methods;														
    };
 string StudentDatabase::colname;

    class methods{
	public:
								
	void getdata(int n) {
		StudentDatabase *s=new StudentDatabase[n];
		for(int i=0;i<n;i++)
		s[i].get();
		cout<<"\t\tDATABASE\n";
		for(int i=0;i<n;i++)
		s[i].put();
			}
    };
    
    int main()
    {				
				 char dec;
				 int n;
				 
				 cout<<"Enter the Name of College for which you want to create a Database"<<endl;
				 StudentDatabase::getclg();
				 cout<<"Enter Number of students";
				 cin>>n;
				methods s; 
    			s.getdata(n);
   
    return 0;
    }
    
    
/*
	OUTPUT:
Enter the Name of College for which you want to create a Database
PICT   
Enter Number of students2
Enter Name, RollNo, Class, Division,Date of Birth, Blood Group, Address, Phone Number,License NumberPoorva
2447
SE
4
02/07/1998
B+ve
Karvenagar
8992245681
110
Enter Name, RollNo, Class, Division,Date of Birth, Blood Group, Address, Phone Number,License NumberTanvi
2454
SE
4
24/06/1998
B+ve
Bibwewadi
8911452789
120
		DATABASE
Name:Poorva
Roll No.:2447
Class:SE
Division:4
Date of Birth:02/07/1998
Blood Group:B+ve
Address:Karvenagar
Phone No.:8992245681
License No.:110
Name:Tanvi
Roll No.:2454
Class:SE
Division:4
Date of Birth:24/06/1998
Blood Group:B+ve
Address:Bibwewadi
Phone No.:8911452789
License No.:120

*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
