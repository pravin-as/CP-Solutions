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

				String str = s.nextLine();

				long count = 1;

				for (int i = 0; i < 10; i++) {
					if (str.charAt(i) <= '5' && str.charAt(i) >= '0') {
						count *= 3;
					} else {
						count *= 2;
					}
				}
				System.out.println(count);

				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}