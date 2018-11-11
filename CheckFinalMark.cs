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

using System;

public class CheckFinalMark
{
    public static void Main()
    {
        int num1, num2, num3;
        float result;


        Console.Write("Enter the number 1: ");
        num1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the number 2: ");
        num2 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter the number 3: ");
        num3 = Convert.ToInt32(Console.ReadLine());


        result = (float)((num1 + num2 + num3) / 3.0);


        if (num1 >= 4 && num2 >= 4 && num3 >= 4 && result >= 5)
        {
            Console.WriteLine("The average is " + Math.Round(result));
        }
        else if (num1 >= 4 && num2 >= 4 && num3 >= 4 && result < 5)
        {
            Console.WriteLine("The average is 4");
        }
        else if (num1 < 4 || num2 < 4 || num3 < 4)
        {
            if (result > 3)
            {
                Console.WriteLine("The average is 3");
            }
            else
            {
                Console.WriteLine("The average is " + Math.Round(result));
            }
        }
    }
}
