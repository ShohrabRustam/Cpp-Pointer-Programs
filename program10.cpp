#include<iostream>
using namespace std;
int sumofelement(int A[],int size)
{

int i,sum=0;
for (i=0;i<size;i++)
{
sum+=A[i];
}
return sum;
}

int main()
{ 
cout<<"Array as a function "<<endl;
int A[]={1,2,3,4,5};
int size=sizeof(A)/sizeof(A[0]);
cout<<"the sum of the array is : "<<sumofelement(A,size);

	return 0;
}
