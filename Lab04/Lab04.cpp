#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	// I recommend writing your factorial code here
	float A;
	float fct = 1;
	cout << "Enter the first value:";
	cin >> A;

	if (A < 0) {
		cout << "\nNice try, please enter a POSITIVE number...:";
		cin >> A;
	}

		for (int i = 1; i <= A; ++i) {
			fct *= i;
		}
		cout << "\n" << A << "! = " << fct << endl;


}
void arithmetic() {
	// I recommend writing your arithmetic series code here
	float start;
	float add;
	float elements;
	float sum = 0;
	cout << "Enter a number to start at:";
	cin >> start;
	

	cout << "\nEnter a number to add each time:";
	cin >> add;

	cout << "\nEnter the number of elements in the series:";
	cin >> elements;

	for (int i = 1; i <= elements; ++i) {
		sum = sum + start;
		start = start + add;
		
	}

	cout << "\nThe result is " << sum << endl;

}
void geometric() {
	// I recommend writing your geometric series code here
	float start;
	float add;
	float elements;
	float mult = 0;
	cout << "Enter a number to start at:";
	cin >> start;

	cout << "\nEnter a number to multiply each time:";
	cin >> add;

	cout << "\nEnter the number of elements in the series:";
	cin >> elements;

	for (int i = 1; i <= elements; ++i) {
		mult = mult + start;
		start = start * add;
	}
	
	cout << "\n the result is " << mult << endl;



}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}