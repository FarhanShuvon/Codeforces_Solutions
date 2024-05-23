/**
 * PQ
 */
import java.io.*;
import java.util.*;
public class PQ {

    public static void main(String[] args) {
        Scanner cin= new Scanner(System.in);
        int n=cin.nextInt();
        int m=cin.nextInt();
        PriorityQueue<Long>MH=new PriorityQueue<>((a,b)-> Long.compare(b, a));
        for(int i=0;i<n;i++){
            long temp=cin.nextLong();
            MH.offer(temp);
        }
        for(int i=0;i<m;i++){
            long mx=MH.poll();
            mx=mx/2;
            MH.offer(mx);
        }
        long ans=0;
        while (!MH.isEmpty()) {
            ans+=MH.poll();
        }
        System.out.println(ans);
    }
}