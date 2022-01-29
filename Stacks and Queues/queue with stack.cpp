#include <bits/stdc++.h> 
using namespace std; 

stack<int> stack1, stack2; 

void enqueue(int x){ 
	
	while (!stack1.empty())
		{ 
		stack2.push(stack1.top()); 
		stack1.pop();
		}
		 
	stack1.push(x);
	 
	while (!stack2.empty())
		{ 
		stack1.push(stack2.top()); 
		stack2.pop();
		}
	}  


int dequeue() { 
	if (stack1.empty()){ 
		cout<<"underflow"; 
		exit(0);
		}
		 
	int x = stack1.top(); 
	stack1.pop(); 
	return x;
}  

void PrintStack(){
    if (stack1.empty())
        return;
    int x = stack1.top();
    stack1.pop();
    cout<<x<<" ";
    PrintStack();
    stack1.push(x);}

int main(){
    int a,choice;
    printf("QUEUE USING STACKS\n");
    printf("1.enqueue \n2.Dequeue \n3.Exit");  
    while(1){ cout<<"queue: ";PrintStack();
        printf("\n\nchoice:");
        scanf("%d",&choice);
        
        switch(choice){
        
			case 1:{ 
				cin>>a;
        		enqueue(a);
				break;
				}
        
			case 2:{
        		cout<<"dequeued: "<<dequeue()<<"\n";
				break;
				}
        
			case 3:{
        		printf("exit");
				exit(0);
				}
        
			default:{
        		printf("INVALID CHOICE");
				break;
				}
		}
	}
	return 0;} 
