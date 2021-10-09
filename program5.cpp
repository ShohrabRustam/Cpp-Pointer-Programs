#include<iostream>
using namespace std;
void increment(int a)//local variable
{
	a=a+1;
	cout<<"address of the variable of a in increment :"<<*a<<endl;
}

int main()
{ 
int a;//local variable
a=10; 
	cout<<"pointer function arguments -> called Call By Reference "<<endl;
	cout<<"address of a in main memory is :"<<&a<<endl;
	increment(a);
	cout<<a;
	return 0;
}
