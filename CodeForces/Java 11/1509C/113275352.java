//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.math.RoundingMode;
import java.text.DecimalFormat;
import java.util.Collections;
import java.util.Comparator;
import java.util.Deque;
import java.util.Arrays;
import java.util.ArrayDeque;
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

public class Ginny_Weasley {

	public static void main(String[] args) {

		try {

		FastReader fr = new FastReader();
		BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

		int n = fr.nextInt();
		long big = (long) 2e18;

		long A[] = new long[n];

		for (int i = 0; i < n; i++) {

			A[i] = fr.nextInt();

		}
		sort(A, 0, n - 1);

		long dp[][] = new long[n][n];

		for (int i = 0; i < n; i++) {

			for (int j = 0; j < n; j++) {

				dp[i][j] = big;

			}

		}

		dp[0][0] = A[n - 1] - A[0];

		for (int i = 1; i < n; i++) {

			dp[0][i] = dp[0][i - 1] + A[n - i - 1] - A[0];
			dp[i][0] = dp[i - 1][0] + A[n - 1] - A[i];

		}

		for (int i = 1; i < n; i++) {

			for (int j = 1; j < n - i; j++) {

				dp[i][j] = Math.min(dp[i][j], dp[i][j - 1] + A[n - j - 1] - A[i]);
				dp[i][j] = Math.min(dp[i][j], dp[i - 1][j] + A[n - j - 1] - A[i]);

			}

		}

		for (int i = 0; i < n; i++) {

			big = Math.min(big, dp[i][n - i - 1]);

		}

		System.out.println(big);

	} catch (

	Exception e) {
		return;
	}
	}

	static void merge(long arr[], int l, int m, int r) {

		int n1 = m - l + 1;
		int n2 = r - m;

		long L[] = new long[n1];
		long R[] = new long[n2];

		for (int i = 0; i < n1; ++i)
			L[i] = arr[l + i];
		for (int j = 0; j < n2; ++j)
			R[j] = arr[m + 1 + j];

		int i = 0, j = 0;

		int k = l;
		while (i < n1 && j < n2) {
			if (L[i] <= R[j]) {
				arr[k] = L[i];
				i++;
			} else {
				arr[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1) {
			arr[k] = L[i];
			i++;
			k++;
		}

		while (j < n2) {
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	static void sort(long arr[], int l, int r) {
		if (l < r) {

			int m = l + (r - l) / 2;

			sort(arr, l, m);
			sort(arr, m + 1, r);

			merge(arr, l, m, r);
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
