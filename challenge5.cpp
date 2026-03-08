#include <iostream>
using namespace std;
main()
{
    int holidays;
    cout << " holidays : ";
    cin >> holidays;
    int workingdays;
    workingdays = 365 - holidays;
    int timeforgames = (workingdays * 63) + (holidays * 127);
    int difference = 30000 - timeforgames;
    int timeinhours = difference / 60;
    int timeinminutes = difference % 60;
    int norm = 30000;
    if (timeforgames < norm)
    {
        cout << " tom sleeps well " << endl;
        cout << timeinhours << " hours and " << timeinminutes << " minutes less for plays";
    }
    else
    {
        cout << " tom will run away" << endl;
        cout << timeinhours << " hours and" << timeinminutes << " minutes forn  play";
    }
}