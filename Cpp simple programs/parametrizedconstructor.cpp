//Name: CIBI P                                   Register Number: 1912106
#include<iostream>
using namespace std;
class construct{
	public:
		int a,b;
		construct(int x1,int y1){
			a=x1;
			b=y1;
		}
		int getx(){
			return a;
		}
		int gety(){
			return b;
		}
};
int main(){
	system("clear");
	cout<<"******************************************"<<endl;
	cout<<"                   DS & OOPS                          "<<endl;
	cout<<"******************************************"<<endl;
	cout<<"Name:  P CIBI\t Register Number: 1912106\n"<<endl;
	cout<<"\tparameterized constructor\n";
	construct x(10,5);
	cout<<"x="<<x.getx();
	cout<<"\ny="<<x.gety();
	return 0;
}

