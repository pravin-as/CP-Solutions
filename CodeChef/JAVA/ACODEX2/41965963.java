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
			int count = 0;
			while (T > 0) {

				int A[] = new int[3];
				int sum = 0;

				for (int i = 0; i < 3; i++) {
					A[i] = sc.nextInt();
				}
				for (int i = 0; i < 3; i++) {
					sum += A[i];
				}
				if (sum >= 2) {
					count++;
				} else {
					count += 0;
				}

				T--;
			}
			System.out.println(count);

		} catch (Exception e) {
			return;
		}

	}
}