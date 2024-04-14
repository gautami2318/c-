#include<iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Input a character:";
	cin>>button;
	switch (button)
	{
		case 'a':
			cout<<"Hello"<<endl;
			break;
		case 'b':
			cout<<"Namaste"<<endl;
			break;
		case 'c':
			cout<<"Welcome"<<endl;
			break;	
		case 'd':
			cout<<"Bravo"<<endl;
			break;	
		case 'e':
			cout<<"Good morning"<<endl;
			break;
		default:
		cout<<"I am still learning more"<<endl;
		break;		
	}
	return 0;
}
