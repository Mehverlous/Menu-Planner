#include <iostream>
#include <string>
using namespace std;

class MenuItem {
public: 
	MenuItem(string name, string ing, int mt) {
		mealName = name;
		ingredients = ing;
		mealType = mt;

	}

private:
	string mealName;
	string ingredients;
	int mealType;
	int day; 


};

int main() {

	string daysOfTheWeek[7] = { "mon", "tue", "wed", "thurs", "fri", "sat", "sun" };
	string typeOfMeal[3] = { "breakfast", "lunch", "dinner" };

	cout << "Welcome to your Meny Planner please enter an option" << endl;
	cout << "1. Enter a menu item " << endl;
	cout << "2. Print a menu item" << endl;

	int userInput;

	cin >> userInput;

	switch (userInput) {
	case 1: 
		cout << "Please enter the name of your dish" << endl;

		MenuItem obj; 
	}




	return 0;
}