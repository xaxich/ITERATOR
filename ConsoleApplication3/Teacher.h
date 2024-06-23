#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Teacher {
    string teacher_surname;
    string teacher_name;
    string teacher_patronymic;
    string teacher_subject;
    int CabinetNumber;

    Teacher(const string& surname, const string& name, const string& patronymic, const string& subject, int number)
        : teacher_surname(surname), teacher_name(name), teacher_patronymic(patronymic), teacher_subject(subject), CabinetNumber(number) {}
};
