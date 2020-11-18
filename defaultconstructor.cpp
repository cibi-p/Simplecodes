//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;
class construct
{
	public:
		int a,b;
		construct()
		{
			a=10;
			b=20;
		}
};

int main()
{
	system("clear");
	int i,j;
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\tDefault constructor\n";
	construct x;
	cout<<"a:"<<x.a<<endl<<"b:"<<x.b;
	return 0;
}

