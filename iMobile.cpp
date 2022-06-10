#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    double total, limit, feeGigs, gigs;
    char package;

    while (true)
    {
        cout << "Select a subscribtion package: ";
        cin >> package;
        if (package == 'A' || package == 'B' || package == 'C')
        {
            break;
        }
        else
        {
            cout << "Invalid Package.\n\n"
                 << "Try again.\n\n";
        }
    }
    while (true)
    {
        cout << "\nHow many gigabytes of data were used: ";
        cin >> gigs;
        if (gigs > 0)
        {
            break;
        }
        else
        {
            cout << "Invalid gigabytes entered. \n\n"
                 << "Try again";
        }
    }

    if (package == 'A')
    {
        limit = 39.99;
        if (gigs < 4)
        {
            total = limit;
        }
        else
            feeGigs = gigs - 4;

        total = (feeGigs * 10) + limit;

        cout << "The total amount due is: $" << total << "\n\n";
    }

    if (package == 'B')
    {
        limit = 59.99;
        if (gigs < 8)
            total = limit;
        else
            feeGigs = gigs - 8;

        total = (feeGigs * 5) + limit;

        cout << "The total amount due is: $" << total << "\n\n";
    }

    if (package == 'C')
    {
        limit = 69.99;
        total = limit;
        cout << "The total amount due is: $" << total << "\n\n";
    }

    return 0;
}
