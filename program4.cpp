#include<iostream>
using namespace std;
// about pointer class  1
int main()
{
	cout<<"pointer to pointer :"<<endl;
	int x=5;
	int *p;
	p=&x;
	int **q;
	q=&p; 
	int ***r;
	r=&q;
	cout<<"the value of the *p is : "<< *p <<endl;
	cout<<"value of *q : "<<*q<<endl;
	cout<<"value of **q : "<<**q <<endl;
	cout<<"value of **r :"<<**r<<endl;
	cout<<"value of the ***r is : "<<***r<<endl;
	**q=*p+2;
	cout<<x;	
	return 0;
}
