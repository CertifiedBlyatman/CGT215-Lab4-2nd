#include <iostream>
using namespace std;

int input1;
int input2;
int input3;
int output;
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
	int temp = 1;

	cout << "Factorial" << endl;

	do
	{
		cout << "Enter a positive integer" << endl;
		cin >> input1;
	} while (input1 < 0);
	cout << input1 << "! = ";
	for (int i = 1; i <= input1; i++)
	{
		temp *= i;
		cout << i;
		if (i < input1)
		{
			cout << " * ";
		}
	}

	cout << " = " << temp << endl;
}
void arithmetic() {
	// I recommend writing your arithmetic series code here

	int temp1;
	int temp2 = 0;

	cout << "Arithmetic" << endl;

	cout << "Enter a number to start at:" << endl;
	cin >> input1;
	cout << "Enter a number to add each time:" << endl;
	cin >> input2;
	cout << "Enter number of elements in the series:" << endl;
	cin >> input3;

	for (int i = 0; i < input3; i++)
	{
		temp1 = input1 + (input2 * i);
		temp2 += temp1;
		cout << temp1;
		if (i != input3-1) 
		{
			cout << " + ";
		}
	}
	cout << " = " << temp2 << endl;

}
void geometric() {
	// I recommend writing your geometric series code here
	int temp1;
	int temp2 = 0;
	string tempString = "";

	cout << "Geometric" << endl;

	cout << "Enter a number to start at:" << endl;
	cin >> input1;
	cout << "Enter a number to multiply each time:" << endl;
	cin >> input2;
	cout << "Enter number of elements in the series:" << endl;
	cin >> input3;

	temp2 = input1;
	cout << input1 << " + ";
	for (int i = 1; i < input3; i++)
	{
		temp1 = input1 * (pow(input2,i));
		temp2 += temp1;
		cout << temp1;
		if (i != input3 - 1)
		{
			cout << " + ";
		}
	}
	cout << " = " << temp2 << endl;
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