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

	static long ans(long x) {
		long res;
		if (x == 0)
			res = 1;
		else if (x == 1)
			res = 2;
		else {
			res = ans(x / 2);
			if (x % 2 == 0)
				res = (res * res) % 1000000007;
			else
				res = (((res * res) % 1000000007) * 2) % 1000000007;
		}
		return res;
	}

	public static void main(String[] args) {
		try {

			FastReader s = new FastReader();
			int T = s.nextInt();

			while (T > 0) {

				int n = s.nextInt();

				System.out.println(ans(n - 1));
				T--;
			}
		} catch (

		Exception e) {
			return;

		}
	}
}