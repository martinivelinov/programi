// ConsoleApplication15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "how many groups : ";
	cin >> n;
	string* names = new string[n];
	if (n < 2 || n>5) {
		return 0;
	}
	for (int i = 0; i < n;i++) {
		cout << "name for group " << i << ":";
		cin >> names[i];

	}
	int ans = 0;
	string plus10t = " ";
		for (int i = 0; i < n; i++) {
			cout << names[i] << ":";
			int temp;
			cin >> temp;
			ans += temp; 
			if (i == 0) {
				plus10t += to_string(temp);

			}
			else {
				plus10t += "+" + to_string(temp);
			}
			
		}
		if (n == 2) {
			cout << names[0] << " and " << names[1] << ": ";
			int temp;
			cin >> temp;
			ans -= temp;
			plus10t += "-" + to_string(temp);
		}
		cout << plus10t << " = " << ans;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
