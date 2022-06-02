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

			int n = fr.nextInt();

			String str = fr.next();

			char A[] = str.toCharArray();

			int arr1[] = new int[n];
			int arr2[] = new int[n];

			for (int i = 0; i < n; i++) {

				arr1[i] = Character.getNumericValue(A[i]);

			}

			for (int i = 0; i < n; i++) {

				arr2[i] = Character.getNumericValue(A[i + n]);

			}

			Arrays.sort(arr1);
			Arrays.sort(arr2);

			int count_1_bada = 0;
			int count_2_bada = 0;

			for (int i = 0; i < n; i++) {

				if (arr1[i] > arr2[i]) {
					count_1_bada++;
				} else if (arr1[i] < arr2[i]) {
					count_2_bada++;
				}

			}

			System.out.println((count_1_bada == n || count_2_bada == n) ? "YES" : "NO");

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