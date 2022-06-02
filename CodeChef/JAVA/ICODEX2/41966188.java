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
			int X = sc.nextInt();
			String str = sc.next();
			int count = 0;
			int x = 0;
			for (int i = 0; i < str.length(); i++) {
				if (str.charAt(i) == 'U') {
					count++;
				} else {
					count--;
				}

				if (count == 0 && str.charAt(i) == 'U') {
					x++;
				}

			}
			System.out.println(x);

		} catch (Exception e) {
			return;
		}

	}
}