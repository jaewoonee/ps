/* BOJ 1929번: 소수 구하기
 * 에라토스테네스의 체
 */

import java.io.*;
import java.util.*;

public class BOJ_1929 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine()," ");
        int M = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());

        //에라토스테네스의 체
        ArrayList<Boolean> arr = new ArrayList<>(N+1);
        arr.add(false);
        arr.add(false);
        for(int i=2; i<=N; i++) {
            arr.add(i, true);
        }
        for(int i=2; (i*i)<=N; i++) {
            if(arr.get(i)) {
                for(int j=(i*i); j<=N; j+=i) {
                    arr.set(j, false);
                }
            }
        }

        //출력
        for(int i=M; i<=N; i++) {
            if(arr.get(i)== true) {
                bw.write(i+"\n");
            }
        }

        br.close();
        bw.close();
    }
}
