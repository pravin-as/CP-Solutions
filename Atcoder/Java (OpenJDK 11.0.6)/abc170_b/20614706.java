//This code is written by प्रविण शंखपाळ 

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.StringTokenizer;
import java.util.Vector;

public class Main {

	public static void main(String[] args) {
		try {
			FastReader fr = new FastReader();

			String str = fr.next();

			if (str.equals("RRR")) {

				System.out.println(3);

			} else if (str.equals("RRS")) {

				System.out.println(2);

			} else if (str.equals("RSR")) {
				System.out.println(1);

			} else if (str.equals("SRR")) {
				System.out.println(2);

			} else if (str.equals("SSR")) {
				System.out.println(1);

			} else if (str.equals("SRS")) {
				System.out.println(1);

			} else if (str.equals("RSS")) {
				System.out.println(1);

			} else if (str.equals("SSS")) {
				System.out.println(0);

			}

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
