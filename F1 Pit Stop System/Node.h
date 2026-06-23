#pragma once
#include "Car.h"
using namespace std;

class Node {
public:
	Car data;
	Node* next;
	Node(Car data) {
		this->data = data;
		this->next = nullptr;
	}
	};

