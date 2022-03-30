/* BOJ 2839: 설탕배달
 * 거스름돈
 */

import java.io.*;

public class BOJ_2839 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(br.readLine());
        int res = 0;

        while(N>0) {
            if(N%5 == 0) {
                res += N/5;
                break;
            }
            else {
                N-=3;
                res++;
            }
        }

        if(N<0) res = -1;

        bw.write(Integer.toString(res));

        br.close();
        bw.close();
    }
}