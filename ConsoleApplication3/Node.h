#pragma once

template<typename T>
struct Node {
	Node* next;
	Node* prev;
	T data;

	Node(T val, Node* next = nullptr, Node* prev = nullptr) :
		data(val), next(next), prev(prev) {}
	;

};