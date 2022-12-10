//Name: CIBI P
//Register Number: 1912106
#include<iostream>
using namespace std;
long int factorial(int  );

int question()
{
	int i;
	cout<<"Enter a number between 1 to 20, to get a factorial:\t"<<endl;
	cin>>i;
	if(i<21&&i>0)
	cout<<"The factorial of the "<<i<<" is "<<factorial(i);
	else{
	cout<<"\nYou might not enter the number <=1 or >=20\n"<<endl;
	question();
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
	cout<<"\t Recurrsion\n"<<endl;
	question();
}

long int factorial(int i)
{
       long int ans;
	if(i==1)
	{
		return 1;
	}
	else{
	ans=i*factorial(i-1);
	}
	return ans;
}
