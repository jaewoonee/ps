/* BOJ 1978번: 소수 찾기
 */

import java.io.*;

public class BOJ_1978 {
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

        int N = Integer.parseInt(br.readLine());
        String token[] = br.readLine().split(" ");

        int cnt = 0;

        for(int i=0;i<N;i++) {
            if(isPrime(Integer.parseInt(token[i]))) cnt++;
        }

        bw.write(cnt+"");

        br.close();
        bw.close();
    }
}
