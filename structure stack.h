#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
#define MAX 1000
struct STACK{
	int A[MAX];
	int top=-1;
	// Push an element into the stack
	void push(int val){
		if(isfull()){
			cout<<"stack overflow\n";
			return;
		}
		A[++top]=val;
	}
	// Pop the top element
	int pop(){
		if(isempty()){
			cout<<"stack underflow\n";
			return -1;
		}
		return A[top--];
	}
	// Peek at the top element
	int peek(){
		if(isempty()){
			cout<<"stack is empty\n";
			return -1;
		}
		return A[top];
	}
	// Check if the stack is empty
	bool isempty(){
		return top==-1;
	}
	// Check if the stack is full
	bool isfull(){
		return top==MAX - 1;
	}
	// Display all elements
	void display() {
		if (isempty()){
			cout<<"stack underflow\n";
			return;
		}
		for(int i=top;i>=0;i--){
			cout << A[i] << " ";
		}
		cout << "\n";
	}
};
#endif

