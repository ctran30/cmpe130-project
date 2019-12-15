#ifndef SORT_H_
#define SORT_H_
#include<iostream>
#include <list>
#include <stack>
using namespace std;

class Graph{
public:
	Graph(int V);
	void addEdge(int a, int b);
	void topologicalSort();		//print the sort
private:
	int V;	//vertices
	list<int> *adj;
	void topologicalSortRec(int n, bool visited[], stack<int> &stack);		//use recursion for sort
};






#endif /* SORT_H_ */
