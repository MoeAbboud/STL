#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <memory>

using namespace std;

void printDeque(deque<int> deck);
void printVector(vector<int> vec);



int main()
{
	vector<int> vec;
	deque<int> deq;

	deq.push_back(35);
	deq.push_front(43);
	deq.push_back(26);
	deq.push_front(52);
	deq.push_back(17);
	deq.push_front(61);

	printDeque(deq);
	sort(deq.begin(), deq.end());
	printDeque(deq);

	vec.push_back(4);
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	printVector(vec);

	sort(vec.begin(), vec.end());

	printVector(vec);

	return 0;
}

void printDeque(deque<int> deck)
{
	for (int num : deck)
	{
		cout << num << endl;
	}

}

void printVector(vector<int> vec)
{
	for (int num : vec)
	{
		cout << num << endl;
	}
}