namespace Lesson1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("你好世界！");//打印后自动换行
            Console.WriteLine("你好世界！");

            Console.Write("世界你好！");//打印后不换行
            Console.Write("世界你好！");

            Console.ReadLine();//检测玩家输入
            Console.WriteLine("输入完毕");

            Console.ReadKey();//检测是否按键，输入任意键后输入结束
            Console.WriteLine("输入完毕");
        }
    }
}