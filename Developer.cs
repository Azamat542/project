using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp4
{
    class Developer : Employee
    {
        private int salary;
        public Developer(int s)
        {
            salary = s;
        }
        public override int GetSalary()
        {
            return salary;
        }
    }
}
