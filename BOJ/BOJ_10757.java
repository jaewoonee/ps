/* BOJ 10757: 큰 수 A+B
 */

import java.io.*;
import java.util.*;

public class BOJ_10757 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        String A = st.nextToken();
        String B = st.nextToken();

        StringBuilder sb = new StringBuilder();

        int carry = 0;  // 올림인지 아닌지 체크하는 플래그
        int len = 0;  // 최대 길이

        // A와 B중 큰 값에 따라 최대 길이 설정
        if(A.length()>=B.length()) {
            len = A.length();
        }
        else {
            len = B.length();
        }

        int[] arrA = new int[len];
        int[] arrB = new int[len];

        // Int형으로 변환 후 역순 저장
        for(int i=0; i<A.length(); i++) {
            arrA[i] = A.charAt(A.length()-i-1)-'0';
        }
        for(int i=0; i<B.length(); i++) {
            arrB[i] = B.charAt(B.length()-i-1)-'0';
        }

        for(int i=0;i<len;i++) {
            int plus = arrA[i]+arrB[i];

            if(carry!=0) {
                plus++;
                carry = 0;
            }

            if(plus>=10) {
                carry = 1;
                plus -= 10;
            }

            sb.append(plus);
        }

        //마지막 자리수 올림 체크
        if(carry!=0) {
            sb.append(1);
        }

        sb.reverse();
        bw.write(sb.toString());

        br.close();
        bw.close();
    }
}