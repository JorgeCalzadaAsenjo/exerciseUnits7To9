#include <iostream>
#include <string>

using namespace std;

int main()
{
    int times = 0;
    string user, password;
    const string correctUser = "jorge", correctPassword = "1234";
    locale loc;

    do
    {
        if (times != 0)
        {
            cout << "Access denied" << endl << endl;
        }

        cout << "Enter the user: ";
        cin >> user;
        transform(user.begin(), user.end(), user.begin(), ::tolower);

        cout << "Enter the password: ";
        cin >> password;

        times++;
    }
    while ((user != correctUser || password != correctPassword) && times < 3);


    if (user == correctUser && password == correctPassword)
    {
        cout << "Access granted";
    }

	return 0;
}

