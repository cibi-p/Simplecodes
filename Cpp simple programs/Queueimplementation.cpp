#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 5
class MyQ
{
	private:
		struct queue
		{
			int que[size];
			int front,rear;
		}Q;
	public:
		MyQ();
		int Q_full();
		int insert(int);
		int Q_empty();
		int delet();
		void display();
};

MyQ::MyQ()
{
	Q.front=-1;
	Q.rear=-1;
}
int MyQ::Q_full()
{
	if(Q.rear>=size-1)
		return 1;
	else
		return 0;
}
int MyQ::insert(int item)
{
	if(Q.front==-1)
		Q.front++;
	Q.que[++Q.rear]=item;
	return Q.rear;
}
int MyQ::Q_empty()
{
	if(Q.front==-1)//(Q fornt>Q.rear))
		return 1;
	else
		return 0;
}
int MyQ::delet()
{
	int item;
	item=Q.que[Q.front];
	Q.front++;
	cout<<"\n the deleted item is"<<item;
	return Q.front;
}
void MyQ::display()
{
	int i;
	for(i=Q.front;i<=Q.rear;i++)
		cout<<"|"<<Q.que[i]<<"|\n";
}
int main()
{
	system("clear");
	int choice,item;
	char ans;
	MyQ obj;
         while (ans!='n')
	{
		cout<<"\n main menu";
		cout<<"\n 1.insert\n 2.delete \n 3.display";
		cout<<"\n enter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1: if(obj.Q_full())
				cout<<"\n cannot insert the element";
				else
				{
				cout<<"\n enter the number to be inserted";
				cin>>item;
				obj.insert(item);
				}
				break;
			case 2:
				if(obj.Q_empty())
				cout<<"\n Queue underflow !!";
				else
				obj.delet();
				break;
			case 3:
				if(obj.Q_empty())
				cout<<"\n queue is empty!";
				else
				obj.display();	
				break;
			default:
				cout<<"\n wrong chioce!";
				break;
		}
		cout<<"\n Press n to stop or any character to continure:";
		cin>>ans;
	}
return 0;
}






