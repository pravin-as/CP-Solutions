/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Apple {
	static class FastReader {
		BufferedReader br;
		StringTokenizer st;

		public FastReader() {
			br = new BufferedReader(new InputStreamReader(System.in));
		}

		String next() {
			while (st == null || !st.hasMoreElements()) {
				try {
					st = new StringTokenizer(br.readLine());
				} catch (IOException e) {
					e.printStackTrace();
				}
			}
			return st.nextToken();
		}

		int nextInt() {
			return Integer.parseInt(next());
		}

		long nextLong() {
			return Long.parseLong(next());
		}

		double nextDouble() {
			return Double.parseDouble(next());
		}

		String nextLine() {
			String str = "";
			try {
				str = br.readLine();
			} catch (IOException e) {
				e.printStackTrace();
			}
			return str;
		}
	}

	public static void main(String args[]) {

		try {

			FastReader s = new FastReader();

			int N = s.nextInt();

			int A[] = new int[N];

			for (int i = 0; i < N; i++) {

				A[i] = s.nextInt();
			}

			Arrays.sort(A);

			int B[] = new int[1005];

			for (int i = 0; i < N; i++) {
				B[i] = 0;
			}

			for (int i = 0; i < N; i++) {

				B[A[i]]++;
			}

			System.out.println(N);

			for (int i = 0; i < 1005; i++) {

				if (B[i] != 0 && N - B[i] != 0) {
					System.out.println(N - B[i]);
					N = N - B[i];
				}
			}

		} catch (

		Exception e) {
			return;

		}
	}
}