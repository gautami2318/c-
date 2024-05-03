#include<iostream>
using namespace std;
class A
{
	public:
		virtual void show() 
		{
			cout<<"hello base class\n";
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"hello derived class\n";
		}
};
int main()
{
	A aobj;
	B bobj;
	A*bptr;
	bptr=&aobj;
	bptr->show();
	bptr=&bobj;
	bptr->show();
}

