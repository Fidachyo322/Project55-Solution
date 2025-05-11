#include <iostream>

using namespace std;

long long factorial(int number) {
	
	if (number < 0) {
		return 0;
	}
	
	if (number <= 1) {
		return 1;
	}

	return factorial(number - 1) * number;
}

int main() {

	int number;
	
	cout << "Imput number: ";
	cin >> number;

	cout << "Result: " << number << "! = "
		<< factorial(number) << endl;

	return 0;
}