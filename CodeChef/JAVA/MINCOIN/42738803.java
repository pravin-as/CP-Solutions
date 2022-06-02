/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		
		int a = m/10;
		int p = m%10;
		int b = p/5;
		int q = p%5;
		int c = q/1;
		System.out.println(a+b+c);
		

	}

}