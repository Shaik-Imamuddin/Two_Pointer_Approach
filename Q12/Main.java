import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n=sc.nextInt();
        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }

        int start=0,target=1;
        while(start<n){
            if(arr[start]==target){
                start++;
                target++;
            }
            else{
                System.out.print(target);
                return;
            }
        }
        System.out.print(target);
    }
}