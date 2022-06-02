/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class FairchildTangerine {

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

	public static void main(String[] args) {
		try {

		FastReader s = new FastReader();
		int T = s.nextInt();

		while (T > 0) {

			String str[] = new String[3];
			str = s.nextLine().split(" ");

			char[] A1 = str[0].toCharArray();
			char[] A2 = str[1].toCharArray();
			char[] A3 = str[2].toCharArray();

			Arrays.sort(A1);
			Arrays.sort(A2);
			Arrays.sort(A3);

			boolean flag1 = Arrays.equals(A1, A2);
			boolean flag2 = Arrays.equals(A1, A3);
			if (flag1 && flag2) {
				System.out.println("Possible");
			} else {
				System.out.println("Not Possible");
			}

			T--;
		}
		} catch (

		Exception e) {
			return;

		}
	}
}