#include<iostream>
using namespace std;
class node
{
public:
	int data;
	node*next;
};
class list
{
	private:
		node*head,*tail;
	public:
	list()
	{
		head=NULL;
		tail=NULL;
	}
	void add_node();
	void insert();
	void delet();
	void display();
	void search();
};
void list::add_node()
{
	int n;
	cout<<"\nEnter the n value:\t";
	cin>>n;
	node *temp=new node;
	temp->data=n;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}	
}
void list::insert()
{
	node *prev,*cur;
	prev=NULL;
	cur=head;
	int count=1,pos,ch,n;
	node *temp=new node;
	cout<<"\nEnter an element:\t";
	cin>>n;
	temp->data=n;
	temp->next=NULL;
	cout<<"\nInsert as\n1.First node\n2.Last node\n3.In Between";
	cout<<"\nEnter the choice;\t";
	cin>>ch;
	switch(ch)
	{
		case 1:
			temp->next=head;
			head=temp;
			break;
		case 2:
			tail->next=temp;
			tail=temp;
			break;
		case 3:
			cout<<"\nEnter the position:\t";
			cin>>pos;
			while(count!=pos)
			{
				prev=cur;
				cur=cur->next;
				count++;
			}
			if(count==pos)
			{
				prev->next=temp;
				temp->next=cur;
			}
			else
			cout<<"\nNot able to insert";
			break;
	}
}
void list::delet()
{
	node *prev=NULL,*cur=head;
	int count=1,pos,ch;
	cout<<"\nDelete\n1.First Node\n2.Last Node\n3.In between Node";
	cin>>ch;
	switch(ch)
	{
		case 1:
			if(head!=NULL)
			{
				cout<<"\nDeleted"<<head->data;
				head=head->next;
			}
			else
			{
				cout<<"\nNot able to delete\n";
			}
			break;
		case 2:
			while(cur!=tail)
			{
				prev=cur;
				cur=cur->next;
			}
			if(cur==tail)
			{
				cout<<"\nDeleted"<<cur->data;
				prev->next=NULL;
				tail=prev;	
			}
			else
			{
				cout<<"\nNot able to delete";
			}
			break;
		case 3:
			cout<<"\nEnter the position:\t";
			cin>>pos;
			while(count!=pos)
			{
				prev=cur;
				cur=cur->next;
				count++;
			}
			if(count==pos)
			{
				cout<<"\nDeleted"<<cur->data;
				prev->next=cur->next;
			}
			else
				cout<<"\nNot able to delete";
				break;
	}
}
void list::display()
{
	node *temp=head;
	if(temp==NULL)
		cout<<"\nList Empty";
	while(temp!=NULL)
	{
		cout<<temp->data;
		cout<<"-->";
		temp=temp->next;
	}
	cout<<"NULL";
}
void list::search()
{
	int value,pos=0;
	int flag=0;
	if(head==NULL)
	{
		cout<<"\nList is Empty";
	}
	cout<<"\nEnter the value to be searched:\t";
	cin>>value;
	node *temp;
	temp=head;
	while(temp!=NULL)
	{
		pos++;
		if(temp->data==value)
		{
			flag=1;
			cout<<"\nElement is found at"<<pos;
		}
		temp=temp->next;
	}
	if(!flag)
	{
		cout<<"\nElement not found";
	}
}
int main()
{
	list l;
	int ch;
	do
	{
		cout<<"\n*****Menu******\n";
		cout<<"\n1.Create\n2.Insert\n3.Delete\n4.Search\n5.Display\n6.Exit\n";
		cout<<"\nEnter your choice:\t";
		cin>>ch;
		switch(ch)
		{
			case 1:
				l.add_node();
				break;
			case 2:
				l.insert();
				break;
			case 3:
				l.delet();
				break;
			case 4:
				l.search();
				break;
			case 5:
				l.display();
				break;
			case 6:
				return 0;
		}
	}
	while(ch<=6);
	return 0;
}
