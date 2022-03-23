import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int x = sc.nextInt();
       int a = 0, b = 0;
       int cnt=1;
       while(x>0) {
           for(int i=1; i<=cnt && x>0; i++){
               if(cnt%2==0) {
                   a=i;
                   b=cnt+1-i;
                   x--;
               }
               else {
                   a = cnt+1-i;
                   b = i;
                   x--;
               }
           }
           cnt++;
       }
       System.out.println(a+"/"+b);
    }
}