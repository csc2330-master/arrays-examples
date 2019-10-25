#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* argv[]){
	int values[5];
	for (int i=0; i<5; i++){
		cout << "Val: ";
		cin >> values[i];
	}
	for (int i=0; i<5; i++)
		cout << values[i] << "\t";
	cout << endl;
	return 0;
}
