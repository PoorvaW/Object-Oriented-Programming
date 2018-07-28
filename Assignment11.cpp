/*
 TITLE:   Template
 ROLL NO: 2447
 BATCH:   G4

A C++ program which makes use of function template
  to perform selection sort on an int array and a
  float array.
*/


#include <iostream>
using namespace std;

template<class T>
void selsort(T* a,int n){

T swap;
		for(int i=0;i<n;i++){
		int min=i;
		for(int j=i;j<n;j++)
		{
		if(a[min]>a[j])
		min=j;
		}
		swap=a[i];
		a[i]=a[min];
		a[min]=swap;
		
		}

}

int main()
{

int n,m;

cout<<"Enter Number of Integer Elements\n";
cin>>n;
cout<<"Enter Integer Elements\n";
int *c=new int[n];
	    for(int i=0;i<n;i++)
	        cin>>c[i];
	selsort(c,n);
    cout<<"Sorted Integer array is:\n";
		for(int i=0;i<n;i++)
		    cout<<c[i]<<" ";



cout<<"\nEnter Number of Float Elements\n";
cin>>m;
cout<<"Enter Float Elements\n";
float *b=new float[m];
		   for(int i=0;i<m;i++)
		        cin>>b[i];
		   selsort(b,m);
		   cout<<"Sorted array is:\n";
		   for(int i=0;i<m;i++)
		        cout<<b[i]<<" ";

		
return 0;
}



/*
	OUTPUT:

Enter Number of Integer Elements
7
Enter Integer Elements
2
4
1
6
3
11
8
Sorted Integer array is:
1 2 3 4 6 8 11 
Enter Number of Float Elements
5
Enter Float Elements
3.2
8.8
1.4
7.4
2.99
Sorted array is:
1.4 2.99 3.2 7.4 8.8

*/
