#include <iostream>

using namespace std;

int main()
{
    cout << "Press Ctrl-C to stop" << endl;

    while (true)
    {
        int currentTime;
        int amPm;
        int hoursFromNow;
        cout << "Enter time now: ";
        cin >> currentTime;
        cout << "Enter 1 for am, 2 for pm: ";
        cin >> amPm;
        cout << "Enter number of hours from now: ";
        cin >> hoursFromNow;

        int numberOfDays = 0;
        int hoursFromNowLeft = hoursFromNow;
        for (; hoursFromNowLeft >= 24; hoursFromNowLeft -= 24)
        {
            numberOfDays++;
        }
        bool flipAmPm = false;
        if (hoursFromNowLeft <= 12 && hoursFromNowLeft % 24 != 0) flipAmPm = true;
        int targetTime = (currentTime + hoursFromNowLeft) - 24; // Needs checking

        bool singularHour = false;
        bool singularDay = false;
        if (hoursFromNow < 2) singularHour = true;
        if (numberOfDays < 2) singularDay = true;

        cout << "After " << hoursFromNow << " hour";
        if (singularHour);
        else cout << "s";
        cout << " from " << currentTime << ", it will be " << targetTime << " o'clock ";
        if (flipAmPm)
        {
            if (amPm == 2) cout << "a";
            else cout << "p";
        }
        else
        {
            if (amPm == 2) cout << "p";
            else cout << "a";
        }
        cout << "m, and " << numberOfDays << " day";
        if (singularDay);
        else cout << "s";
        cout << "." << endl;
    }

    return 0;
}
