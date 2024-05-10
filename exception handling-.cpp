#include<iostream>
using namespace std;
int mian()
{
	int num1,num2;
	cout<<"enter the value of num1 and num2\n"<<endl;
	cin>>num1>>num2;
	cout<<"\nSTARTn\";
	try
	{
		cout<<"inside try block\n";
		if(num 2==0)
		{
			throw num2;
			cout<<"error";
			
		}
		else
		{
			float result=(float)num1/num2;
			cout<<"Division of given numbers:"<<result<<endl;
		}
	}
	catch(int i)
	{
		cout<<"caught an exception trying to divide by zero:";
		cout<<i<<"\n";
	}
	cout<<"end"<<endl<<endl;
}
