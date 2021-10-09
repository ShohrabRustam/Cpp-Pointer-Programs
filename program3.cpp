#include<iostream>
using namespace std;
	// about pointer class  2
int main()
{
	int a=1025;
	int *p;
	p=&a;
	cout<<"size of interger : "<<sizeof(int)<<endl;
	cout<<"address : "<<p<<" value : "<<*p; 
	cout<<"typecasting :" <<endl;
	char *p0;
	p0=(char*)p;
	cout<<"size of the char is : "<<sizeof(char)<<endl;
	cout<<"Address char pointer is : "<<p0<<"  value : "<<*p<<endl;
	return 0;
}
