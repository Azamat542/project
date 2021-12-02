using System;

namespace ConsoleApp4
{
    class Program
    {
        static void Main(string[] args)
        {
            Developer d1 = new Developer(5000);
            Driver d2 = new Driver(3000);

            int a, b;

            a = d1.GetSalary();
            b = d2.GetSalary();
            Console.WriteLine($"Salary of developer : {a}");
            Console.WriteLine($"Salary of driver : {b}");
        }
    }
}
