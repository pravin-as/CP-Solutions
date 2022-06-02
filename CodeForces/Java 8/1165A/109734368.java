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
import javafx.util.Pair;

public class Ginny_Weasley {

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

	public static void main(String[] args) {
		try {
			FastReader fr = new FastReader();

			int n = fr.nextInt();
			int x = fr.nextInt();
			int y = fr.nextInt();

			String str = fr.next();

			int count = 0;

			for (int i = 0; i < x; i++) {

				if (str.charAt(n - 1 - i) != (i == y ? '1' : '0'))
					count++;

			}

			System.out.println(count);

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
