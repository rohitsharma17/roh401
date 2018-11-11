#include<iostream>
using namespace std;
int main()
{
	int i,m,n1,n2,arr1[10],arr2[15],arr3[20],pos=0;
	
	cout<<"enter the no of elements of array 1";
	cin>>n1;
	
	cout<<"enter the elements od array 1";
	
	for(i=0;i<=n1;i++)
	{
		cout<<arr1[i];
		cin>>arr1[i];
		
	}
	
	cout<<"enter the no of elements of second array";
	cin>>n2;
	
	cout<<"enter the elements of second array";
	
	for(i=0;i<=n2;i++)
	{
		cout<<arr2[i];
		cin>>arr2[i];
	}
	m=n1+n2;
	
	for(i=0;i<=n1;i++)
	{
		arr3[pos]=arr1[i];
		pos++;
	}
	for(i=0;i<=n2;i++)
	{
		arr3[pos]=arr2[i];
		pos++;
		
		
	}
	cout<<"the merged array is";
	
	for(i=0;i<=m;i++)
	{
		cout<<arr3[i];
	}
	
	
	return 0;
}
