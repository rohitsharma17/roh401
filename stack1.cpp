#include<iostream>
using namespace std;

class stack{
	
	int top;
	public:
		 int arr[10];
		
		stak(){
			top = -1;
		}
		
		void push(int x);
		int pop();
		void isempty();
};

void stack::push(int x)
{
	
	if(top>=10){
		cout<<"overflow";
		
		
	}
	else{
		
		arr[++top]=x;
		cout<<"element inserted";
		
	}
}
	int stack::pop()
	{
		if(top<0){
			cout<<"underflow";
			return 0;
		} 
		else{
			
			int val=arr[top--];
			return val;
		}
	}
	
	void stack::isempty(){
	if(top<0){
		cout<<"empty";
	}
	else{
		cout<<"not empty";
	}
	
	}

int main(){
	cout<<"enter the value to be pushed";
	
	stack st;
	
	st.push(10);
	st.push(100);
	
	st.pop();
}
