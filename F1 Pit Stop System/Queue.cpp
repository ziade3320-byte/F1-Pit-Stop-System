#include "Queue.h"
Queue::Queue() {
	rear = nullptr;
	front = nullptr;
}
void Queue:: enqueue(Car car) {
	Node* newNode = new Node(car);
	if (isEmpty()) {
		front = rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}
}

void Queue::dequeue() {
	if (isEmpty()) {
		cout << "Queue is empty. Cannot dequeue." << endl;
		return;
	}
	Node* temp = front;
	front = front->next;
	delete temp;
	if (front == nullptr) {
		rear = nullptr;
	}
}

void Queue::peek() {
	if (isEmpty()) {
		cout << "Queue is empty. Cannot peek." << endl;
		return;
	}
	cout << "DriverName:" << front->data.DriverName << endl;
	cout << "Team:" << front->data.Team << endl;
	cout << "LapNumber:" << front->data.LapNumber << endl;
	cout << "ServiceType:" << front->data.ServiceType << endl;
}

bool Queue::isEmpty() {
	return front == nullptr;
}

void Queue::display() {
	if (isEmpty()) {
		cout << "Queue is empty." << endl;
		return;
	}
	Node* current = front;
	while (current != nullptr) {
		cout << "DriverName:" << current->data.DriverName << endl;
		cout << "Team:" << current->data.Team << endl;
		cout << "LapNumber:" << current->data.LapNumber << endl;
		cout << "ServiceType:" << current->data.ServiceType << endl;
		current = current->next;
	}
}

