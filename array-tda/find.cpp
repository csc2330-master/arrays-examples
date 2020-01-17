#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int LinearSearch(const int[], size_t, int);

int main(int argc, char* argv[]){
	const int SIZE = 10;
	int myData[SIZE] = {2, 4, 5, 6, 7, 11, 12, 1, 3, 10};
	for (size_t i=0; i<SIZE; i++)
		cout << setw(5) << myData[i];
	cout << endl;
	int value;
	int position;
	while (cin >> value){
		position = LinearSearch(myData, SIZE, value);
		if (position == SIZE)
			cout << "Value " << value << " not found" << endl;
		else
			cout << "Value " << value << " found at position " << position << endl;
	}


	return 0;
}
int LinearSearch(const int values[], size_t size, int key){
	size_t i;
	for (i = 0; i < size; i++)
		if (values[i] == key)
			return i;
	return i;
}
