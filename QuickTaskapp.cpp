
#include <iostream>
#include "sort.h"
#include "todo.h"
using namespace std;


int main() {

	ToDoList list;

	int choice = 0;
	char answer;

	while(choice <= 4)
	{
		cout << "Welcome to QuickTask: Easy To-Do List!" <<endl;
		cout <<"Choose an option: " <<endl;
		cout <<"1. Create new task" <<endl;
		cout <<"2. Show next task in my list" <<endl;
		cout <<"3. Search for a task" <<endl;
		cout <<"4. Print out all my tasks" <<endl;

		cin >> choice;

		if(choice == 1)
		{
			string name, date;
			int priority;

			cout <<"Enter your task name: " <<endl;
			cin >> name;
			cout <<"Enter the date of completion(mm/dd): " <<endl;
			cin >> date;
			cout << "Enter the priority of this task from 1-5(1 being not important and 5 being very important: " <<endl;
			cin >> priority;

			list.addToList(name, date, priority);

		}else if(choice == 2)
		{

			ToDoList getNextTask();

		}else if(choice == 3)
		{

			ToDoList search();

		}else if(choice == 4)
		{
			list.printList();
		}else
		{
			cout << "Invalid Option!" << endl;
		}
		cout << "Would you like to exit? y/n" <<endl;
		cin >> answer;


	}
	return 0;
}
