#include<iostream>
using namespace std;

int main(){
	
	int i,n,pos,small,arr[20];
	
	cout<<"enter the no. of elements";
	cin>>n;
 
 	cout<<"entre the elemnts";
 
 for(i=0;i<n;i++){
 
 	cin>> arr[i];
 }	
	
	small = arr[0];
	pos= 0;
	
	for(i=0;i<n;i++){
		
		if(arr[i]<small){
			
			small = arr[i];
			pos=i;
		}
	}
	
	cout<<"the smallest no is ="<<small<<endl;
	cout<<"the pos of smalest elemsnt is :"<<pos<<endl;
	
	return 0;
}

