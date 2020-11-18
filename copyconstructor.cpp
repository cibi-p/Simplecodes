//Name: CIBI P                                   Register Number: 1912106
#include<iostream>
using namespace std;
class code   {
	int id;
	public:
		code() {  id=0;   }
		code(int a) {   id=a;  }
		code(code &x){
			id=x.id;}
		void display(){
			cout<<id;    }        };
int main(){
	system("clear");
	cout<<"******************************************"<<endl<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl<<"\tcopy constructor\n";
	code a(100);
	code b(a);
	code c=a,d;d=a;
	cout<<"\n ID of a:\t";
	a.display();
	cout<<"\n ID of b:\t";
	b.display();
	cout<<"\n ID of c:\t";
	c.display();
	cout<<"\n ID of d:\t";
	d.display();
	return 0;	}

