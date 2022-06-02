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
				int n = sc.nextInt();
				int arr[] = new int[n];
				for (int i = 0; i < n; i++) {
					arr[i] = sc.nextInt();

				}
				long a = arr[0];
				long b = arr[0];
				for (int i = 1; i < n; i++) {
					b=Math.max(arr[i], b+arr[i]);
					a=Math.max(a, b);
				}
				System.out.println(a);

				T--;
			}
		} catch (Exception e) {
			return;
		}
}}