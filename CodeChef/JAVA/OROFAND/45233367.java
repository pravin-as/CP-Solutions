//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
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

class Ginny_Weasley {

	public static void main(String[] args) {

		try {

		FastReader fr = new FastReader();
		PrintWriter pt = new PrintWriter(System.out);

		int t = fr.nextInt();

		while (t > 0) {

			int n = fr.nextInt(), q = fr.nextInt(), x = 0, c = 0, d = 0, e = 0;
			long v = 0;
			String str = "", str2 = "", str3 = "", str4 = "", ans = "";

			long A[] = new long[n];
			long B[] = new long[33];
			char C[] = new char[33];

			for (int i = 0; i < n; i++) {
				A[i] = fr.nextLong();
			}

			Arrays.fill(B, 0);
			Arrays.fill(C, '0');

			for (int i = 0; i < n; i++) {

				str2 = Long.toBinaryString(A[i]);
				c = str2.length();

				for (int j = 0; j < c; j++) {

					if (str2.charAt(j) == '1') {

						B[c - j - 1]++;
						C[c - j - 1] = '1';

					}

				}

			}

			for (int i = 32; i >= 0; i--) {
				ans += C[i];
			}

			pt.println(Long.parseLong(ans, 2));

			while (q > 0) {

				x = fr.nextInt();
				v = fr.nextLong();

				str3 = Long.toBinaryString(A[x - 1]);
				d = str3.length();

				for (int i = 0; i < d; i++) {

					if (str3.charAt(i) == '1') {

						B[d - i - 1]--;

						if (B[d - i - 1] == 0) {

							C[d - i - 1] = '0';

						}

					}

				}

				A[x - 1] = v;

				str4 = Long.toBinaryString(v);
				e = str4.length();

				for (int i = 0; i < e; i++) {

					if (str4.charAt(i) == '1') {

						B[e - i - 1]++;

						if (B[e - i - 1] == 1) {

							C[e - i - 1] = '1';

						}

					}

				}
				ans = "";

				for (int i = 32; i >= 0; i--) {
					ans += C[i];
				}

				pt.println(Long.parseLong(ans, 2));

				q--;
			}

			t--;
		}

		pt.close();

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
