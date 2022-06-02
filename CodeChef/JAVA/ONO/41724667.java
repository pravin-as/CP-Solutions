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
				long no_of_odd_digits = 0;
				

			for(int i=0;i<str.length();i++) {

					if (((int)str.charAt(i) % 10) % 2 == 1)
						no_of_odd_digits++;
					
				}
				if (no_of_odd_digits == 1 || no_of_odd_digits == 0) {
					System.out.println(-1);
				} else {
					System.out.println(no_of_odd_digits % 2);
				}

				T--;
			}
		} catch (Exception e) {
			return;
		}

	}

}

