#include<iostream>
using namespace std;
int main()
{ 
int A[]={2,4,6,8,10};
int *p;
p=A;
for (int i=0;i<5;i++)
cout<<"the value of a with pointer p is : "<<*(p+i)<<endl;


	return 0;
}
