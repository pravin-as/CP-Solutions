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
				int A[] = new int[3];
				for (int i = 0; i < 3; i++) {
					A[i] = sc.nextInt();
				}
				Arrays.sort(A);
				if (A[2] == A[1] + A[0]) {
					System.out.println("YES");
				} else {
					System.out.println("NO");
				}
				t--;
			}
		} catch (Exception e) {
			return;
		}

	}

}

