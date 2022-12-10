#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int info;
	struct node *next;
	struct node *prev;
}*start;
class double_llist
{
	public:
		void create_list(int value);
		void add_begin(int value);
		void add_after(int value,int position);
		void delete_element(int value);
		void display_dlist();
	double_llist()
	{
		start=NULL;
	}
};
int main()
{
	int choice,element,position;
	double_llist d1;
	while(1)
	{
		cout<<endl<<"_____________"<<endl;
		cout<<endl<<"operations on doubly linked list"<<endl;
		cout<<endl<<"_____________"<<endl;
		cout<<"1.create node"<<endl;
		cout<<"2.add at the begining"<<endl;
		cout<<"3.add after position"<<endl;
		cout<<"4.delete"<<endl;
		cout<<"5.display"<<endl;
		cout<<"6.exit"<<endl;
		cout<<"enter ur choice"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"enter the element:";
				cin>>element;
				d1.create_list(element);
				cout<<endl;
				break;
			case 2:
				cout<<"enter the element:";
				cin>>element;
				d1.add_begin(element);
				cout<<endl;
				break;
			case 3:
				cout<<"enter the element:";
				cin>>element;
				cout<<"insert element after position:";
				cin>>position;
				d1.add_after(element,position);
				cout<<endl;
				break;
			case 4:
				if(start==NULL)
				{
					cout<<"list empty,nothing to delete"<<endl;
					break;
				}
				cout<<"enter the element for deletion:";
				cin>>element;
				d1.delete_element(element);
				cout<<endl;
				break;
			case 5:
				d1.display_dlist();
				cout<<endl;
				break;
			case 6:
				exit(1);

			default:
				cout<<"wrong choice"<<endl;
		}
	}
}
void double_llist::create_list(int value)
{
	struct node *s,*temp;
	temp=new(struct node);
	temp->info=value;
	temp->next=NULL;
	if(start==NULL)
	{
		temp->prev=NULL;
		start=temp;
	}
	else
	{
		s=start;
		while(s->next!=NULL)
			s=s->next;
		s->next=temp;
		temp->prev=s;
	}
}
void double_llist::add_begin(int value)
{
	if(start==NULL)
	{
		cout<<"first create the list."<<endl;
		return;
	}
	struct node *temp;
	temp=new(struct node);
	temp->prev=NULL;
	temp->info=value;
	temp->next=start;
	start->prev=temp;
	start=temp;
	cout<<"element inserted"<<endl;
}
void double_llist::add_after(int value,int pos)
{
	if(start==NULL)
	{
	cout<<"first create the list."<<endl;
	return;
	}
	struct node *tmp,*q;
	int i;
	q=start;
	for(i=0;i<pos-1;i++)
	{
		q=q->next;
		if(q==NULL)
		{
			cout<<"there are less than";
			cout<<pos<<"elements."<<endl;
			return;
		}
	}
	tmp=new(struct node);
	tmp->info=value;
	if(q->next==NULL)
	{
		q->next=tmp;
		tmp->next=NULL;
		tmp->prev=q;
	}
	else
	{
		tmp->next=q->next;
		tmp->next->prev=tmp;
		q->next=tmp;
		tmp->prev=q;
	}
	cout<<"element inserted"<<endl;
}
void double_llist::delete_element(int value)
{
	struct node *tmp,*q;
	if(start->info==value)
	{
		tmp=start;
		start=start->next;
		start->prev=NULL;
		cout<<"element deleted"<<endl;
		free(tmp);
		return;
	}
	q=start;
	while(q->next->next !=NULL)
	{
	if(q->next->info==value)
	{
		tmp=q->next;
		q->next=tmp->next;
		tmp->next->prev=q;
		cout<<"element deleted"<<endl;
		free(tmp);
		return;
	}
	q=q->next;
	}
	if(q->next->info==value)
	{
		tmp=q->next;
		free(tmp);
		q->next=NULL;
		cout<<"element deleted"<<endl;
		return;
	}
	cout<<"element"<<value<<"not found"<<endl;
}
void double_llist::display_dlist()
{
	struct node *q;
	if(start==NULL)
	{
		cout<<"list empty,nothing to display"<<endl;
		return;
	}
	q=start;
	cout<<"the doubly link list is:"<<endl;
	while(q!=NULL)
	{
		cout<<q->info<<"**";
		q=q->next;
	}
	cout<<"NULL"<<endl;
}














