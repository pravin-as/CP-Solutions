//This code is written by प्रविण शंखपाळ 


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
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
import javafx.util.Pair;

public class Luna_Lovegood {

	public static void main(String[] args) {

		try {

			FastReader fr = new FastReader();

			int n = fr.nextInt();

			String str = fr.next();

			int count = 0;

			int x = 0;
			int y = 0;

			int a = 0;
			int b = 0;

			for (int i = 0; i < n - 1; i++) {

				a = x;
				b = y;

				if (str.charAt(i) == 'U') {

					x++;

				} else {

					y++;
				}

				if (x == y) {

					if (a < b) {

						if (str.charAt(i + 1) == 'U') {
							count++;
						}

					} else if (a > b) {

						if (str.charAt(i + 1) == 'R') {
							count++;
						}

					}

				}

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
