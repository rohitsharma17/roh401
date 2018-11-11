#include<iostream>
#define MAX_SIZE 100

using namespace std;

int main()
{
	int item,choise,i;
	int arr_queue[MAX_SIZE];
	int rear=0;
	int front=0;
	int exit=1;
	
	do{
		
		cout<<"\n## Queue main menu";
		cout<<"\n.1Insert\n2.Delete\n.3Display\nother to exit";
		cout<<"enter ur choise";
		
		cin>>choise;
		
		switch(choise){
			case 1:
				if(rear==MAX_SIZE)
				cout<<"\n##queue is full";
				
				else{
					cout<<"enter the values inserted";
					
					cin>>item;
					
					cout<<"\n## position :"<<rear +1 <<",Inserted value:"<<item; arr_queue[rear++]=item;
				}
				break;
				
			case 2:
			  if(rear=front)
			  
			  cout<<"\n## queue is empty";
			  
			  else{
			  	
			  	cout<<"\n## position:"<<front<<",removable value:"<<arr_queue[front];front++;
			  	
			  }	
			  
			  break;
			  
			 case 3:
			   cout<< "\n## Queue Size:"<<(rear-front);
			   
			   for(i=front;i<rear;i++)
			   {
			   	cout<<"\n## position:"<<i<<",value:"<<arr_queue[i];
			   	
			   	break;
			   }
			   
			   default:
			   	exit=0;
			   	break;
			   	
			   	
			   	
				
				
		}
		
	}
	while(exit);
	
	return 0;
}

