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
				int A[] = new int[N];
				int problems_solved = 0;
				int problems_slow = 0;
				int bot_solve = 0;
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();
				}

				for (int i = 0; i < N; i++) {
					if (A[i] != -1) {
						problems_solved++;
					}

				}

				for (int i = 0; i < N; i++) {
					if (A[i] > K) {
						problems_slow++;
					}

				}

				for (int i = 0; i < N; i++) {
					if (A[i] == 1 || A[i] == 0) {
						bot_solve++;
					}

				}
				double data = 0;
				if (N % 2 == 1) {
					data = Math.ceil(N / 2 + 1);
				} else {
					data = Math.ceil(N / 2);
				}

				int value = (int) data;

				if (problems_solved < value) {
					System.out.println("Rejected");
				}
				if ((problems_solved >= value) && (problems_slow > 0)) {
					System.out.println("Too Slow");
				}
				if ((problems_solved >= value) && (problems_slow == 0) && (bot_solve == N)) {
					System.out.println("Bot");
				}
				if ((problems_solved >= value) && (problems_slow == 0) && (bot_solve != N)) {
					System.out.println("Accepted");
				}
				t--;
			}
		} catch (Exception e) {
			return;
		}

	}

}

