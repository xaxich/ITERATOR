#pragma once
struct Node {
	int data;
	Node* next;
	Node* prev;

	Node(int val, Node* next = nullptr, Node* prev = nullptr) :
		data(val), next(next), prev(prev) {}
	;

};