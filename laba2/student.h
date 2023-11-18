#pragma once
#include <iostream>
using namespace std;

class Student {
	string Surname;
	int numb_of_group;
	string subjects[10];
	int sredniy_ball;
	int numb_of_subjects;
	int marks[10];
public:
	Student(){}

	void set_sredniy_ball(int new_ball){}
	void set_student() {}

	string get_subject(int n1) {}
	string get_Surname() {}
	int get_numb_of_group() {}
	int get_numb_of_subjects(){}
	int get_sredniy_ball(){}
	int proverka_if_2(){}

	void poisk_sredniy_ball(){}
	void show_for_2(){}
};
 
Student::Student() {
	n = 0;
}

void Student::set_student() {
	cout << "Enter name: ";
	cin >> Surname;
	cout << "Enter number of group: ";
	cin >> numb_of_group;
	cout << "Enter number of subjects: ";
	cin >> numb_of_subjects;
	for (int i = 0; i < numb_of_subjects; i++) {
		cout << "Enter the " << i+1 << "subject: ";
		cin >> subjects[i];
		cout << "Enter mark for " << marks[i] << ": ";
		cin >> marks[i];
	}

}

int Student::get_numb_of_group() {
	return numb_of_group;
}

int Student::get_sredniy_ball() {
	return sredniy_ball;
}

int Student::get_numb_of_subjects() {
	return numb_of_subjects;
}

string Student::get_subject(int n1) {
	return subjects[n1];
}

string Student::get_Surname() {
	return Surname;
}

void Student::poisk_sredniy_ball() {
	int sredniy_ball1;
	for (int i = 0; i < n; i++) {
		sredniy_ball1 += marks[i];
	}
	sredniy_ball = sredniy_ball1 / numb_of_subjects;
}

void Student::set_sredniy_ball(int new_ball) {
	sredniy_ball = new_ball;
}

void Student::show_for_2() {
	cout << Surname << "   " << numb_of_group << endl;
}

int Student::proverka_if_2() {
	for (int i = 0; i < numb_of_subjects; i++) {
		if (marks[i] == 2) {
			return 1;
		}
	}
	return 0;
}

class array_Students {
	Student* array = new Student[100];
	int n1;
public:
	array_Students(){}

	int get_n1(){}

	void po_vozrastaniu(){}
	void show_if_2(){}
};

array_Students::array_Students() {
	n1 = 0;
}

int array_Students::get_n1() {
	return n1;
}

void array_Students::po_vozrastaniu() {
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < i - 1; j++) {
			if (array[i].get_sredniy_ball() < array[j].get_sredniy_ball()) {
				int t = array[i].get_sredniy_ball();
				array[i].set_sredniy_ball(array[j].get_sredniy_ball());
				array[j].set_sredniy_ball(t);
			}
		}
	}
}

void array_Students::show_if_2() {
	int flag_na_2 = 0;
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < array[i].get_numb_of_subjects(); j++) {
			if (array[j].proverka_if_2()) {
				array[i].show_for_2();
			}
		}
	}
}