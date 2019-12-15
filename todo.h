#ifndef TODO_H_
#define TODO_H_
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

struct myTask{
	string taskName;
	string dueDate;
	int priority;
};

class ToDoList{
public:
	ToDoList();
	//ToDoList(string name, string date, int p);
	bool addToList(struct myTask newTask);
	bool addToList(string name, string date, int p);
	bool getNextTask(struct myTask &task);
	bool getNextTask(string &name, string &date, int &p);
	void printList();

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

