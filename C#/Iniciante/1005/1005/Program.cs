using System;

namespace _1005
{
    class Program
    {
        static void Main(string[] args)
        {
            float x, y;
            double media;

            x = float.Parse(Console.ReadLine());
            y = float.Parse(Console.ReadLine());

            media = ((x * 3.5) + (y * 7.5)) / 11;

            Console.WriteLine("MEDIA = " + media.ToString("F5"));
        }
    }
}
