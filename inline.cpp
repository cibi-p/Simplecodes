//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;
inline int triangle(int i)
{
	for(int k=0; k<i;k++)
	{	
		for(int l=k+1;l>0;l--)
		{
			cout<<l<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
int main()
{
	system("clear");
	int i,j;
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\t inline function\n"<<endl;
	cout<<"Enter a integer to make a triagle:\t";
	cin>>i;
	triangle(i);
}

