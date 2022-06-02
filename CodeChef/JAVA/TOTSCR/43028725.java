/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */
class Pineapple {
	
	 static class FastReader {
	        BufferedReader br;
	        StringTokenizer st;
	 
	        public FastReader()
	        {
	            br = new BufferedReader(
	                new InputStreamReader(System.in));
	        }
	 
	        String next()
	        {
	            while (st == null || !st.hasMoreElements()) {
	                try {
	                    st = new StringTokenizer(br.readLine());
	                }
	                catch (IOException e) {
	                    e.printStackTrace();
	                }
	            }
	            return st.nextToken();
	        }
	 
	        int nextInt() { return Integer.parseInt(next()); }
	 
	        long nextLong() { return Long.parseLong(next()); }
	 
	        double nextDouble()
	        {
	            return Double.parseDouble(next());
	        }
	 
	        String nextLine()
	        {
	            String str = "";
	            try {
	                str = br.readLine();
	            }
	            catch (IOException e) {
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

			int N = s.nextInt();
			int K = s.nextInt();

			long A[] = new long[K];

			for (int i = 0; i < K; i++) {

				A[i] = s.nextLong();

			}
			String B[] = new String[N];
			
			for (int i = 0; i < N; i++) {
				
				B[i] = s.next();
				
			}

			for (int i = 0; i < N; i++) {
				long x = 0;
				for (int j = 0; j < K; j++) {

					if (B[i].charAt(j) == '1') {
						x += A[j];
					}
					
				}System.out.println(x);

			}

			T--;
		}

		} catch (Exception e) {
			return;
		}

	}
}
