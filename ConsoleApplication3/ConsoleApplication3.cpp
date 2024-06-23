
#include <iostream>
#include <cctype>
#include "Node.h"
#include "iterator.h"
#include "List.h"

using namespace std;

int main()
{

	List list1;

	list1.AddElem(1);
	list1.AddElem(2);
	list1.AddElem(3);
	list1.AddElem(6);
	list1.AddElem(36);
	list1.AddElem(1);
	list1.AddElem(1296);
	list1.AddElem(30);
	list1.AddElem(50388480);

	list1.PrintList();
	
	auto it = list1.begin();
	for (; it != nullptr; it = ++it) {
		cout << *it << ' ';
	}
	cout << endl;
	
	list1.DeleteList();
	list1.PrintList();
	return 0;
}