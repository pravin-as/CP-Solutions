/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class FairchildTangerine {

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

	public static void main(String[] args) {
		try {

		FastReader s = new FastReader();
		int T = s.nextInt();

		while (T > 0) {

			int N = s.nextInt();

			int A[] = new int[N];

			for (int i = 0; i < N; i++) {
				A[i] = s.nextInt();
			}

			Arrays.sort(A);

			int ans1 = 0;
			int ans2 = 0;

			int min = A[1] - A[0];
			for (int i = 2; i < N; i++) {

				min = Math.min(A[i] - A[i - 1], min);

			}

			for (int i = 0; i < N - 1; i++) {
				if (A[i + 1] - A[i] == min) {
					ans1 = i;
					ans2 = i + 1;
					break;
				}
			}

			System.out.println(A[ans1] + " " + A[ans2]);

			T--;
		}
		} catch (

		Exception e) {
			return;

		}
	}
}