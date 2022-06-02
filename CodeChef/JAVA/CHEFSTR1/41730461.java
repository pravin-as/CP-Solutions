/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		while (T > 0) {
			int n = sc.nextInt();
			long sum = 0;
			int arr[] = new int[n];
			for (int i = 0; i < n; i++) {
				arr[i] = sc.nextInt();

			}
			for (int i = 0; i < n - 1; i++) {
				sum += Math.abs(arr[i + 1] - arr[i]) - 1;

			}
			System.out.println(sum);
			T--;
		}

	}

}
