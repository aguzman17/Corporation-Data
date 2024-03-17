#include <iostream>
using namespace std;

class CorpData
{
private:
	string north,
		south,
		east,
		west;

	double FirstQ,
		SecondQ,
		ThirdQ,
		FourthQ;

public:

	void storeData(string n, string s, string e, string w, double first, double second, double third, double fourth);
	double findTotal(double first, double second, double third, double fourth);
	double findAverage(double first, double second, double third, double fourth);
	void displayData(string n, string s, string e, string w, double first, double second, double third, double fourth);
};
void CorpData::storeData(string n, string s, string e, string w, double first, double second, double third, double fourth)
{
	north = n;
	south = s;
	east = e;
	west = w;

	FirstQ = first;
	SecondQ = second;
	ThirdQ = third;
	FourthQ = fourth;
}
double CorpData::findTotal(double first, double second, double third, double fourth)
{
	double total;

	total = first + second+ third + fourth;

	return total;
}
double CorpData::findAverage(double first, double second, double third, double fourth)
{
	double average;

	average = (first + second + third + fourth) / 4;

	return average;
}
void CorpData::displayData(string n, string s, string e, string w, double first, double second, double third, double fourth)
{
	cout << "North Division" << endl;
	cout << "Enter first quarterly amount: $";

	cout << "Enter second quarterly amount: $";
	cin >> north.SecondQuartSales;
	cout << "Enter third quarterly amount: ";
	cin >> north.ThirdQuartSales;
	cout << "Enter fourth quarterly amount: ";
	cin >> north.FourthQuartSales;

	cout << "\nSouth Division" << endl;
	cout << "Enter first quarterly amount: $";
	cin >> south.FirstQuartSales;
	cout << "Enter second quarterly amount: $";
	cin >> south.SecondQuartSales;
	cout << "Enter third quarterly amount: ";
	cin >> south.ThirdQuartSales;
	cout << "Enter fourth quarterly amount: ";
	cin >> south.FourthQuartSales;

	cout << "\nEast Division" << endl;
	cout << "Enter first quarterly amount: $";
	cin >> east.FirstQuartSales;
	cout << "Enter second quarterly amount: $";
	cin >> east.SecondQuartSales;
	cout << "Enter third quarterly amount: ";
	cin >> east.ThirdQuartSales;
	cout << "Enter fourth quarterly amount: ";
	cin >> east.FourthQuartSales;

	cout << "\nWest Division" << endl;
	cout << "Enter first quarterly amount: $";
	cin >> west.FirstQuartSales;
	cout << "Enter second quarterly amount: $";
	cin >> west.SecondQuartSales;
	cout << "Enter third quarterly amount: ";
	cin >> west.ThirdQuartSales;
	cout << "Enter fourth quarterly amount: ";
	cin >> west.FourthQuartSales;
}
int main()
{
	CorpData display;

	cout << "This is going to show the results\n\n";

	display.displayData();
	display.findAverage();
	display.findTotal();

	return 0;
}
