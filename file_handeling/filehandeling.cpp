#include<iostream>
#include<fstream>
#include<ctime>
#include<limits>
using namespace std;

fstream& GotoLine(fstream& file, unsigned int num){
    file.seekg(ios::beg);
    for(int i=0; i < num - 1; ++i){
        file.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    return file;
}

int main()
{
	fstream file1;
	time_t now=time(0);
	string temp;
	string name,temp2;
	char *dateandtime = ctime(&now);
	file1.open("log.txt", ios::in | ios::out | ios::app);
	ifstream file2;
	file2.open("log.txt");
	file2>>temp;
	file2.close();
	cout<<"Hello......"<<endl<<"This is the program done by Hari"<<endl<<"if you want the source code of the program visit this: ******"<<endl<<endl;
	if(temp != "OPEN")
	{
		cout<<" WELCOME to the PROJECT....   {^...^} "<<endl;
		cout<<" \t This is the fun project developed by the Hari, using the filehandeling in C++ ^...^"<<endl<<endl;
		file1<<"OPEN"<<endl;
		cout<<"What is your Name?"<<endl;
		cin>>name;
		file1<<name<<endl;
		file1<<"The name of the owner is "<<name<<endl<<endl;
	}
	file1<<"The file is successfully opend at"<<endl;
	file1<<dateandtime<<endl<<endl;
	GotoLine(file1,2);
	file1>>name;
	int choice=0;
	while(choice!=5){
	tm *sstimedate = localtime(&now);
	cout<<"Hello, "<<name<<endl<<endl;
	cout<<"I can do this for you"<<endl;
	cout<<"1--> Ask for a time and date"<<endl;
	cout<<"2--> Ask your name"<<endl;
	cout<<"3--> Ask me for time"<<endl;
	cout<<"4--> Ask me for date"<<endl;
	cout<<"5--> Exit"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"The Time and Date is\t "<<dateandtime<<endl;
		file1<<name<<" ask for time and date: "<<dateandtime<<endl;
	}
	if(choice==2)
	{
		cout<<"Your name is\t"<<name<<endl;
		file1<<name<<" ask for name : "<<name<<endl;
	}
	if(choice==3)
	{
		cout<<"The time is\t"<<sstimedate->tm_hour<<":"<<sstimedate->tm_min<<":"<<sstimedate->tm_sec<<endl;
		file1<<name<<" ask for time: "<<sstimedate->tm_hour<<":"<<sstimedate->tm_min<<":"<<sstimedate->tm_sec<<endl;
	}
	if(choice==4)
	{
		cout<<"The date is\t"<<1900+sstimedate->tm_year<<"/"<<1+sstimedate->tm_mon<<"/"<<sstimedate->tm_mday<<endl;
		file1<<name<<" ask for date: "<<1900+sstimedate->tm_year<<"/"<<1+sstimedate->tm_mon<<"/"<<sstimedate->tm_mday<<endl;
	}
	if(choice==5)
	{
		file1<<"The file is successfully closed at \t"<<dateandtime<<endl;
		file1<<"-------------------------------------"<<endl<<endl;
		return 0;
	}
	char enter;
	cout<<"\n\nPress any character and enter to continue:";
	cin>>enter;cout<<"\n";
	}
	return 0;
}


