import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int k=sc.nextInt();

        int start=0,end=1;

        while(end<n){
            int diff = arr[end]-arr[start];

            if(diff==k && start!=end){
                System.out.print(arr[start]+" "+arr[end]);
                return;
            }

            if(diff<k)
                end++;
            else    
                start++;

            if(start==end)
                end++;
        }
        System.out.print("No pair Found");
    }    
}
