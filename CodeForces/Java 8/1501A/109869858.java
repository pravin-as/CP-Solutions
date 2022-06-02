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

public class Dobby {

	public static void main(String[] args) {

		try

		{
			FastReader fr = new FastReader();

			int T = fr.nextInt();

			while (T > 0) {

				int n = fr.nextInt();

				int A[] = new int[n];
				int B[] = new int[n];

				for (int i = 0; i < n; i++) {

					A[i] = fr.nextInt();
					B[i] = fr.nextInt();

				}

				int tm[] = new int[n];

				for (int i = 0; i < n; i++) {

					tm[i] = fr.nextInt();

				}

				int new_A[] = new int[n];
				int new_B[] = new int[n];

				new_A[0] = A[0] + tm[0];
				new_B[0] = Math.max(new_A[0] + (int) Math.ceil((double)(B[0] - A[0]) / 2), B[0]);

				for (int i = 1; i < n; i++) {

					new_A[i] = A[i] - B[i - 1] + tm[i] + new_B[i-1];
					new_B[i] = Math.max(new_A[i] + (int) Math.ceil((double)(B[i] - A[i]) / 2), B[i]);

				}
				
				System.out.println(new_A[n-1]);

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