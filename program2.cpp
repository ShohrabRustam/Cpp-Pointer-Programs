#include<iostream>
using namespace std;
	// about pointer class  2
int main()
{
	int a=20; 
	int *p=&a;
	// pointer arithmetic
	cout<<p<<endl;
	cout<<"address of the p+1  is :"<<p+1;
	cout<<"the value of p is :"<<*p<<endl;
	cout<<"the value of p+1 is :"<<*(p+1)<<endl;
	cout<<sizeof(int)<<endl;
	
	return 0;
}
