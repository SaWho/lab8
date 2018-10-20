//to sum all the elements of an array
#include <iostream>
using namespace std;

//define function that sums the elements of the array and returns the sum

int sum(int arr[],int n)
{
	int i,s=0;
	for (i=0;i<n;i++)
		s+=arr[i];
	return s;
}

//to input the values from the user

void def(int arr[],int n)
{
	cout<<"Enter the values of the array "<<endl;
	for(int i=0;i<n; i++)
		cin>>arr[i];
}


int main()
{
	int n; 
	
	//user prompt
	
	cout<<"Enter the size of the array"<<endl;
	cin>>n;

	//function call

	int arr[n];
	def(arr,n);
	cout<<"The value of the sum of the elements in the array is "<<sum(arr,n)<<endl;
	return 0;

}
