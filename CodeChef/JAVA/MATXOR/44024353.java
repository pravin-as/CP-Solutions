//This code is written by प्रविण शंखपाळ 



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
import java.util.Comparator;
import java.util.Arrays;
import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Stack;
import java.util.Queue;
import java.util.PriorityQueue;
import java.util.List;
import java.util.HashSet;
import java.util.LinkedHashSet;
import java.util.TreeSet;
import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.Vector;

   class Ginny_Weasley {

	static long A[] = new long[(int) 1e6 + 1];
	static int mod = (int) 1e9 + 7;

	static long fib(int n) {

		A[0] = 0;
		A[1] = 1;

		for (int i = 2; i <= n; i++) {

			A[i] = (A[i - 1] + A[i - 2]) % mod;

		}

		return A[n];

	}

	static class Pair implements Comparable<Pair> {
		int a, b;

		Pair(int a, int b) {
			this.a = a;
			this.b = b;
		}

		public int compareTo(Pair o) {
			// TODO Auto-generated method stub
			if (this.a != o.a)
				return Integer.compare(this.a, o.a);
			else
				return Integer.compare(this.b, o.b);
			// return 0;
		}

		public boolean equals(Object o) {
			if (o instanceof Pair) {
				Pair p = (Pair) o;
				return p.a == a && p.b == b;
			}
			return false;
		}
	}

	public static void main(String[] args) {
		try {

			FastReader fr = new FastReader();

			int T = fr.nextInt();

			while (T > 0) {

				int n = fr.nextInt();
				int m = fr.nextInt();
				int k = fr.nextInt();

				long ans = 0;
				long x = 2;

				int y = Math.min(m, n);

				for (int i = 1; i < y; i++) {

					if (i % 2 == 1) {

						ans = ans ^ (k + x);
					}
					x++;

				}

				for (int i = 0; i <= Math.abs(m - n); i++) {

					if (y % 2 == 1) {

						ans = ans ^ (k + x);
					}
					x++;

				}

				for (int i = y - 1; i > 0; i--) {

					if (i % 2 == 1) {

						ans = ans ^ (k + x);

					}
					x++;

				}

				System.out.println(ans);

				T--;
			}

		} catch (Exception e) {
			return;
		}

	}

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
}
