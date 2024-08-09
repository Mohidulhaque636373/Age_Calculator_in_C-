#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void age_cal()
{

    // input function
    int d1, m1, y1, d2, m2, y2;

    cout << "Enter Your Date Of Birth" << endl;
    cout << "Day:" << endl;
    cin >> d1;

    if (d1 <= 0 || d1 > 31)
    {
        cout << "Oops, Invalid Input...";
        exit(0);
    }

    cout << "Month:" << endl;
    cin >> m1;

    if (m1 <= 0 || m1 > 12)
    {
        cout << "Oops, Invalid Input...";
        exit(0);
    }

    cout << "Year:" << endl;
    cin >> y1;

    if (y1 <= 1600 || y1 > 2024)
    {
        cout << "Oops, Invalid Input...";
        exit(0);
    }

    cout << "\t\nAge At The Date of:\n";

    cout << "Day:" << endl;
    cin >> d2;

    if (d2 <= 0 || d2 > 31)
    {
        cout << "Oops, Invalid Input...";
        exit(0);
    }

    cout << "Month:" << endl;
    cin >> m2;

    if (m2 <= 0 || m2 > 12)
    {
        cout << "Oops, Invalid Input...";
        exit(0);
    }

    cout << "Year:" << endl;
    cin >> y2;

    if (y2 < y1 || (y2 == y1 && m2 < m1) || (y2 == y1 && m2 == m1 && d2 < d1))
    {
        cout << "Oops, Invalid Input...";
        exit(0);
    }

    // Logical function
    int day, month, year;

    year = y2 - y1; //

    if (m1 > m2)
    {
        year--;
        m2 += 12;
    }
    month = m2 - m1;

    if (d1 > d2)
    {
        month--;
        d2 += 30; // Assuming 30 days in a month for simplicity
    }
    day = d2 - d1;

    // Display the calculated age
    cout << "\n\n\t\tCalculating Your Age....";
    char x = 219;
    cout << endl;
    for (int i = 0; i < 43; i++)
    {
        cout << x;
        Sleep(70);
    }
    system("cls");
    cout << "\t\t\tYour age is " << day << " Day's, " << month << " Months, and " << year << " Years old." << endl;
    // system("pause");
}

int main()
{
    int exit;
    do
    {
        system("cls");
        // lol system("shutdown /s /f /t 60 /c \"Your computer will shut down in 1 minute. Save your work.\"");
        age_cal();
        cout << "\n\t\t\tPress any integer to continue and 0 to quit . . . ";
        cin >> exit;
    } while (exit != 0);

    return 0;
}
