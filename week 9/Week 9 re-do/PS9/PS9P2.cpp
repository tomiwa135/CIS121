//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//double battingAvg(int noOfHits, int noAtBats) 
//{
//	double avg;
//
//	avg = noAtBats / noOfHits;
//
//	if (avg == 0) {
//		cout << "No at bats cannot be more than number of hits" << endl;
//	}
//
//	return avg;
//}
//
//int main() 
//{
//	string lname;
//	int noOfHits, noAtBats;
//	int count = 0;
//	double avg;
//
//	cout << "Enter the players name, noOfHits, and noAtBats: ";
//	cin >> lname >> noOfHits >> noAtBats;
//
//	while (!cin.eof()) 
//	{
//
//		avg = battingAvg(noOfHits, noAtBats);
//
//		cout << "This is the players last name: " << lname << endl;
//		cout << "This is the players batting average: " << avg << endl;
//
//		count += 1;
//
//		cout << "Enter the players name, noOfHits, and noAtBats (ctrl + z to stop): ";
//		cin >> lname >> noOfHits >> noAtBats;
//	}
//
//	cout << endl;
//	cout << "This is the number of entries entered: " << count << endl;
//
//	system("pause");
//
//	return 0;
//}