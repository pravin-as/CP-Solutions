//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.text.DecimalFormat;
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

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			BufferedWriter output = new BufferedWriter(new OutputStreamWriter(System.out));

			int t = fr.nextInt();

			while (t > 0) {

				int n = fr.nextInt();

				int A[] = new int[n];

				int ans = -1;

				for (int i = 0; i < n; i++) {
					A[i] = fr.nextInt();
				}

				for (int i = 1; i < n - 1; i++) {

					if (A[i + 1] != A[i] && A[i - 1] != A[i]) {

						ans = i;
					}

				}

				if (ans == -1) {

					if (A[0] != A[1]) {

						ans = 0;

					} else if (A[n - 1] != A[n - 2]) {

						ans = n - 1;

					}

				}

				System.out.println(ans + 1);

				t--;
			}

		} catch (

		Exception e) {
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