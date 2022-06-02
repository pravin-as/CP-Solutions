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

				int A[] = new int[5];
				int sum = 0;
				for (int i = 0; i < 5; i++) {
					A[i] = sc.nextInt();
				}
				for (int i = 0; i < 5; i++) {
					sum += A[i];
				}
				int P = sc.nextInt();
				if (sum * P > 120) {
					System.out.println("Yes");
				} else {
					System.out.println("No");
				}
				T--;
			}
		} catch (

		Exception e) {
			return;
		}

	}

}