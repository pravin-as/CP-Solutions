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

			int t = sc.nextInt();

			while (t > 0) {

				int N = sc.nextInt();
				int K = sc.nextInt();

				int count = 0;
				int result = 0;

				for (int i = 1; i <= K; i++) {
					count = Math.max(count, N - (N / i) * i);
					result = Math.max(result, count);
				}
				System.out.println(result);
				t--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}
