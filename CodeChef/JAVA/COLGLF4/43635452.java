//This code is written by प्रविण शंखपाळ 



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Collections;
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


 class Dobby {

	static long ans(long n, long e, long h, long a, long b, long c) {

		long cost = (long) 1e16;

		if (e >= 2 * n) {

			cost = Math.min(n * a, cost);

		}

		if (h >= 3 * n) {

			cost = Math.min(n * b, cost);

		}

		if (e >= n && h >= n) {

			cost = Math.min(n * c, cost);

		}

		if (e / 2 >= 1 && e / 2 >= (3 * n - h + 2) / 3) {

			if (a < b) {

				cost = Math.min(Math.min(n - 1, e / 2) * (a - b) + n * b, cost);

			} else {

				cost = Math.min(Math.max((3 * n - h + 2) / 3, 1) * (a - b) + n * b, cost);

			}

		}

		if ((h - n) / 2 >= 1 && (h - n) / 2 >= (n - e)) {

			if (b < c) {

				cost = Math.min(Math.min(n - 1, (h - n) / 2) * (b - c) + n * c, cost);

			} else {

				cost = Math.min(Math.max(n - e, 1) * (b - c) + n * c, cost);

			}

		}

		if (e - n >= 1 && e + h >= 2 * n) {

			if (a < c) {

				cost = Math.min(Math.min(n - 1, e - n) * (a - c) + n * c, cost);

			} else {

				cost = Math.min(Math.max(n - h, 1) * (a - c) + n * c, cost);

			}

		}

		if (n >= 3 && e >= 3 && h >= 4)

		{

			cost = Math.min(cost, a + b + c + ans(n - 3, e - 3, h - 4, a, b, c));

		}

		return cost;

	}

	public static void main(String[] args) {

		try

		{
			FastReader fr = new FastReader();
			long T = fr.nextLong();

			while (T > 0) {

				long n = fr.nextLong();
				long e = fr.nextLong();
				long h = fr.nextLong();
				long a = fr.nextLong();
				long b = fr.nextLong();
				long c = fr.nextLong();

				long answer = ans(n, e, h, a, b, c);

				System.out.println(answer == (long) 1e16 ? -1 : answer);

				T--;
			}
		} catch (

		Exception e) {
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
