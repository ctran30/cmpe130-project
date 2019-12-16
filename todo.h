#ifndef TODO_H_
#define TODO_H_
#include <string>
#include <iostream>
#include <iomanip>
#include <stdbool.h>
using namespace std;



class ToDoList{
public:
	ToDoList();
	bool addToList(string name, string date, int p);
	void getNextTask(ToDoList *list);
	int search (string name);
	void printList();
	void print(string name, string date, int p);

private:
	ToDoList *list;
	int tasks;
	int nextTask;
	int maxSize;
	string taskName;
	string dueDate;
	int priority;
};



#endif /* TODO_H_ */
