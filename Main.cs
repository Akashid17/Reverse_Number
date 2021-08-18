using System;

class ArithmeticX
{
	public void ReverseNumber(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		while(iNo != 0)
		{
			Console.Write(iNo%10);

			iNo /= 10;
		}
		Console.WriteLine();
	}
}

class main
{
	public static void Main(string[] args)
	{
		Console.WriteLine("Enter Number");
		int iValue = Convert.ToInt32(Console.ReadLine());

		ArithmeticX aobj = new ArithmeticX();
		aobj.ReverseNumber(iValue);
	}
}