#include <iostream>
using namespace std;
void gallon(double, double);
const double litre_gallon = 0.264179;

int main()
{
	double litre, kilo;
	cout << "Enter the number of litres of petrol consumed by the car: " << endl;
	cin >> litre;
	cout << "Enter number of kilometres travelled by the car: " << endl;
	cin >> kilo;
	gallon(litre, kilo);
    return 0;
}

void gallon(double x, double y) {
	x *= litre_gallon;
	double kpg = y / x;
	cout << "The number of kilometres per gallon is: " << kpg <<" kilometres per gallon."<< endl;
}
