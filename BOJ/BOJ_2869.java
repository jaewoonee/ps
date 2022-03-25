/* BOJ 2869번: 달팽이는 올라가고 싶다
 * 반복문을 쓰지 않고 수식을 작성해 실행시간 줄이기
 */
import java.io.*;
import java.util.StringTokenizer;

public class BOJ_2869 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        int V = Integer.parseInt(st.nextToken());

        int day = (V-B)/(A-B);

        if((V-B)%(A-B)!=0) day++;

        bw.write(Integer.toString(day));
        bw.flush();
        br.close();
        bw.close();
    }
}