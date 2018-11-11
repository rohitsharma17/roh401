#include<stdio.h>

int main(){
	
	int arr[20],i,j,n,swap;
	
	printf("Enter the no. of element \n");
	scanf("%d",&n);
	
	printf("enter the elements \n");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n-1;i++){
		
		for(j=0;j<i-n-1;j++){
			
			if(arr[j]>arr[j+1]){
				
				swap = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]= swap;
				
			}
		}
	}
	
	printf("sorted list in assending order");
	
	for(i=0;i<arr[i];i++){
		printf("%d \n",arr[i]);
	}
	
	
}

