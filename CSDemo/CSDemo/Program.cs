namespace SnowyDemo
{
    class MyClass
    {
        public int Id { get; set; }
    }
    class Program
    {
        static void Main(string[] args)
        {
            List<int> lst = new List<int>() { 1, 2, 3, 4, 5, 6 };
            var lst2 = lst
                .Where(x => x % 2 == 0)
                .Select(x => x += 1)
                .Take(2)
                .ToList();
            foreach(var x in lst2)
            {
                Console.WriteLine(x);
            }
        }

    }
}

