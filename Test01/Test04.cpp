#include <iostream>

using namespace std;

void test(int count) {
	
	if (count <= 0)
	{
		return;
	}else{

	cout << "testing..." << endl;
	count--;
	test(count);
	}
}

int main() {
	int count;

	cout << "Imput count" << endl;
	cin >> count;

	test(count);

	return 0;
}