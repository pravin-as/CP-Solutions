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

			String str = sc.next();
			long x = 0;
			long y = 0;
			for (int i = 0; i < str.length(); i++) {
				if (str.charAt(i) == 'U') {
					y++;
				} else if (str.charAt(i) == 'D') {
					y--;
				} else if (str.charAt(i) == 'L') {
					x--;
				} else if (str.charAt(i) == 'R') {
					x++;
				}
			}
			if (x == 0 && y == 0) {
				System.out.println("true");
			} else {
				System.out.println("false");
			}
		} catch (Exception e) {
			return;
		}

	}

}