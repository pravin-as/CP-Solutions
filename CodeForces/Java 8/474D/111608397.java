//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
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

public class Luna_Lovegood {

	static long mod = (long) (1e9 + 7);

	static long ans(int k) {

		return 0;

	}

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

			int t = fr.nextInt();
			int k = fr.nextInt();

			long dp[] = new long[(int) ((1e5) + 5)];

			dp[0] = 1;

			for (int i = 1; i < (int) ((1e5) + 1); i++) {

				dp[i] = i < k ? dp[i - 1] : ((dp[i - 1] % mod) + (dp[i - k] % mod)) % mod;
				dp[i] %= mod;

			}

			for (int i = 1; i < (int) ((1e5) + 1); i++) {

				dp[i] = ((dp[i - 1] % mod) + (dp[i] % mod)) % mod;

			}

			while (t > 0) {

				int a = fr.nextInt();
				int b = fr.nextInt();

				System.out.println((dp[b] - dp[a - 1] + mod) % mod);

				t--;
			}

		} catch (Exception e) {
			return;
		}
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

	static int binarySearch(int arr[], int first, int last, int key) {
		int mid = (first + last) / 2;
		while (first <= last) {
			if (arr[mid] < key) {
				first = mid + 1;
			} else if (arr[mid] == key) {
				return mid;
			} else {
				last = mid - 1;
			}
			mid = (first + last) / 2;
		}
		return -1;
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
