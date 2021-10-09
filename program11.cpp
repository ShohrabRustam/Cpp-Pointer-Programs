#include<iostream>
using namespace std;
void print(char* c)
{
	while (*c!='\0')
	cout<<*c;
	c++;
}
int main()
{ 
cout<<"Character array and pointers :"<<endl;
char ch[5]={'J','H','O','N'}; 
cout<<sizeof(ch)<<endl;
char c[20]="hello";
print(c);
	return 0;
}
