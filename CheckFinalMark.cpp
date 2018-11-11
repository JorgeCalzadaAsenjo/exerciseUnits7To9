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
    int mark1, mark2, mark3;
    float average;


    cout << "Enter the number 1: ";
    cin >> mark1;

    cout << "Enter the number 2: ";
    cin >> mark2;

    cout << "Enter the number 3: ";
    cin >> mark3;


    average = (mark1 + mark2 + mark3) / 3.0;


    if (mark1 >= 4 && mark2 >= 4 && mark3 >= 4 && average >= 5)
    {
        cout << "The average is " << round(average) << endl;
    }
    else if (mark1 >= 4 && mark2 >= 4 && mark3 >= 4 && average < 5)
    {
        cout << "The average is 4" << endl;
    }
    else if (mark1 < 4 || mark2 < 4 || mark3 < 4)
    {
        if (average > 3)
        {
            cout << "The average is 3" << endl;
        }
        else
        {
            cout << "The average is " << round(average) << endl;
        }
    }

	return 0;
}
