/* BOJ 10250: ACM 호텔
 * 수식
 */

import java.io.*;
import java.util.StringTokenizer;

public class BOJ_10250 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());

        for (int i=0; i<T; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            int H = Integer.parseInt(st.nextToken());
            int W = Integer.parseInt(st.nextToken());
            int N = Integer.parseInt(st.nextToken());

            int x = N/H+1;
            int y = N%H;

            if(y==0){
                x = N/H;
                y = H*100;
            }
            else{
                x = N/H+1;
                y = (N%H)*100;
            }

            bw.write(y+x+"\n");
        }
        br.close();
        bw.close();
    }
}