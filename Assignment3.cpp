/*
 TITLE:   CppArray
 ROLL NO: 2447
 BATCH:   G4

A C++ program which allows the user to enter and print array by using overloaded << and >>. 
A function for range checking.
Overloading of operator = to assign one array to another.
a function for returning size of array.
*/




#include<iostream>
using namespace std;

class cpparray{
		int array[100];
		int size;

	public:
		void create(int num){
			size=num;
		}
		void operator = (cpparray );
		void operator >> (istream&);
		void operator << (ostream&);
		void check(int );
		int calsize();
};
	void cpparray::check(int ele){
	int i;
	for( i=0;i<size;i++)
	{
	if(array[i]==ele){
	cout<<"Element Found\n";
	break;
}}
if(i>=size)
cout<<"Element Not Found\n";
}




	void cpparray:: operator >> (istream &i){
	cout<<"\nEnter your array";
		for(int j=0;j<size;j++){
			i>>array[j];
		}
					
	}
	
	void cpparray:: operator << (ostream &o){
	cout<<"\nYour array is";
		for(int i=0;i<size;i++){
			o<<array[i]<<"\t";
		}
	}
	
	void cpparray::operator =(cpparray c1)
	{
	for(int j=0;j<size;j++){
		array[j]=c1.array[j];	
	}
	}
	
	int cpparray::calsize(){
		return size;
	}
int main()
{
	int decide,num,ele;
	char dec;
	cpparray c1;
	cout<<"Enter size of array you want to create\n";
	cin>>num;
	c1.create(num);
	c1>>cin;
		
do{
	cout<<"\nEnter the operation you want to perform\n1.Display array elements \n2.Copy array \n3.Display copied array \n4.Check existence of element\n5.Return size of array\n";
	cin>>decide;
		
		switch(decide){
			case 1: c1<<cout;
			break;
			
			case 2:cpparray c2;
			c2.create(num);
			c2=c1;
			break;
			
			case 3:
			cout<<"The copied array is\n";
			c2<<cout;
			break;
			
			case 4:
			cout<<"Enter the value of element to be checked\n";
			cin>>ele;
			c1.check(ele);
			break;
			
			case 5:
			cout<<"Size of Array is:"<<c1.calsize()<<"\n";
			break;
		}	
		cout<<"\nDo you want to continue(y\\n)?\n";
		cin>>dec;
		
		}
	while(dec='y');
return 0;
}



/* 
	OUTPUT:
Enter size of array you want to create
7

Enter your array2
3
1
8
5
9
4

Enter the operation you want to perform
1.Display array elements 
2.Copy array 
3.Display copied array 
4.Check existence of element
5.Return size of array
1

Your array is2	3	1	8	5	9	4	
Do you want to continue(y\n)?
y

Enter the operation you want to perform
1.Display array elements 
2.Copy array 
3.Display copied array 
4.Check existence of element
5.Return size of array
2

Do you want to continue(y\n)?
y

Enter the operation you want to perform
1.Display array elements 
2.Copy array 
3.Display copied array 
4.Check existence of element
5.Return size of array
3
The copied array is

Your array is2	3	1	8	5	9	4	
Do you want to continue(y\n)?
y

Enter the operation you want to perform
1.Display array elements 
2.Copy array 
3.Display copied array 
4.Check existence of element
5.Return size of array
4
Enter the value of element to be checked
3
Element Found

Do you want to continue(y\n)?
y

Enter the operation you want to perform
1.Display array elements 
2.Copy array 
3.Display copied array 
4.Check existence of element
5.Return size of array
4
Enter the value of element to be checked
22
Element Not Found

Do you want to continue(y\n)?
y

Enter the operation you want to perform
1.Display array elements 
2.Copy array 
3.Display copied array 
4.Check existence of element
5.Return size of array
5
Size of Array is:7

Do you want to continue(y\n)?
n
*/
