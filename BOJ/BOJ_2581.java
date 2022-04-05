/* BOJ 2581번: 소수
 */

import java.io.*;

public class BOJ_2581 {
    public static boolean isPrime(int n) {
        if(n<=1) return false;
        for (int i = 2; i < n; i++) {
            if (n%i == 0) return false;
        }
        return true;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int M = Integer.parseInt(br.readLine());
        int N = Integer.parseInt(br.readLine());

        int sum = 0;
        int min = 0;

        for(int i = M; i<=N;i++) {
            if(isPrime(i)) {
                sum+=i;
                if(min==0) {
                    min=i;
                }
            }
        }

        if(sum==0) {
            bw.write("-1");
        }
        else {
            bw.write(sum+"\n");
            bw.write(min+"");
        }
        br.close();
        bw.close();
    }
}