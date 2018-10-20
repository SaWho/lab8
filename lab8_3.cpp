//to find the kth largest number and kth smallest number
#include <iostream>
using namespace std;
int klarge(int a[],int size,int k)
{
	int s[size]; int j=0;

	//segregating all the numbers(from a sorted array) and putting them in an array

	for(int i=0;i<size-1;i++)
	{
		if(a[i]!=a[i+1])
		{	s[j]=a[i];
			j++;
		}
	}
	s[j]=a[size-1];

	//returning the kth array element after segregation

	for(int i=0;i<j;i++)
		if(i==(k-1))
			return s[i];
}

//sorting

void sort(int a[],int n)
{
	int s1;
	for (int i=0;i<n-1;i++)
		for(int j=0;j<n-i-1;j++)
			if(a[j]<=a[j+1])
			{
				s1=a[j];
				a[j]=a[j+1];
				a[j+1]=s1;
			}
		
}

//same as klarge but for kth smaller

int ksmall(int a[],int size,int k)
{
	int s[size]; int j=0;
	for(int i=0;i<size-1;i++)
	{
		if(a[i]!=a[i+1])
		{	s[j]=a[i];
			j++;
		}
	}
	s[j]=a[size-1];
	for(int i=j;i>=0;i--)
		if(i==(j-k+1))
			return s[i];
}

int main()
{
	int n,k;

	//user prompt

	cout<<"Enter a the size of the array"<<endl;
	cin>>n;
	cout<<"Enter the value of k"<<endl;
	cin>>k;
	int a[n];
	cout<<"Enter the values of the array"<<endl;
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,n);
	cout<<"The kth largest number is "<<klarge(a,n,k)<<endl;
	cout<<"The kth smallest number is "<<ksmall(a,n,k)<<endl;

	return 0;
}
