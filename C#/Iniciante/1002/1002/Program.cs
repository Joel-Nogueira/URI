using System;

namespace _1002
{
    class Program
    {
        static void Main(string[] args)
        {
            double pi = 3.14159, 
                   raio = double.Parse(Console.ReadLine());
            double area = pi * raio * raio;
            Console.WriteLine("A=" + area.ToString("F4"));
        }
    }
}
