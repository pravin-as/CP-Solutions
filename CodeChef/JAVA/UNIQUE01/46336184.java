//This code is written by प्रविण शंखपाळ 

//package wizard;

import java.io.*;
import java.util.*;
import java.text.*;

class Luna_Lovegood {

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();
			PrintWriter pt = new PrintWriter(System.out);

			int t = fr.nextInt();

			while (t > 0) {

				int n = fr.nextInt();
				long count = 0;

				long A[] = new long[n];

				HashSet<Long> x = new HashSet<>();
				HashSet<Long> y = new HashSet<>();

				for (int i = 0; i < n; i++) {
					A[i] = fr.nextLong();

					if (x.contains(A[i])) {

						y.add(A[i]);

					}

					x.add(A[i]);

				}

				for (long i : x) {

					if (!y.contains(i)) {
						pt.println(i);
						break;
					}

				}

				t--;
			}

			pt.close();

		} catch (

		Exception e) {
			return;
		}
	}

	public static void mergeSort(String[] nameGo) {
		if (nameGo.length > 1) {
			String[] leftGo = new String[nameGo.length / 2];
			String[] rightGo = new String[nameGo.length - nameGo.length / 2];
			for (int so = 0; so < leftGo.length; so++) {
				leftGo[so] = nameGo[so];
			}
			for (int ki = 0; ki < rightGo.length; ki++) {
				rightGo[ki] = nameGo[ki + nameGo.length / 2];
			}
			mergeSort(leftGo);
			mergeSort(rightGo);
			merges(nameGo, leftGo, rightGo);
		}
	}

	public static void merges(String[] nameH, String[] leftH, String[] rightH) {
		int as = 0;
		int bs = 0;
		for (int i = 0; i < nameH.length; i++) {
			if (bs >= rightH.length || (as < leftH.length && leftH[as].compareToIgnoreCase(rightH[bs]) < 0)) {
				nameH[i] = leftH[as];
				as++;
			} else {
				nameH[i] = rightH[bs];
				bs++;
			}
		}
	}

	static void merge(int arr[], int l, int m, int r) {

		int n1 = m - l + 1;
		int n2 = r - m;

		int L[] = new int[n1];
		int R[] = new int[n2];

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

	static void sort(int arr[], int l, int r) {
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
