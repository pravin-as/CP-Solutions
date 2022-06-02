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
				long sum =0;
				int A[] = new int[N];
				for(int i=0;i<N;i++) {
					A[i] = sc.nextInt();
				}
				for(int i=0;i<N;i++) {
					sum+=A[i];
				}
				if(sum%2==0) {
					System.out.println(1);
				}else {
					System.out.println(2);
				}
				
				
				t--;
			}
		} catch (Exception e) {
			return;
		}

	}

}
