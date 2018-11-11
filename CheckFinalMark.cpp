// Jorge Calzada

/*
    Calculate the average of three notes, taking into account some constraints:
        · If the average does not reach 5 but the notes are equal to or greater
          than 4, 4 will be displayed.
        · If one of the notes does not reach 3, 3 will be shown or if the average
          is lower than the average.
*/

/*
    Example input:
    7 8 9
    4 5 6
    4 5 5
    3 10 10
    2 1 2

    Example output:
    8
    5
    4
    3
    2

*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num1, num2, num3;
    float result;


    cout << "Enter the number 1: ";
    cin >> num1;

    cout << "Enter the number 2: ";
    cin >> num2;

    cout << "Enter the number 3: ";
    cin >> num3;


    result = (num1 + num2 + num3) / 3.0;


    if (num1 >= 4 && num2 >= 4 && num3 >= 4 && result >= 5)
    {
        cout << "The average is " << round(result) << endl;
    }
    else if (num1 >= 4 && num2 >= 4 && num3 >= 4 && result < 5)
    {
        cout << "The average is 4" << endl;
    }
    else if (num1 < 4 || num2 < 4 || num3 < 4)
    {
        if (result > 3)
        {
            cout << "The average is 3" << endl;
        }
        else
        {
            cout << "The average is " << round(result) << endl;
        }
    }

	return 0;
}
