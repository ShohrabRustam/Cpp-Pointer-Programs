#include<iostream>
using namespace std;
int square(int x)
{
	return x*x;
}
int squareofsum(int x,int y)
{
	int z=square(x+y);
	return z;
}
int main()
{ 
cout<<"pointers and dynamics memory :"<<endl;
int a=4,b=8;
int total=squareofsum(a,b);
cout <<total; 
	return 0;
}
