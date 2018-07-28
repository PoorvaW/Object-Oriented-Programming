/*
 TITLE:   Quadratic
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to enter a Quadratic equation using overloaded >>. 
Overloading of operator + to add two Quadratic equations.
A function for computing the solution of the equation.
A function for evaluating the value of the equation for a given value of x. 
*/



#include <iostream>
#include <math.h>
using namespace std;
class Quadratic{
	float a,b,c;
	
	public:
	Quadratic(){		
		a=0;
		b=0;
		c=0;}
		

	friend Quadratic operator +(Quadratic,Quadratic);
	void operator >>(istream &i);
	void operator<<(ostream &o);
	friend void calculate(Quadratic);
	void eval(Quadratic);
};	

void Quadratic::eval(Quadratic q){			
float x;
cout<<"Enter a value of x"<<endl;
cin>>x;
float eval1=q.a*x*x+q.b*x+q.c;	
cout<<"The value of quadratic equation for x= "<<x<<" is "<<eval1<<"\n";
}

Quadratic operator +(Quadratic q,Quadratic p){
Quadratic r;
r.a=q.a+p.a;
r.b=q.b+p.b;
r.c=q.c+p.c;
return r;
}

void Quadratic::operator>>(istream &i){
i>>a>>b>>c;
}
void Quadratic::operator<<(ostream &o){
o<<a<<"x^2+"<<b<<"x+"<<c;
}
void calculate(Quadratic q){
		float x1,x2;
		float D=q.b*q.b-(4*q.a*q.c);
		
		if(D<0)
		cout<<"No real Roots"<<endl;
		else if (D==0){
		x1=x2= q.b/(2*q.a);
		cout<<"One real root is:"<<x1<<endl;
				}
		else{
		x1= (q.b+pow(D,0.5))/(2*q.a);
		x2= (q.b-pow(D,0.5))/(2*q.a);
		cout<<"Roots are "<<x1<<" "<<x2<<endl;
				}
}
int main(){

	Quadratic q1,q2,q3,call;
	cout<<"Enter first Quadratic Equation coefficients\n";
	q1>>cin;
	cout<<"Enter second Quadratic Equation coefficients\n";
	q2>>cin;

	cout<<"First Equation: ";
	calculate(q1);
	cout<<"Second Equation: ";
	calculate(q2);

	cout<<"Addition is:"<<endl;
	q3=q1+q2;
	q3<<cout;
	
	cout<<"\n";
	
	cout<<"First Equation: ";
	call.eval(q1);
	cout<<"Second Equation: ";
	call.eval(q2);
		
	return 0;
}


/*
	OUTPUT:
Enter first Quadratic Equation coefficients
1 2 1
Enter second Quadratic Equation coefficients
2 1 5
First Equation: One real root is:1
Second Equation: No real Roots
Addition is:
3x^2+3x+6
First Equation: Enter a value of x
3
The value of quadratic equation for x= 3 is 16
Second Equation: Enter a value of x
4
The value of quadratic equation for x= 4 is 41

*/
