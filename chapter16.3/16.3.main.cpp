#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

int main()
{
	using namespace std;

	//vector<int> container;
	//for (int i = 0; i < 10; ++i)
	//	container.push_back(i);

	std::list<int> container;
	for (int i = 0; i < 10; ++i)
		container.push_back(i);

	auto itr = min_element(container.begin(), container.end());
	cout << *itr << endl;

	itr = max_element(container.begin(), container.end());
	cout << *itr << endl;

	cout << endl;

	itr = find(container.begin(), container.end(), 3);
	container.insert(itr, 128);

	for (auto& e : container) cout << e << " ";
	cout << endl;

	//sort(container.begin(), container.end());
	container.sort();

	for (auto& e : container) cout << e << " ";
	cout << endl;

	//reverse(container.begin(), container.end());
	container.reverse();

	for (auto& e : container) cout << e << " ";
	cout << endl;

	return 0;

}