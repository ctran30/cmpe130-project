#include <iostream>
#include "sort.h"
#include "todo.h"
using namespace std;


int main() {

	char exit = 'n';
	int choice = 0;

	while(exit = 'n')
	{
		cout << "Welcome to QuickTask: Easy To-Do List!" <<endl;
		cout <<"Choose an option: " <<endl;
		cout <<"1. Create new task" <<endl;
		cout <<"2. Show next task in my list" <<endl;
		cout <<"3. Search for a task" <<endl;
		cout <<"4. Modify a task" <<endl;
		cout <<"5. Remove a task" <<endl;
		cout <<"6. Print out all my tasks" <<endl;

		cin >> choice;

		if(choice == 1)
		{
			string name, description;
			int month, day, year;

			cout <<"Enter your task name: " <<endl;
			cin >> name;
			cout <<"Enter the month of completion(ex. 5 for May): " <<endl;
			cin >> month;
			cout <<"Enter the day of completion(ex. 15): " <<endl;
			cin >> day;
			cout <<"Enter the year of completion(ex. 2019): " <<endl;
			cin >> year;
			cout << "Enter a short description or details: " <<endl;
			cin >> description;



		}


	}







	return 0;
}

