
#include <iostream>
#include <cctype>
#include "Node.h"
#include "iterator.h"
#include "List.h"

using namespace std;

int main()
{

	List<Teacher> list1;

	list1.AddElem(Teacher("Prilepkina", "Elena", "Gumarovna", "Matan", 1));
	list1.AddElem(Teacher("Fedyunin", "Ilya", "Maximovich", "Ne matan", 2));
	list1.AddElem(Teacher("Polishyuk", "Danil", "Vitalevich", "Prog", 3));
	list1.AddElem(Teacher("f", "s", "s", "Matan", 6));
	list1.AddElem(Teacher("g", "g", "g", "Matan", 36));
	list1.AddElem(Teacher("e", "e", "e", "Matan", 2));
	list1.AddElem(Teacher("r", "r", "r", "Matan", 2592));
	
	
	list1.PrintList();
	
	for (ForwardIterator<Teacher> it = list1.begin(); it != nullptr; ++it) {
		cout << "Cabinet: " << (*it).CabinetNumber << ", Teacher: " << (*it).teacher_surname << " " << (*it).teacher_name << " " << (*it).teacher_patronymic << ", Subject: " << (*it).teacher_subject << endl;
	}
	
	list1.DeleteList();
	list1.PrintList();
	return 0;
}