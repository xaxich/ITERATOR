#pragma once
#include <iostream>
#include <cctype>
#include "Node.h"
#include "iterator.h"
using namespace std;

class List {
	Node* head = nullptr;
	Node* tail = nullptr;
public:
	friend std::ostream& operator <<(std::ostream& os, const Node& node);
	using iterator = ForwardIterator;


	void AddElem(int val) {

		if (!head) {
			head = new Node(val);
			tail = head;
			return;
		}
		Node* current = new Node(val, nullptr, nullptr);
		tail->next = current;
		current->prev = tail;
		tail = current;
	}
	iterator begin() {
		return iterator(head);
	}
	iterator end() {
		return iterator(nullptr);
	}

	void PrintList() {
		if (!head) {
			cout << " nothing" << '\n';
			return;
		}

		for (Node* node = head; node != nullptr; node = node->next) {
			cout << node->data << " ";
		}
		cout << '\n';
	}

	void DeleteList() {
		if (!head) {
			std::cout << "spisok pust" << std::endl;
			return;
		}
		while (head->next != nullptr) {
			Node* nodeDelete = head;
			head = head->next;
			delete nodeDelete;
		}
		delete head;
		head = nullptr;
	}
};