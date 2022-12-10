#include<iostream>
using namespace std;
int main()
{
	string str1("Gang Four");
	string str2(str1);
	string str3(5,'H');
	string str4(str1,3,4);
	string str5(str2.begin(),str2.begin()+3);
	cout<<str1<<endl;
	cout<<"\n";
	cout<<str2<<endl;
	cout<<"\n";
	cout<<str3<<endl;
	cout<<"\n";
	cout<<str4<<endl;
	cout<<"\n";
	cout<<str5<<endl;
	cout<<"\n";
	string str6 = str4;
	str4.clear();
	int len=str6.length();
	cout<<"Length of string is :"<<len<<endl;
	char ch=str6[0];
	cout<<"second character of string is: "<<ch<<endl;
	char ch_f=str6[0];
	char ch_b=str6[str6.length()-1];
	cout<<"First char is : "<<ch_f<<", Last char is :"<<ch_b<<endl;
	str6.append(" HELLO");
	str4.append(str6,0,5);
	cout<<str6<<endl;
	cout<<str4<<endl;
	if(str6.find(str4)!=string::npos)
		cout<<"str4 found in str6 at"<<str6.find(str4)<<" pos"<<endl;
	else
		cout<<"str4 not found in str"<<endl;
	cout<<str6.substr(7,2)<<endl;
	cout<<str6.substr(7)<<endl;
	str6.erase(7,2);
	cout<<str6<<endl;
	str6.erase(str6.begin()+5,str6.end()-6);
	cout<<str6<<endl;
	str6="We is gang four";
	str6.replace(3,2,"are");
	cout<<str6<<endl;
	return 0;
}



















