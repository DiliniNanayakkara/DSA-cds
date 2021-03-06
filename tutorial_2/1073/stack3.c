#include<stdio.h>

int MAXSIZE =10; // Declaring the maximum size of the stack 
int stack[10];   
int top = -1,j=0;
int x[10];

int peek(){			// peek function to display the top element of the stack
	return stack[top];
}

int isFull(){		// isFull function to check whether the stack is full or not 
	if(top==MAXSIZE)
		return 1;
	else
		return 0;
}

int isEmpty(){		// isEmpty function to check whether the stack is empty or not 
	if(top==-1)
		return 1;
	else
		return 0;
}

int pop(){			//pop function to delete the top element of the stack 
	if(!isEmpty()){
		int value;
		value = stack[top];
		top =  top -1;
		return value;
	}
	else
		printf("Stack is empty, cannot pop elements\n");
}

void push(int value){		// push function to insert elements into the stack 
	if(!isFull()){
		top = top + 1;
		stack[top] = value;
	}
	else
		printf("Stack is full, cannot insert more...\n");
	}

void outPut(){
		printf("Elements of the stack are shown below...\n");
		while(!isEmpty())
		{
		int data = pop();
		printf("%d\n",data);
		
		}
	}
// method for reversing the stack
void reverse(int i){
     x[i]= pop();

    if(!isEmpty()){
        
        reverse(i+1);
    }
     push(x[j]);
     j++;
}

// Start of the main function....
int main(){
	
	
	//inserting 6 elements to the stack using push function 
	push(23);
	push(64);
	push(21);
	push(48);
	push(97);
	push(83);
	
	
	
    reverse(0);
    printf("Here's the reversed Stack\n");
    outPut();


	
	return 0;
	
}