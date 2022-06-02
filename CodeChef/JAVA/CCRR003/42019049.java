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
				int A[] = new int[N];
				for (int i = 0; i < N; i++) {
					A[i] = sc.nextInt();

				}
				int temp[] = A.clone();

				int small = 0, large = N - 1;

				boolean flag = true;

				for (int i = 0; i < N; i++) {
					if (flag) {
						A[i] = temp[large--];
					} else {
						A[i] = temp[small++];
					}

					flag = !flag;
				}

				for (int i = 0; i < N; i++) {
					System.out.print(A[i]+" ");
				}

				t--;
			}
		} catch (Exception e) {
			return;
		}

	}

}
