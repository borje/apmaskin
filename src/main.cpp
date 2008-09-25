#include <iostream>
#include "PositionErrorEvent.h"

using namespace std;

int main(int argc, char *argv[]) {
	PositionErrorEvent e;
	throw e;
	cout << 1 << endl;
	return 0;
}
