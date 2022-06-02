/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

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

				long A[] = new long[N];

				for (int i = 0; i < N; i++) {
					A[i] = s.nextLong();
				}
				long M = s.nextLong();

			

				for (int i = 0; i < N; i++) {

					A[i] = A[i] + (A[i] % 3);

				}

			
				long min = -1;
				long max = -1;
				for (int i = 0; i < N; i++) {
					if (A[i] > M && (max == -1 || max > A[i]))
						max = A[i];
					if (A[i] < M && (min == -1 || min < A[i]))
						min = A[i];

				}
				System.out.println(min + " " + max);
				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}