#include<iostream>
#include<stack> 
using namespace std; 
int prec(char c) 
{ 
	if(c == '^') 
		return 3; 
	else if(c == '*' || c == '/') 
		return 2; 
	else if(c == '+' || c == '-') 
		return 1; 
	else
		return -1; 
} 
void infixToPostfix(string input) 
{ 
	stack<char> stk; 
	int l = input.length(); 
	string output; 
	for(int i = 0; i < l; i++) 
	{ 

		if((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')||(input[i]>='0')) 
			output+=input[i]; 
		else if(input[i] == '(') 
			stk.push('('); 
		else if(input[i] == ')') 
		{ 
			while((!(stk.empty()))&& stk.top() != '(') 
			{ 
				char c = stk.top(); 
				stk.pop(); 
				output+= c; 
			} 
			if(stk.top() == '(') 
			{ 
				char c = stk.top(); 
				stk.pop(); 
			} 
		} 
		else
		{ 
			while((!(stk.empty())) && prec(input[i]) <= 
								prec(stk.top())) 
			{ 
				char c = stk.top(); 
				stk.pop(); 
				output += c; 
			} 
			stk.push(input[i]); 
		} 

	}
	while((!(stk.empty()))) 
	{ 
		char c = stk.top(); 
		stk.pop(); 
		output += c; 
	} 
	cout<<"The postfix expression is:\t";
	cout << output << endl; 
} 
int main() 
{ 
	string exp;
	system("clear");
	cout<<"Enter the infix expression to convert to postfix:\t";
	cin>>exp; 
	infixToPostfix(exp); 
	return 0; 
}
