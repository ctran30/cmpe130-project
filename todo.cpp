#include "todo.h"


ToDoList::ToDoList()
{
	maxSize = 100;
	tasks = 0;
	list = new ToDoList[maxSize];
	nextTask = 0;
	taskName = 'a';
	dueDate = '00/00';
	priority = 0;

}

bool ToDoList::addToList(string name, string date, int p)
{
	if(tasks == maxSize)
	{
		return false;
	}
	list[tasks].taskName = name;
	list[tasks].dueDate = date;
	list[tasks].priority = p;
	tasks++;
	return true;
}


void ToDoList::getNextTask(ToDoList *list)
{
	string name, date;
	int p = 0;
	if(tasks == 0)
	{
		cout << "There are no tasks!" <<endl;
	}

	if(nextTask == maxSize)
	{
		nextTask = 0;
		name = list[nextTask].taskName;
		date = list[nextTask].dueDate;
		p = list[nextTask].priority;
		nextTask++;
	}
	print(name, date, p);

}

int ToDoList::search(string name) {
	int i = 0;
	string target;
	if (tasks == 0) {
		cout << "There are no tasks!" << endl;
	}
	else {
		while (true) {
			if (list[i].taskName == name) {
				return i;
			}
			i++;
		}
	}
	return 0;

}

void ToDoList::print(string name, string date, int p)
{
	cout << "Task: " << name <<endl;
	cout << "Date: " << date <<endl;
	cout << "Priority: " << p <<endl;
}

void ToDoList::printList()
{
	for(int i = 0; i < maxSize; i++)
	{
		cout << "Task: " << list[i].taskName <<endl;
		cout << "Date: " << list[i].dueDate <<endl;
		cout << "Priority: " << list[i].priority <<endl;
	}



}
