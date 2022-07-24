// CPP program to illustrate the
// list::push_front() function
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main() {

	// Creating a list
	list<int> demoList;

	// Adding elements to the list
	// using push_back()
	demoList.push_back(6);
	demoList.push_back(7);
	demoList.push_back(8);
	demoList.push_back(9);

	// Initial List:
	cout << "Initial List: ";
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
		cout << *itr << " ";

	// Adding elements to the front of List
	// using push_front
	demoList.push_front(5);
	
	// List after adding elements to front
	cout << "\n\nList after adding elements to the front:\n";
	for (auto itr = demoList.begin(); itr != demoList.end(); itr++)
		cout << *itr << " ";

	return 0;

} // End driver
