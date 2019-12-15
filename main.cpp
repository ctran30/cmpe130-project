#include <iostream>
#include <stack>
/* empty() – Returns whether the stack is empty – Time Complexity : O(1)
size() – Returns the size of the stack – Time Complexity : O(1)
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
pop() – Deletes the top most element of the stack – Time Complexity : O(1)
 */
#include <list>


using namespace std;

void printStack (stack <string> s) {
	while (!s.empty()) {
		cout << '\n' << s.top();
		s.pop();
	}
	cout << '\n';
}

int main() {
	stack <string> tasks;

	tasks.push("CMPE130 HW1");
	tasks.push("CMPE130 HW2");
	tasks.push("CMPE130 HW3");
	tasks.push("CMPE130 Group Project");

	cout << "Your task list:";
	printStack(tasks);
	cout<< "\nThere are (" << tasks.size() << ") tasks in your list.\n";




}
