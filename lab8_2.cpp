//to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. 
#include <iostream>
using namespace std;

//function for largest value in the array

int largest(int a[],int n)
{
	int h=a[0];//assumption of the current highest
	for(int i=0; i<n; i++)
		if(a[i]>=h)
			h=a[i];//if the value of an element is bigger than the assumed highest it replaces it with the element
		return h;
}

int smallest(int a[], int n)
{
	int s=a[0];//assumes smallest
	for(int i=0;i<n;i++)
		if(a[i]<=s)
			s=a[i];//replaces the smallest variable if a smaller element is found
	return s;
}

//sort for ease

void sort(int a[],int n)
{
	int k[n];
	for(int i=0;i<n;i++)
	{
		k[i]=smallest(a,n-i);
		for(int j=0;j<n;j++)
			if(a[j]==k[i])
				{
					a[j]=a[n-i-1];
					break;
 				}	
	}
	for(int i=0; i<n; i++)
		a[i]=k[i];
}

//mean calculation

float mean(int a[],int n)
{
	int s=0;
	for(int i=0;i<n; i++)
		s+=a[i];
	return (float)s/n;
}

//median calc

float median(int a[],int n)
{
	
	if(n%2==0)
		return (float)((a[(n/2)-1]+a[(n/2)])/2);
	else
		return (float)a[((n+1)/2)-1];
}

//mode calc

int mode(int a[],int n)
{
	int p[n],c=1,h;

	//counting the number of occurence and putting it in an array preserving the index position of each element of original array

	for(int i=0;i<n-1;i++)
	{
		if(a[i]==a[i+1])
		{	c++;
			p[i]=0;
		}
	else
	{
		p[i]=c;
		c=1;
	}
	}
	p[n-1]=c;
	h=0;

	//check the highest occurence and return the original element corresponding to that occurence

	for(int i=0;i<n;i++)
	{
		if(p[i]>=p[h])
			h=i;
	}
	return a[h];
}
int main()
{
	int n; 
	//user prompt

	cout<<"Enter the size of the array."<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the values of the array"<<endl;
	for(int i=0; i<n;i++)
	cin>>a[i];
	sort(a,n);
	cout<<"The largest number is "<<largest(a,n)<<endl;
	cout<<"The smallest number is "<<smallest(a,n)<<endl;
	cout<<"The mean number is "<<mean(a,n)<<endl;
	cout<<"The median number is "<<median(a,n)<<endl;
	cout<<"The mode number is "<<mode(a,n)<<endl;
	return 0;
}
