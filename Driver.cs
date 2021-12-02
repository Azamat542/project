using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Driver : Employee
    {
        private int salary;
        public Driver(int s)
        {
            salary = s;
        }
        public override int GetSalary()
        {
            return salary;
        }
    }
}
