#pragma once
#include"Node.h"
class Queue {
private:
	Node* rear;
	Node* front;
public:
	Queue();
	void enqueue(Car car);
	void dequeue();
	void peek();
	bool isEmpty();
	void display();
};

