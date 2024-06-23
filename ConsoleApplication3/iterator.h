#pragma once
#include "Node.h"
#include <iostream>
#include <cctype>

template<typename T>
class ForwardIterator {
	Node<T>* ptr;

public:
	ForwardIterator(Node<T>* startNode) : ptr(startNode) {}
	T& operator* () {
		return ptr->data;
	}

	ForwardIterator<T> operator++() {
		int pr = ptr->data.CabinetNumber;
		Node<T>* pt = ptr;

		while (pt->next != nullptr) {
			pr *= pt->data.CabinetNumber;
			pt = pt->next;
			if (pt->data.CabinetNumber == pr) { 
				ptr = pt;
				return *this;
			};
		}
		ptr = nullptr;
		return *this;

	}
	bool operator==(const ForwardIterator& other)const {
		return ptr == other.ptr;
	}
	bool operator!=(const ForwardIterator& other) const {
		return !(*this == other);

	}
};