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
			System.out.println();

			while (T > 0) {

				int D = sc.nextInt();
				int K = sc.nextInt();
			boolean	flag = false;

				for (int i = D; i >= 0; i = i - K) {
					if((i%(K-1))==0) {
						flag = true;
						break;
					}
					
				}
				if(flag) {
					System.out.println("YES");
				}else {
					System.out.println("NO");
				}

					T--;
			}

		} catch (Exception e) {
			return;

		}

	}
}
