//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
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

class Dobby {

	public static int[] swap(int data[], int left, int right) {

		int temp = data[left];
		data[left] = data[right];
		data[right] = temp;

		return data;
	}

	public static int[] reverses(int data[], int left, int right) {

		while (left < right) {
			int temp = data[left];
			data[left++] = data[right];
			data[right--] = temp;
		}

		return data;
	}

	static boolean findNextPermutation(int data[]) {

		if (data.length <= 1)
			return false;

		int last = data.length - 2;

		while (last >= 0) {
			if (data[last] < data[last + 1]) {
				break;
			}
			last--;
		}

		if (last < 0)
			return false;

		int nextGreater = data.length - 1;

		for (int i = data.length - 1; i > last; i--) {
			if (data[i] > data[last]) {
				nextGreater = i;
				break;
			}
		}

		data = swap(data, nextGreater, last);

		data = reverses(data, last + 1, data.length - 1);

		return true;
	}

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			PrintWriter pt = new PrintWriter(System.out);

			int t = 1;

			while (t > 0) {

				String sm = fr.next(), pp = "";
				int n = sm.length();

				int data[] = new int[n];

				for (int i = 0; i < n; i++) {

					data[i] = sm.charAt(i) - 'a';

				}

				Arrays.sort(data);

				for (int j = 0; j < sm.length(); j++) {

					pp += (char) (data[j] + 'a');
				}

				String pr = pp;

				ArrayList<String> mn = new ArrayList<>();

				while (findNextPermutation(data)) {

					pp = "";

					for (int j = 0; j < sm.length(); j++) {

						pp += (char) (data[j] + 'a');
					}
					mn.add(pp);

				}

				pt.println(mn.size()+1);

				pt.println(pr);

				for (String i : mn) {

					pt.println(i);

				}

				t--;
			}
			pt.close();

		} catch (

		Exception e) {
			return;
		}
	}

	static class Pairx<Pairx> {

		ArrayList<Integer> b = new ArrayList<>();
		int a;

		Pairx(int a, ArrayList b) {
			this.a = a;
			this.b = b;
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

	static int binarySearch(long arr[], int first, int last, long key) {
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
//		return mid;
//		return mid if want to find key greater than or less than arr[mid] if exact value is not given
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
