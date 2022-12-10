//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;
int sum(int a, int b=0, int c=0)
{
	return a+b+c;
}

int main()
{
	system("clear");
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\t default argument\n"<<endl;
	cout<<"sum(1)==>"<<sum(1)<<endl;
	cout<<"sum(5,6)==>"<<sum(5,6)<<endl;
	cout<<"sum(5,6,1)==>"<<sum(5,6,1)<<endl;
}
