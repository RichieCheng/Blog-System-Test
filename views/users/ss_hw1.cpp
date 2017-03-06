#include<iostream>

using namespace std;

int main() {

	string source;

	while(cin >> source) {

		bool check = true;

		for (int i=0; i<source.length()/2; i++) {

			if (source[i] != source[source.length()-i-1])  {
				check = false;
				break;
			}

		}

		if (check)
			cout << "yes";
		else
			cout << "no";

		cout << endl;
	}

}