
/*
 TITLE:   Exception Handling
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows us to check some conditons
  and throw exception if criterion does not match.
It checks:
  1.User has age between 18 and 55
  2.User has income between Rs. 50,000-Rs. 1,00,000
  3.User stays in Pune/Mumbai/Bangalore/Chennai
  4.User has 4-wheeler
*/



#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int age,salary;
    char city[25];
    char dec;
    
cout<<"Enter your age\n";
cin>>age;

	try{
    		if(age<=18)
        		throw "Under age";
    		if(age>=55)
        		throw "Age exceeds the maximum";
	}

	catch(const char msg[]){
		cout<<"EXCEPTION:"<<msg<<endl;
	}


cout<<"Enter your salary\n";
cin>>salary;

	try{
		if(salary<=50000||salary>=100000)
			throw salary;
	}
	catch(int sal){
    		cout<<"EXCEPTION:"<<sal<<" not in specified range"<<endl;
	}


cout<<"Enter your city\n";
cin>>city;

	try{
		if(strcmp(city,"pune")!=0&&strcmp(city,"mumbai")!=0&&strcmp(city,"chennai")!=0&&strcmp(city,"bangalore")!=0) 
			throw city;
	}
	catch(const char msg[]){
		cout<<"EXCEPTION:"<<city<<" is not listed"<<endl;
	}

cout<<"Do you have a four wheeler(y\\n)?\n";
cin>>dec;

	try{
		if(dec=='n'||dec=='N')
			throw "No four wheeler";
   
	}
	catch(const char msg[]){
		cout<<"EXCEPTION:"<<msg<<endl;
	}


return 0;
}



/*
	OUTPUT:

Enter your age
35
Enter your salary
45000
EXCEPTION:45000 not in specified range
Enter your city
mumbai
Do you have a four wheeler(y\n)?
n
EXCEPTION:No four wheeler

*/



