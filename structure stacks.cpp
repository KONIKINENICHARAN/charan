#include"queue.h"
using namespace std;
int main(){
	enqueue(10);
	enqueue(20);
	display();
	isfull();
	peek();
	dequeue();
	display();
	isempty();
	peek();
	dequeue();
	dequeue();
	isempty();
}
