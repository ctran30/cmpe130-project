#include "todo.h"

ToDoList::ToDoList()
{
	maxSize = 100;
	tasks = 0;
	list = new ToDoList[maxSize];
	nextTask = 0;
	taskName = "";
	dueDate = "";
	priority = 0;

}

bool ToDoList::addToList(struct myTask task)
{
	if(tasks == maxSize)
	{
		return false;
	}
	else{
		list[tasks++] = task;
	}
	return true;
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

bool ToDoList::getNextTask(struct myTask &task)
{
	if(tasks == 0)
	{
		return false;
	}

	if(nextTask == maxSize)
	{
		nextTask = 0;
		task = list[nextTask];
		nextTask++;
	}
	return true;
}

bool ToDoList::getNextTask(string &name, string &date, int &p)
{
	if(tasks == 0)
	{
		return false;
	}
	
	if(nextTask == maxSize)
	{
		nextTask = 0;
		name = list[nextTask].taskName;
		date = list[nextTask].dueDate;
		p = list[nextTask].priority;
		nextTask++;
	}
	return true;
}


void ToDoList::printList()
{




}
