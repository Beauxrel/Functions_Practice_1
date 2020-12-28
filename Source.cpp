#include <iostream>

using namespace std;

const double Pi = 3.14159265;

double surfaceArea(double radius, double height)
{
	double area = 2 * Pi * radius * radius + 2 * Pi * radius * height;
	return area;
};

double divisionTool(double num1, double num2)
{
	double remainder = num1 / num2;
	return remainder;
}

int main() 
{

	int user_Input = 0;
	cout << "Press 2 for division, or 1 for surface area of Cylinder: ";
	cin >> user_Input;

	if (user_Input == 1) 
	{
		double radius = 0;
		double height = 0;
		cout << "Enter the radius of the cylinder: ";
		cin >> radius;
		cout << "Enter height of the cylinder: ";
		cin >> height;
		cout << "Surface area is " << surfaceArea(radius, height) << endl;
	}
	else if (user_Input == 2) {
		double num1 = 0;
		double num2 = 0;
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		cout << "Answer is " << divisionTool(num1, num2) << endl;
	}
	else {
		cout << "That aint right";
		return 0;
	}
}



