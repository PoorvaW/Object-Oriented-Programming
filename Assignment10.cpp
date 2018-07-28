/*
 TITLE:   Command Line Arguments
 ROLL NO: 2447
 BATCH:   G4

A C++ program using Command Line Arguments
  which allows the user to search a word in 
  a file and replace it with the specified word.

$ change <old word> <new word> <file name>
*/





#include <bits/stdc++.h>
using namespace std;

int main(int argc,char* argv[]){

if(argc<4){
clog<<"Insufficient Arguments";
return 1;
}

string s,t;
fstream f(argv[3],ios::in);
while(!f.eof()){
getline(f,s);
cout<<s<<"\n";
}
f.close();
t="";

f.open(argv[3],ios::in);
while(!f.eof()){
getline(f,s);
int a=s.find(argv[2],0);
while(a!=string::npos){
s.replace(a,strlen(argv[2]),argv[1]);
a=s.find(argv[2],a+1);
}
t=t+s+"#";
}
f.close();
f.open(argv[3],ios::out);
for(int i=0;i<t.length();i++)
if(t[i]=='#') t[i]='\n';
f<<t;

f.close();
f.open(argv[3],ios::in);
while(!f.eof()){
getline(f,s);
cout<<s<<"\n";
}




return 0;
}


/*
	OUTPUT:
./a.out love like file2
This is a random text document!
I like ice-cream. What do you like?
I also like cookies.

This is a random text document!
I love ice-cream. What do you love?
I also love cookies.



*/
