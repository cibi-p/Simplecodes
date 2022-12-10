//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;

class compare
{
	int m,n;
	public:
		compare()
		{
		m=0;
		n=0;
		}
		void enterinput();
		void displayoutput();
		void largernumber();
};
void compare::enterinput()
{
	cout<<"Enter the two number:\t"<<endl;
	cin>>m>>n;
}
void compare::displayoutput()
{
	cout<<"You entered value is "<<m<<" "<<n<<endl;
}
void compare::largernumber()
{
	if(m<n)
	{
		cout<<"The larger number is "<<n<<endl;
	}
	else	
	{
		cout<<"The larger number is "<<m<<endl;
	}
}
int main()
{
	system("clear");
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\t class and object\n"<<endl;
	compare A;
	A.enterinput();
	A.displayoutput();
	A.largernumber();
}

