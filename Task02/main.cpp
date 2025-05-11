#include <iostream>

using namespace std;

int fibonacci(int index) {
	if (index == 1 || index == 2)
	{
		return index - 1;
	}

	return fibonacci(index - 1) + fibonacci(index - 2);

}

int main() {
	int index;

	cout << "Imput index: ";
	cin >> index;

	cout << "Result: [" << index << "] = "
		<< fibonacci(index) << endl;

	return 0;
}