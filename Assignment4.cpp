/*
 TITLE:   Arithmetic Calculator
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to enter the operands and operator. 
Depending upon the operator the operation is performed.
The result is displayed.
*/




#include<iostream>
using namespace std;

class  Calci
{
	int no1,no2;
	char op;
public :
	void Accept();
	void Add();
	void Sub();
	void Mult();
	void Div();
};

void Calci::Accept()
{
	char c;
	do
	{
		cout<<endl<<"Enter 1st number,operator and 2nd number."<<endl;
		cin>>no1>>op>>no2;
		switch (op)
		{
			case '+' :
				Add();
				break;
			case '-' :
				Sub();
				break;
			case '*' :
				Mult();
				break;
			case '/' :
				Div();
				break;
		}
		cout<<"Do you want to continue ?(y/n)"<<endl;
		cin>>c;
	}while(c=='y');
}

void Calci::Add()
{
	cout<<"Ans. : "<<(no1+no2)<<endl;
}

void Calci::Sub()
{
	cout<<"Ans. : "<<(no1-no2)<<endl;
}

void Calci::Mult()
{
	cout<<"Ans. : "<<(no1*no2)<<endl;
}

void Calci::Div()
{
	cout<<"Ans. : "<<endl<<"Q : "<<(no1/no2)<<endl<<"R : "<<(no1%no2)<<endl;
}

int main()
{
	Calci c;
	c.Accept();
	return 0;
}							

/*
	OUTPUT:
Enter 1st number,operator and 2nd number.
2 + 4
Ans. : 6
Do you want to continue ?(y/n)
y

Enter 1st number,operator and 2nd number.
6-2
Ans. : 4
Do you want to continue ?(y/n)
y

Enter 1st number,operator and 2nd number.
3*66
Ans. : 198
Do you want to continue ?(y/n)
y

Enter 1st number,operator and 2nd number.
5/3
Ans. : 
Q : 1
R : 2
Do you want to continue ?(y/n)
n

*/

