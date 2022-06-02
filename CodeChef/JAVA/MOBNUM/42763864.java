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
			while (T > 0) {
				String str = sc.next();

				if (str.length() == 10 && str.matches("[0-9]+")
						&& Integer.parseInt(String.valueOf(str.charAt(0))) != 0) {
					System.out.println("YES");
				} else {
					System.out.println("NO");
				}
				T--;
			}
		} catch (Exception e) {
			return;
		}

	}

}
