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
            while (T != 0) {
                int N = sc.nextInt();
                int M = sc.nextInt();
                int[] A = new int[N];
                int[] B = new int[M];
                int sum1 = 0;
                int sum2 = 0;
                for (int i = 0; i < N; i++) {
                    A[i] = sc.nextInt();
                    sum1 += A[i];
                }
                for (int i = 0; i < M; i++) {
                    B[i] = sc.nextInt();
                    sum2 += B[i];
                }
                if (sum1 > sum2) {
                    System.out.println(0);
                    continue;
                }
                Arrays.sort(A);
                Arrays.sort(B);
                int x = 0;
                int j = M - 1;
                for (int i = 0; i < N; i++) {
                    sum1 -= A[i];
                    sum2 -= B[j];
                    sum1 += B[j];
                    sum2 += A[i];
                    x++;
                    j--;
                    if (sum1 > sum2) {
                        break;
                    }
                }
                if (sum1 > sum2) {
                    System.out.println(x);
                } else {
                    System.out.println(-1);
                }
                T--;
            }


        } catch (Exception e) {
            return;
        }
    }
}