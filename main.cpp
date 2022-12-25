#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

class MenuItem {
public: 
	MenuItem(string name, string ing, int mt, int d) {
		mealName = name;
		ingredients = ing;
		mealType = mt;
		day = d;

	}

private:
	string mealName;
	string ingredients;
	int mealType;
	int day; 


};

int main() {
	//declaring array to store menu objects and a variable to store the loction of the files created
	list<MenuItem> menuobjects;
	//string filelocation = "menu files/menufiles";

	//creating the file stream
	//fstream fileaction(filelocation);

	//checking if the file is empty
	//fileaction.seekg(0, ios::end);
	//int length = fileaction.tellg();

	//if (length == 0) {
	//	cout << "the file is empty time to create some magic" << endl;
	//}

	cout << "Welcome to the Meny Planner" << endl;

	bool flag = true;
	int userInput;


	//Prompting the user for input 
	while (flag) {
		int userInput = 0;
		string mealName = "";
		string ingredients = "";
		int mealType = 0;
		int mealDay = 0;


		cout << "What option would you like to select? \n 1. Add a menu Item \n2. Remove a menu item \n3. Display menu for the week \n4. Display meal for the day \n5. Delete meny for the week \n6. Close the Menu Planner Application" << endl; 
		cin >> userInput;


		//Selecting functionality based on user input 
		if (userInput == 1) {
			cout << "Please enter the name of the dish. Press Enter when you are done" << endl;
			cin >> mealName;
			cout << "Please enter the ingredients in this dish. Leave a comma between each ingredient. Press Enter when you are done" << endl;
			cin >> ingredients;
			cout << "Please enter the type of meal this is 1 for Breakfast 2 for Lunch and 3 for Divver" << endl;
			cin >> mealType; 
			cout << "Please enter a day of the week for this meal from 1 to 7 with monday being day 1 and sunday being day 7" << endl;
			cin >> mealDay;

			MenuItem meal(mealName, ingredients, mealType, mealDay);
			menuobjects.push_back(meal);
		}
		else if (userInput == 0) {
			flag = false;
		}

		cout << "Thank you for using the Menu Planner Good luck Cooking!" << endl;

	}


	return 0;
}