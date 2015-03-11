#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
	int i;

	cout << "Hello World!" << endl;
	cout << "Start Input here: ";

	cin >> i;

	system("cls");

	cin >> i;

	return 0;
}

void wait(int wait_time)
{
	long *start_time = new long;
	*start_time = time(0);

	while ((*start_time + wait_time) > time(0)){
	};

	delete start_time;
};