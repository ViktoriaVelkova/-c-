

#include <iostream>
using namespace std;

int main()
{
	string input; cin >> input;
	string text = "s3cr3t!P@ssw0rd";
	if ( input == "s3cr3t!P@ssw0rd")
	{
		cout << "Welcome" << endl;
	}
	else
	{
		cout << "Wrong password!" << endl;
	}
}

