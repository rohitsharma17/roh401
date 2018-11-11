#include<iostream>
using namespace std;
int main(){
	
	int i,n,pos,larg,sec_larg,arr[20];
	
	cout<<"enter the no, of elements";
	cin>>n;
	
	cout<<"entre the value of elements";
	
	for(i=0;i<n;i++){
		
		cin>> arr[i];
		
	}
	
	larg=arr[0];
	
	
	{
		
		for(i=0;i<n;i++){
			
			if(arr[i]>larg){
				
				larg=arr[i];
			}
			
			
		}
		
		sec_larg = arr[1];
		for(i=0;i<n;i++){
			if(arr[i] != larg){
				if(arr[i]>sec_larg){
				
				
				sec_larg = arr[i];
			}
			}
		}
		
	
		cout<<"the largest no. is :"<<larg<<endl;
		cout<<"the second largest no. is :"<<sec_larg<<endl;
		
		
		
	}
}
