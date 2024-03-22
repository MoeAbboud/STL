#include <iostream>
#include <memory>

using namespace std;

int main()
{
	unique_ptr<int> myPtr0 = make_unique<int>();
	*myPtr0 = 32;

	int* ptr0 = new int;
	*ptr0 = 42;

	cout << "first ptr: " << * myPtr0 << endl;

	cout << "first normal ptr: " << *ptr0 << endl;

	unique_ptr<int> myPtr1 = move(myPtr0);

	int* ptr1;
	ptr1 = ptr0;

	cout << "second ptr: " << *myPtr1 << endl;

	cout << "second normal ptr: " << *ptr1 << endl;

	delete ptr0;

	cout << "first ptr: " << *myPtr0 << endl;

	cout << "first normal ptr: " << *ptr0 << endl;

	system("pause");
	return 0;
}