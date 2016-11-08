#include <iostream>
#include <fstream>
#include "FITNESSTRACKER.H"
#include <string>
using namespace std;


void fitnessTracker::calculateMetabolism()
{
	int x;
    cout <<"We are going to calculate your metabolism!" << endl;
    cout <<"Enter your weight in pounds" << endl;
	cin >> weight;
    cout <<"Enter your height in inches" << endl;
	cin >> height;
    cout <<"Enter your age" << endl;
	cin >> age;

	bmr = (66 + (6.23*weight) + (12.7*height) - (6.8*age));

	
		cout << "1: If you are sedentary (little or no exercise)" << endl;
		cout << "2: If you are lightly active (light exercise/sports 1-3 days/week)" << endl;
		cout << "3: If you are moderatetely active (moderate exercise/sports 3-5 days/week)" << endl;
		cout << "4: If you are very active (hard exercise/sports 6-7 days a week)" << endl;
		cout << "5: If you are extra active (very hard exercise/sports & physical job or 2x training)" << endl;
		cout << "Enter either 1 or 2 or 3 or 4 or 5, depending on which one matches you" << endl;
		cin >> x;
		
		switch (x)
		{
			case 1:
			{
			bmr = (bmr*1.2);
			break;
			}
			case 2:
			{
			bmr = (bmr*1.375);
			break;
			}
			case 3:
			{
			bmr = (bmr*1.55);
			break;
			}
			case 4:
			{
			bmr = (bmr*1.725);
			break;
			}
			case 5:
			{
			bmr = (bmr*1.9);
			break;
			}
			

		}
	
}

void fitnessTracker::calculateMacros()
{
	float remainingCalories = 0;
	float fatCalories = 0;
	float proteinCalories = 0;
	protein = weight;
	proteinCalories = (protein * 4);
	fatCalories = (bmr*.25);
	fat = (fatCalories / 9);
	remainingCalories = ((bmr - proteinCalories) - fatCalories);
	carbohydrate = (remainingCalories / 4);
	
}

void fitnessTracker::printInformation()
{

    cout << "Your metabolism is: " <<  bmr << endl;
	cout << "Your daily macronutrient balance are: " << endl;
	cout << "Protein: " << protein << "g" << endl;
	cout << "Carbohydrate: " << carbohydrate << "g" << endl;
	cout << "Fat: " << fat << "g" << endl;

}

void fitnessTracker::weightManagement()
{
	string weightManaging;
	cout << "Do you want to gain weight or lose weight?" << endl;
	cout << "Type gain if you want to gain weight" << endl;
	cout << "Type lose if you want to lose weight" << endl;
	cin >> weightManaging;
	if (weightManaging == "gain")
	{
		bmr += 500;
	}
	else if (weightManaging == "lose")
	{
		bmr -= 500;
	}
	else
	{
		cout << "you did not type gain or lose!" << endl;
	}
	
	
}
