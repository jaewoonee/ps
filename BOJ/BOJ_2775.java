/* BOJ 2775: 부녀회장이 될테야
 * 동적 계획법, 점화식 apart[i][j] = apart[i-1][j]+apart[i][j-1]
 */

import java.io.*;

public class BOJ_2775 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());

        int[][] apart = new int[15][15];

        for(int i=0;i<15;i++){
            apart[0][i] = i+1;
            apart[i][0] = 1;
        }

        for(int i=1;i<15;i++){
            for(int j=1;j<15;j++){
                apart[i][j] = apart[i-1][j]+apart[i][j-1];
            }
        }

        for (int i=0; i<T; i++) {
            int k = Integer.parseInt(br.readLine());;
            int n = Integer.parseInt(br.readLine());

            bw.write(apart[k][n-1]+"\n");
        }

        br.close();
        bw.close();
    }
}