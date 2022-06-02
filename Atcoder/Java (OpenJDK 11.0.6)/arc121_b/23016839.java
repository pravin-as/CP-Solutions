//This code is written by प्रविण शंखपाळ 
 
//package wizard;
 
import java.io.*;
import java.util.*;
 
public class Main {
 
	static long wow(ArrayList<Long> A, ArrayList<Long> B, int m, int n) {
 
		int a = 0, b = 0;
 
		long result = Long.MAX_VALUE;
 
		while (a < m && b < n) {
			if (Math.abs(A.get(a) - B.get(b)) < result) {
				result = Math.abs(A.get(a) - B.get(b));
			}
 
			if (A.get(a) < B.get(b)) {
				a++;
			}
 
			else {
				b++;
			}
		}
 
		return result;
	}
 
	public static void main(String[] args) {
 
		try {
 
			FastReader fr = new FastReader();
			PrintWriter pt = new PrintWriter(System.out);
 
			int t = 1;
 
			while (t > 0) {
 
				int n = fr.nextInt();
				long ans = 0;
 
				ArrayList<Long> r = new ArrayList<>();
				ArrayList<Long> g = new ArrayList<>();
				ArrayList<Long> b = new ArrayList<>();
 
				for (int i = 0; i < 2 * n; i++) {
 
					long a = fr.nextLong();
					String str = fr.next();
 
					if (str.endsWith("R")) {
						r.add(a);
					} else if (str.endsWith("G")) {
						g.add(a);
					} else if (str.endsWith("B")) {
						b.add(a);
					}
 
				}
 
				Collections.sort(r);
				Collections.sort(g);
				Collections.sort(b);
 
				int R = r.size(), G = g.size(), B = b.size();
 
				if (R % 2 == 0 && G % 2 == 0 && B % 2 == 0) {
					ans = 0;
				} else if (R % 2 == 0) {
					ans = Math.min(wow(g, b, G, B), wow(r, b, R, B) + wow(r, g, R, G));
				} else if (G % 2 == 0) {
					ans = Math.min(wow(r, b, R, B), wow(g, b, G, B) + wow(r, g, R, G));
				} else if (B % 2 == 0) {
					ans = Math.min(wow(r, g, R, G), wow(r, b, R, B) + wow(g, b, G, B));
				}
 
				pt.println(ans == -2 ? 1 : ans);
 
				t--;
			}
 
			pt.close();
 
		} catch (
 
		Exception e) {
			return;
		}
	}
 
	static class Triple implements Comparable<Triple> {
		int a, b, c;
 
		Triple(int a, int b, int c) {
			this.a = a;
			this.b = b;
			this.c = c;
		}
 
		public int compareTo(Triple o) {
			// TODO Auto-generated method stub
			if (this.a != o.a)
				return Long.compare(this.a, o.a);
			else
				return Long.compare(this.b, o.b);
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
 
	static class Pairx<Pairx> {
 
		int a;
		String b;
 
		Pairx(int a, String b) {
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
				return Long.compare(this.a, o.a);
			else
				return Long.compare(this.b, o.b);
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