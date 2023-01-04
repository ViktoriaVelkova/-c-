

#include <iostream>
using namespace std;

int main()
{
    int timeFirst, timeSecond, timeThird;
    cin >> timeFirst >> timeSecond >> timeThird;
    int timeTotal = timeFirst + timeSecond + timeThird;
    int minutes = timeTotal / 60;
    int second = timeTotal % 60;
    if (second<10)
    {
        cout << minutes << ":0" << second << endl;
    }
    else
    {
        cout << minutes << ":" << second << endl;
    }
}



