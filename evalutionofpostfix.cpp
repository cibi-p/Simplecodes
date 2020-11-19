#include<iostream>
using namespace std;
class Evaluation
{
	public:
		int st[50];
		int top;
		char str[50];
		Evaluation()
		{
			top=-1;
		}
	void push(int item)
	{
		top++;
		st[top]=item;
	}
	int pop()
	{
		int item=st[top];
		top--;
		return item;
	}
	int operation(int a,int b,char c)
	{
	switch(c)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
		default:
			return 0;
	}
	}
	int calculatePostfix();
};

int Evaluation::calculatePostfix()
{
	int index=0;
	while(str[index]!='\0')
	{
		if(isdigit(str[index]))
		{
			push(str[index]-'0');
		}
		else
		{
			int x=pop();
			int y=pop();
			int result=operation(y,x,str[index]);
			push(result);
		}
		index++;
	}
	int val=pop();
	return val;
}
int main ()
{
	system("clear");
	Evaluation eval;
	cout<<"Enter the postfix:";
	cin>>eval.str;
	int result=eval.calculatePostfix();
	cout<<"The result is\t"<<result;
	return 0;
}


















