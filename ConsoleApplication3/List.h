#pragma once
#include <iostream>
#include <cctype>
#include "Node.h"
#include "iterator.h"
#include "Teacher.h"
using namespace std;

template<typename T>

class List {
	Node<T>* head = nullptr;
	Node<T>* tail = nullptr;
public:
	friend std::ostream& operator <<(std::ostream& os, const Node<T>& node);
	using iterator = ForwardIterator<T>;


	void AddElem(T val) {

		if (!head) {
			head = new Node<T>(val);
			tail = head;
			return;
		}
		Node<T>* current = new Node<T>(val, nullptr, nullptr);
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

		for (Node<T>* node = head; node != nullptr; node = node->next) {
			cout << node->data.CabinetNumber << " ";
		}
		cout << '\n';
	}

	void DeleteList() {
		if (!head) {
			std::cout << "spisok pust" << std::endl;
			return;
		}
		while (head->next != nullptr) {
			Node<T>* nodeDelete = head;
			head = head->next;
			delete nodeDelete;
		}
		delete head;
		head = nullptr;
	}
};