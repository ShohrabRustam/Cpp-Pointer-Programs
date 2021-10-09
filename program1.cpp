#include<iostream>
using namespace std;
// about pointer class  1
int main()
{
	
	int a;
	int *p;
	p=&a;
	a=5;
	cout<< p <<endl;
	// for ptint the value of the a use *p
	cout<<*p << endl; // dereferencing
	// for print the address of the p
	cout<< &p<<endl;
	*p=8;
	cout<<a<<endl;
	
	return 0;
}
