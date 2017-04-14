#include <iostream>
using namespace std;


int main() {
	
	char words[10] = { 'p','i','n','e','a','p','p','l','e','s' };

	char kwords[10] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ' };

	int correct = 0;
	int chance = 7;

	char input;

	bool gg = false;

	while (chance > 0) {
		gg = false;
		cout << "guess a letter" << endl;
		cin >> input;
			
		for (int i = 0; i < 10; i++) {

			if (input == words[i]) {
				kwords[i] = input;
				//cout << "correct letter" << endl;
				correct++;
				gg = true;
			}
		}
		if (gg == false) {
			cout << "wrong" << endl;
			chance--;
		}
		else
			cout << "correct" << endl;

				cout << "your words so far:" << endl;
				for (int i = 0; i < 10; i++)
					cout << kwords[i];
				cout << endl;

				cout << "you have " << chance << " left" << endl;
	}

}