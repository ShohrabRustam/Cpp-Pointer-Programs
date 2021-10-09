#include<iostream>
using namespace std;
void increment(int *p)//local variable
{
	*p=*p+1;
}

int main()
{ 
int a;//local variable
a=10; 
	cout<<"pointer as arguments -> called Call By Reference "<<endl;
	increment(&a);
	cout<<a;
	return 0;
}
