/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	try {
			Scanner sc = new Scanner(System.in);
			int T = sc.nextInt();
			while (T != 0) {
				long x = sc.nextLong();
				long y = sc.nextLong();
				long z = sc.nextLong();
				long a = x % z;
				long b = y % z;
				long c = 0;
				long result = 0;
				if(x % z+ y % z>=z) {
					result =   1;
					 c = z-Math.max(x % z,  y % z);
				}
					result = x/z+y/z+ result;
				
				System.out.print(result+" ");
				System.out.print(c);
System.out.println();
				T--;
			}
		} catch (Exception e) {
			return;
		}
	}}