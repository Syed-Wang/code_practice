#include <iostream>
#include <map>
using namespace std;
// map is a red-black tree
// map is a key-value pair

int main()
{
	map<string, int> m; // sort in ascending order

	m["Mike"] = 40;
	m["Raj"] = 20;
	m["Vicky"] = 30;

	m.insert(make_pair("Bob", 100));// insert a key-value pair

	for (auto i : m) { // print the map
		cout << i.first << " " << i.second << endl;
	}
	
	return 0;
}