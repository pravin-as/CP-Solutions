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
			int N = sc.nextInt();
			int A[] = new int[N];
			long answer = 0;
			for (int i = 0; i < N; i++) {
				A[i] = sc.nextInt();
			}
			for (int i = 0; i < N - 1; i++) {
				if (A[i + 1] > A[i]) {
					answer += A[i + 1] - A[i];
				}
			}
			System.out.println(answer);
			T--;
		}
	}
}
