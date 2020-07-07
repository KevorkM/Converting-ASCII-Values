#include <iostream>

using namespace std;

int main() {
	cout << "Constant" << endl;
	cout << "Converting Characters to ASCII values" << endl;

	char AsciiChar;

	cout << "Please enter a character" << endl;
	cin >> AsciiChar;

	int value = AsciiChar;

	cout << "The value of " << AsciiChar << " is: " << value << endl;

	return 0;
}