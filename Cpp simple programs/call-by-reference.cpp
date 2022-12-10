
#include<iostream>
using namespace std;

int main()
{
	system("clear");
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\t call by reference\n"<<endl;
	cout<<"Enter two integers:\t";
	cin>>i>>j;
	swap (i,j);
	cout<<"The element after get swaped i= "<<i<<" j="<<j<<endl;
}

void swap(int *i, int *j)
{
	*i = *i+*j;
	*j=*i-*j;
	*i=*i-*j;
}

