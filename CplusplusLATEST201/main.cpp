#include <iostream>
#include <vector>
#include "Entity.h"
#include <algorithm>
using namespace std;

static vector<double> addToArray(const vector<double>& vec1, const vector<double>& vec2) {

	size_t smallerSize = (vec1.size() < vec2.size()) ? vec1.size() : vec2.size();

	vector<double> result(smallerSize);
	transform(vec1.begin(), vec1.begin() + smallerSize, vec2.begin(), result.begin(),
		[](double a, double b) {return a + b; });

	return result;
}

static constexpr vector <double> percentOfMaxValue(const vector<double>& vec) {
	double maxValue = *max_element(vec.begin(), vec.end());
	vector<double> normalized(vec.size());
	transform(vec.begin(), vec.end(), normalized.begin(),
		[maxValue](double v) {return (v / maxValue) * 100; });
	return normalized;
}
static void readPercentOfMaxValue(const vector<double>& vec) {

	double maxValue = *max_element(vec.begin(), vec.end());

	vector<double> temp(vec.size());

	transform(vec.begin(), vec.end(), temp.begin(),
		[maxValue](double v) {return (v / maxValue) * 100; });

	cout << "Max Value in Array: " << maxValue << "\n";
	for (size_t index = 0; index < temp.size(); ++index) {
		cout << "Element #" << index + 1 << ": " << temp[index] << "% of max value " << "\n";
	}
}

static void readArray(const vector<double>& vec) {
	int count = 0;
	for (double num : vec) {
		cout << "# " << ++count << " " << num << "\n";
	}

}
int main() {

	double myInts[] = { 100, 200, 122, 321, 400 };
	double myInts2[]{ 25,30,44,21,32, 400,500 };

	vector<double>numbers(myInts, myInts + sizeof(myInts) / sizeof(double));
	vector<double>numbers2(myInts2, myInts2 + sizeof(myInts2) / sizeof(double));

	vector<double> totals(addToArray(numbers, numbers2));


	for (double num : totals) {
		cout << num << "\n";
	}

	vector<double>normalizedValues = percentOfMaxValue(numbers);

	readPercentOfMaxValue(normalizedValues);

	vector<double> movedInto = move(numbers2);

	readArray(movedInto);


	return 0;
}