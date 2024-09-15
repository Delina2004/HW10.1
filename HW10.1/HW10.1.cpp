#include <iostream>
using namespace std;

int main()
{
    double sales, commission;

    cout << "Enter the sales: ";
    cin >> sales;

    if (sales <= 10000) {
        cout << "Commission is 10%" << endl;
    }
    else if (sales <= 15000) {
        cout << "Commission is 15% " << endl;
    }
    else {
        cout << " Commission is 20% " << endl;
    }

    return 0;
}

