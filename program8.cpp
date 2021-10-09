#include<iostream>
using namespace std;
int main()
{ 
cout<<"Pointers And Array"<<endl;
int A[]={2,4,6,8,10};
for (int i=0;i<5;i++)
{
	cout<<"Address with & : "<<&A+i<<endl;
	cout<<"Address without & : "<<A+i<<endl;
	cout<<"values by * : "<<*(A+i)<<endl;
	cout<<"values by loop: "<<A[i]<<endl; 
}


	return 0;
}
