/*
 TITLE:   STL Stack
 ROLL NO: 2447
 BATCH:   G4

A C++ program which uses the STL Stack to add binary numbers.
Addition is diplayed.
*/



#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
int a,l1,l2,carry=0;
string n1,n2;
stack <int>s,s1,s2;

cout<<"Enter First Number\n";
cin>>n1;
l1=n1.length();

cout<<"Enter Second Number\n";
cin>>n2;
l2=n2.length();

for(int i=0;i<l1;i++){
s1.push(int(n1[i])-48);
}

for(int i=0;i<l2;i++){
s2.push(int(n2[i])-48);
}



while(!s1.empty() && !s2.empty())
{
	a=s1.top()+s2.top()+carry;
	s1.pop();
	s2.pop();
		if(a==2){
			carry=1;
			a=0;}
		else if(a==3){
			carry=1;
			a=1;}
		else
			carry=0;
	s.push(a);
}
			    				    
while(!s1.empty()){
a=s1.top()+carry;
s1.pop();
		if(a==2){
			carry=1;
			a=0;}
		else if(a==3){
			carry=1;
			a=1;}
		else
			carry=0;
s.push(a);
}

while(!s2.empty()){
a=s2.top()+carry;
s2.pop();
		if(a==2){
			carry=1;
			a=0;}
		else if(a==3){
			carry=1;
			a=1;}
		else
			carry=0;
s.push(a);
}
if(carry==1)
s.push(carry);
while(!s.empty()){
cout<<s.top()<<" ";
s.pop();
}
return 0;
}




/*
	OUTPUT:

Enter First Number
101011
Enter Second Number
1011
1 1 0 1 1 0 

*/
