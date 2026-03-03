import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int[] arr = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int min = arr[0];
        int maxdiff = arr[1]-arr[0];

        for(int i=0;i<n;i++){
            int diff = arr[i]-min;

            if(diff>maxdiff)
                maxdiff=diff;

            if(arr[i]<min)
                min=arr[i];
        }
        System.out.println(maxdiff);
    }
}