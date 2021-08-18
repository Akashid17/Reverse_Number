
import java.lang.*;
import java.io.*;

class Arithmetic
{
	void ReverseNumber(int iNo)
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}

		while(iNo != 0)
		{
			System.out.print(iNo%10);

			iNo /= 10;
		}
		System.out.println();
	}
}

class Main
{
	public static void main(String Arg[])
	{
		BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

		int iValue = 0;

		try
		{
			System.out.println("Enter Number");
			iValue = Integer.parseInt(bobj.readLine());
		}
		catch(Exception eobj)
		{}

		Arithmetic aobj = new Arithmetic();

		aobj.ReverseNumber(iValue);
	}
}