//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;
void swap(int, int);

int main()
{
	system("clear");
	int i,j;
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"Enter two integers:\t";
	cin>>i>>j;
	swap (i,j);
}

void swap(int i, int j)
{
	i = i+j;
	j=i-j;
	i=i-j;
	cout<<"The element after get swaped i= "<<i<<" j="<<j<<endl;
}
