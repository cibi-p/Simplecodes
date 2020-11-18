//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;
class two;
class one
{
	int a;
	public:
		void geta()
		{
			cout<<"\nEnter a value:\t";
			cin>>a;
		}
		friend void max(one, two);
};
class two
{
	int b;
	public:
		void getb()
		{
			cout<<"\nEnter b value:\t";
			cin>>b;
		}
		friend void max(one,two);
};
void max(one A,two B)
{
	if(A.a>B.b)
	{
		cout<<"\nCLass one data "<<A.a<<" is  greater"<<endl;
	}
	else
	{
		cout<<"\nClass two data "<<B.b<<" is greater"<<endl;
	}
}
int main()
{
	system("clear");
	int i,j;
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\t friend function\n"<<endl;
	one x;
	two y;
	x.geta();
	y.getb();
	max(x,y);
}

