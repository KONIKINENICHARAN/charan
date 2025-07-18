#include"stack.h"
using namespace std;
int main(){
	push(10);
	push(20);
	display();
	isfull();
	peek();
	pop();
	display();
	isempty();
	peek();
	pop();
	pop();
	isempty();
}
