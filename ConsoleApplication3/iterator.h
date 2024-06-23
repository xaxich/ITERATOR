#pragma once
#include "Node.h"
#include <iostream>
#include <cctype>


class ForwardIterator {
	Node* ptr;

public:
	ForwardIterator(Node* startNode) : ptr(startNode) {}

	int& operator* () {
		return ptr->data;
	}

	ForwardIterator operator++() {
		int pr = ptr->data;
		Node* pt = ptr;

		while (pt->next != nullptr) {
			pr *= pt->data;
			pt = pt->next;
			if (pt->data == pr) return pt;
		}
		return nullptr;

	}
	bool operator==(const ForwardIterator& other)const {
		return ptr == other.ptr;
	}
	bool operator!=(const ForwardIterator& other) const {
		return !(*this == other);

	}
};