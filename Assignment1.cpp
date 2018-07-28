/*
 TITLE:   Complex Numbers
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to enter and print complex numbers by using overloaded << and >>. 
Overloading of operator + to add two complex numbers.
Overloading of operator * to multiply two complex numbers.
*/






#include <iostream>
using namespace std;

class complex
{			int a,b;
			public:
			complex()
			{		a=0;
					b=0;
			}
			friend complex operator +(complex,complex);
			friend complex operator *(complex,complex);
			void operator >>(istream &i);
			void operator <<(ostream &o);

};


complex operator +(complex A,complex B)
{
		complex C;
		C.a=B.a+A.a;
		C.b=B.b+A.b;
		return C;
}


complex operator *(complex A,complex B)
{
		complex C;
		C.a=B.a*A.a-B.b*A.b;
		C.b=B.b*A.a+B.a*A.b;
		return C;
}

void complex::operator >>(istream &i)
{		i>>a>>b;
}

void complex::operator <<(ostream &o)
{		o<<a<<"+i"<<b<<endl;
}


int main() {
			complex A,B,C,D;
			cout<<"Enter Real and Imaginary: ";
			A>>cin;
			cout<<"Enter Real and Imaginary: ";
			B>>cin;
			C=A+B;
			D=A*B;
			cout<<"Addition is: ";
			C<<cout;
			cout<<"Multiplication is: ";
			D<<cout;
			return 0;
}



/*
	OUTPUT:
Enter Real and Imaginary: 5 6
Enter Real and Imaginary: 2 9
Addition is: 7+i15
Multiplication is: -44+i57

*/



