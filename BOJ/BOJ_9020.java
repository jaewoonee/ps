/* BOJ 9020번: 골드바흐의 추측
 */

import java.io.*;
import java.util.*;

public class BOJ_9020 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        //에라토스테네스의 체
        final int arrLen = 10000;
        ArrayList<Boolean> arr = new ArrayList<>(arrLen+1);
        arr.add(false);
        arr.add(false);
        for(int i=2; i<=arrLen; i++) {
            arr.add(i, true);
        }
        for(int i=2; (i*i)<=arrLen; i++) {
            if(arr.get(i)) {
                for(int j=(i*i); j<=arrLen; j+=i) {
                    arr.set(j, false);
                }
            }
        }

        //입출력
        int T = Integer.parseInt(br.readLine());

        for(int i=0; i<T; i++) {
            int n = Integer.parseInt(br.readLine());
            int a = n/2;
            int b = n/2;

            while(true) {
                if(arr.get(a) && arr.get(b)) {
                    bw.write(a+" "+b+"\n");
                    break;
                }
                a--;
                b++;
            }
        }

        br.close();
        bw.close();
    }
}