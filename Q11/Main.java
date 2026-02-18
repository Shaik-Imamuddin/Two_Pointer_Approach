import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();               
        int arr[]= new int[n];
        //input will be in sorted order
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
                    
        int target = sc.nextInt();

        int start=0,end=n-1;

        while(start<end){
            int sum = arr[start]+arr[end];

            if(sum==target){
                System.out.print(arr[start]+" "+arr[end]);
                break;
            } 
            else if(sum<target)
                start++;
            else
                end--;
        }
    }
}