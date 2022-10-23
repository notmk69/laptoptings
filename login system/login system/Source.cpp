#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
int x = 0,y=0, roll;
string pass,cpass;
char in;



int main()
{
	cout << "welcome to student portal"<<endl;
	while (x==0)
	{
		cout << "for login press 'l'" << endl << "for sign up press 's'"<<endl;
		 in = _getch();
		if (in != 'l' || in != 's')
		{
			cout << "enter a valid option";
			continue;
		}
		else
		{
			x = 1;
		}
		if (in == 's')
		{
			cout << "enter your roll number\n";
			cin >> roll;
			while (y == 0)
			{
				cout << "enter a new pass\n";
				cin >> pass;
				cout << "confirm pass \n";
				cin >> cpass;
				if (pass != cpass)
				{
					cout << "passwords do not match";
					continue;
				}
				else y=1;
			}
			fstream passes;
			passes.open("student_info.txt", ios::in | ios::app | ios::out);
			passes << roll << pass << endl;
			cout << "sign up successful" << endl << "going to main page" << endl;
			continue;
		}
	}
	if (in == 'l')
	{
		cout << "enter roll number";
		cin >> roll;
		cout << "enter password";
		cin >> pass;
	}






}


