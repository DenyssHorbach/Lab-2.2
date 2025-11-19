#include <iostream>

using namespace std;

enum Names{Billy, Van, Johny, Eva, Ariana, Candy, Diana};

int main() {
	class Student {
	public:
		Names name;
		int course;
		bool stypendia;
	};
	
	Student students[7];
	students[0] = { Billy, 2, true };
	students[1] = { Van, 2, true };
	students[2] = { Johny, 2, true };
	students[3] = { Eva, 4, false };	
	students[4] = { Ariana, 5, false };
	students[5] = { Candy, 2, false };
	students[6] = { Diana, 1, false };

	int count = 0;
	for (int i = 0; i < 7; i++) {
		if (students[i].course == 2 && students[i].stypendia == true) {
			count++;
		}
	}
	float percent = float(count) / 7 * 100;
	cout << "Percentage of students with course 2 and scholarship: " << percent << "%" << endl;
	return 0;
}
