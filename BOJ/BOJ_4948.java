/* BOJ 4948번: 베르트랑 공준
 */

import java.io.*;

public class BOJ_4948 {
    public static boolean isPrime(int n) {
        if(n<=1) return false;
        for (int i = 2; (i*i) <= n; i++) {
            if (n%i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = -1;

        while(true) {
            int cnt = 0;

            N = Integer.parseInt(br.readLine());
            if(N==0) break;

            for(int i=N+1; i<=2*N; i++) {
                if(isPrime(i)) {
                    cnt++;
                }
            }

            bw.write(cnt+"\n");
        }

        br.close();
        bw.close();
    }
}