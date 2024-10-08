#include <iostream>
#include <string>
using namespace std;

class CElevator {
	int mFloor_first;
	int mFloor_last;

public:
	void Floor_first(int value) { mFloor_first = value; }
	int Floor_first() { return mFloor_first; }
	void Floor_last(int value) { mFloor_last = value; }
	int Floor_last() { return mFloor_last; }
	string GetString() {
		return "First " + to_string(mFloor_first) + " last " + to_string(mFloor_last) + " floors.\n";
	}
	void Print() {
		cout << GetString();
	}
	CElevator(int first, int last) : mFloor_first(first), mFloor_last(last) {};
	~CElevator() {};

};

int main() {

	CElevator elevator = CElevator(1, 10);
	elevator.Print();

}