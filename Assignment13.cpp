/*
 TITLE:   STL (user defined records)
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to create a
  user defined record.
It allows the user to enter records.
It allows the user to search a particular record.
The sorted records are displayed using sort function.
*/



#include <bits/stdc++.h>
using namespace std;

class Irecord{
public:	
	int icode,qty;
	float cost;
	string iname;

		void getdata();
		void putdata();
};

void Irecord::getdata(){
	cout<<"Enter Item Code, Item Name, Quantity and Cost:\n";
	cin>>icode>>iname>>qty>>cost;
}

void Irecord::putdata(){
	cout<<" Item Code: "<<icode<<" Item Name: "<<iname<<" Quantity: "<<qty<<" Cost: "<<cost<<"\n";
}
inline bool operator<(const Irecord& a, const Irecord& b)
{
	return a.icode < b.icode;
}

void function2(int n){
string nm;
char decider;
	vector <Irecord> ivec;
	Irecord obj;
		for(int i=0;i<n;i++){
		obj.getdata();
		ivec.push_back(obj);
	}
	do{
	cout<<"Enter the record name you want to search: ";
	cin>>nm;
	vector <Irecord>::iterator i;
		for(i=ivec.begin();i!=ivec.end();i++)
		if(i->iname==nm){
		cout<<"\tRECORD FOUND!\n";
		i->putdata();
		break;}
			if(i==ivec.end())
				cout<<"\tRECORD NOT FOUND\n";
	cout<<"Do you want to search another record ?(y/n)";
	cin>>decider;
	}while(decider=='y'||decider=='Y');

sort(ivec.begin(),ivec.end());
cout<<"\tSORTED RECORDS\n";
		vector <Irecord>::iterator i;
		for(i=ivec.begin();i!=ivec.end();i++)
		i->putdata();
}

int main(){
int n;

cout<<"Enter the number of records\n";
cin>>n;
	function2(n);

return 0;
}




/*
	OUTPUT:

Enter the number of records
5
Enter Item Code, Item Name, Quantity and Cost:
32
tv
1
50000
Enter Item Code, Item Name, Quantity and Cost:
10 
ac
5
40000
Enter Item Code, Item Name, Quantity and Cost:
180
laptop
2
60000
Enter Item Code, Item Name, Quantity and Cost:
14
led
50
100
Enter Item Code, Item Name, Quantity and Cost:
2
fan
20
1000
Enter the record name you want to search: tv
	RECORD FOUND!
 Item Code: 32 Item Name: tv Quantity: 1 Cost: 50000
Do you want to search another record ?(y/n)y
Enter the record name you want to search: fridge
	RECORD NOT FOUND
Do you want to search another record ?(y/n)n
	SORTED RECORDS
 Item Code: 2 Item Name: fan Quantity: 20 Cost: 1000
 Item Code: 10 Item Name: ac Quantity: 5 Cost: 40000
 Item Code: 14 Item Name: led Quantity: 50 Cost: 100
 Item Code: 32 Item Name: tv Quantity: 1 Cost: 50000
 Item Code: 180 Item Name: laptop Quantity: 2 Cost: 60000




*/
