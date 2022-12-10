#include<iostream>
//#include<process.h>
using namespace std;
class array1
{
public:
void create();
void insert();
void deletion();
void search();
void display();
int a,b[20],n,d,e,f,i;
};
int main()
{
	array1 a;
	int c;
	system("clear");
	cout<<"\nMain Menu";
	cout<<"\n1.Create\n2.Delete\n3.Search\n4.Insert\n5.Display\n6.Exit";
	do
	{
		cout<<"\nEnter the choice:\t";
		cin>>c;
		switch(c)
		{
		case 1:
			a.create();
			break;
		case 2:
			a.deletion();
			break;
		case 3:
			a.search();
			break;
		case 4:
			a.insert();
			break;
		case 5:
			a.display();
			break;
		case 6:
			exit(0);
			break;
		default:
			cout<<"\nEnter the correct value:\t";
		}
	}
	while(c<=6);
}
void array1::create()
{
	cout<<"\n-->Enter the no.of.Elements:\t";
	cin>>n;
	cout<<"\n-->Enter the Elements:\t";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
}
void array1::deletion()
{
	cout<<"\n-->Enter the elements to be deleted:\t";
	cin>>d;
	for(i=0;i<n;i++)
	{
		if(b[i]==d)
		{
			for(int j=i;j<(n-1);j++)
			{		
				b[j]=b[j+1];
			}
			n--;
			cout<<d<<"\tDeleted";
		}
	}
}
void array1::search()
{
	cout<<"\n-->Enter a Number";
	cin>>e;
	int found=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==e)
		{
			cout<<"\n-->Position found at :"<<i+1;
			found=1;
		}
	}
	if(found!=1)
		{
			cout<<"\n-->element not found";
		}
}
void array1::insert()
{
	int pos;
	cout<<"\n-->Enter the Element and Position";
	cin>>e>>pos;
	for(i=n;i>=pos;i--)
	{
		b[i]=b[i-1];
	}
	n++;
	b[i]=e;
}
void array1::display()
{
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<b[i];
	}
}
