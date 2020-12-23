#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    while (true)
    {
        int currentTime;
        int hoursFromNow;
        cout << "Enter time now: ";
        cin >> currentTime;
        cout << "Enter number of hours from now: ";
        cin >> hoursFromNow;

        int targetTime = (currentTime + hoursFromNow) % 12;
        int numberOfDays = hoursFromNow / 24;

        cout << "After " << hoursFromNow << " hours from " << currentTime << ", it will be " << targetTime << " o'clock and " << numberOfDays << " days." << endl;
    }

    return 0;
}
