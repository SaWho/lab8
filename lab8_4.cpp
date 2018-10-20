//to merge 2 arrays and display the max and min of each array
#include <iostream>
using namespace std;

//max calc

int max(int a[], int n)
{
	int h=a[0];//assuming highest element
	for(int i=0; i<n;i++)
		if (a[i]>=h)
			h=a[i];//replacing the highest with a higher element if found
	return h;
}

//min calc

int min(int a[], int n)
{
	int h=a[0];//same as max but for min
	for(int i=0; i<n;i++)
		if (a[i]<=h)
			h=a[i];
	return h;
}
int main()
{
	int n,j,m;

	//user prompt

	cout <<"Enter the size of the first array "<<endl;
	cin >>j;
	cout <<"Enter the size of the second array "<<endl;
	cin>>m;
	n=j+m;
	int a1[j],a2[m],a[n];
	cout <<"Enter the values of the first array"<<endl;
	for(int i=0 ;i<j;i++)
		cin>>a1[i];
	cout <<"Enter the values of the second array"<<endl;
	for(int i=0 ;i<m;i++)
		cin>>a2[i];
	for (int i=0;i<n;i++)
		if(i<j)
			a[i]=a1[i];
		else
			a[i]=a2[i-j];
	cout<<"The merged array is ";

	for (int i; i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	cout<<"The max value of the first array is "<<max(a,j)<<endl;
	cout<<"The max value of the second array is "<<max(&a[j],m)<<endl;
	cout<<"The min value of the first array is "<<min(a,j)<<endl;
	cout<<"The min value of the second array is "<<min(&a[j],m)<<endl;
	return 0;
}
