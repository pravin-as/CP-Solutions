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
				int N = sc.nextInt();
				int K = sc.nextInt();
				int sum = 0;
				int result = 0;
				for (int i = 0; i < N; i++) {

					int A[] = new int[N];
					A[i] = sc.nextInt();
					sum += A[i];

				}
				result = sum % K;
				if(result ==0) {
					System.out.println("0");
				}else {
					System.out.println("1");
				}
T--;
			}

		} catch (Exception e) {
			return;
		}
	}
}
