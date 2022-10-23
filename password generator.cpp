#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <windows.h>
#include <conio.h>
using namespace std;
string in;
string name;
string user;
int x,c;
string y;
string password="";
char pass[75]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
               'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',
               '1','2','3','4','5','6','7','8','9','0',' ','!','@','#','$','%','^','&','*','(',')'};


int main()
{
	cout<<"*********************************PASSSWORD GENERATOR************************************ \n";
	cout<<"press 1 to generate a password  \npress 2 to view existing passwords \n";
	cin>>c;
	if (c==1)
	{
	cout<<"please enter website or application name \n";
	cin>>name;
	cout<<"please enter the username for the password \n";
	cin>>user;
	srand(time(NULL));

	
	for (int i=1; i<=16 ;i++ )
	{
		x=rand()%72+1;
		password=password+pass[x];
	}
	cout<<"the random password is :  "<<password<<endl;
	
	
	
	
	fstream passes;
	passes.open("xyz.txt",ios::out|ios::app|ios::in);
	passes<<name<<" "<<user<<":"<<password<<endl;
	cout<<"password saved successfully \n";
	passes.close();
	
	
//    ifstream pass("xyz.txt");
//        getline(pass,y);
//        cout<<y;
	
	cout<<"press spacebar to copy to clipboard";
	in = getch();
	if (in==" ")
	{
	const char* output=password.c_str();
    const size_t len = strlen(output) + 1;
    HGLOBAL hMem =  GlobalAlloc(GMEM_MOVEABLE, len);
    memcpy(GlobalLock(hMem), output, len);
    GlobalUnlock(hMem);
    OpenClipboard(0);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hMem);
    CloseClipboard();
}
}
	else if (c==2)
	{
	ifstream read;
	read.open("xyz.txt");
	while(!read.eof())
	{
	getline(read,y);
	cout<<y<<endl;
}
	}
	system("pause");
	return 0;
	
}
