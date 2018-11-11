// Jorge Calzada

/*
    Check the access of a user (username and password) and if wrong 3 times deny
    entry and terminate
*/

using System;

public class UserLogin
{
    public static void Main()
    {
        int times = 0;
        string user, password;
        const string correctUser = "jorge", correctPassword = "1234";

        do
        {
            if (times != 0)
            {
                Console.WriteLine("Access denied");
                Console.WriteLine();
            }

            Console.Write("Enter the user: ");
            user = Console.ReadLine();
            user = user.ToLower();

            Console.Write("Enter the password: ");
            password = Console.ReadLine();

            times++;
        }
        while ((user != correctUser || password != correctPassword) && times < 3);


        if (user == correctUser && password == correctPassword)
        {
            Console.WriteLine("Access granted");
        }
    }
}
