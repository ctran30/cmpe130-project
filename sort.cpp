#include "sort.h"

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int a, int b)
{
	adj[a].push_back(b);	//add b to a's list
}

void Graph::topologicalSortRec(int n, bool visited[], stack<int> &stack)
{
	visited[n] = true;

	list<int>::iterator i;

	for(i = adj[n].begin(); i != adj[n].end(); ++i)
	{
		if(!visited[*i])
		{
			topologicalSortRec(*i, visited, stack);
		}
	}
	stack.push(n);
}

void Graph::topologicalSort()
{
	stack<int> stack;
	bool *visited = new bool[V];
	for(int i = 0; i < V; i++)
	{
		visited[i] = false;
	}

	for(int i = 0; i < V; i++)
	{
		if(visited[i] == false)
		{
			topologicalSortRec(i, visited, stack);
		}
	}
	while(stack.empty() == false)
	{
		cout << stack.top() << " ";
		stack.pop();
	}

}

