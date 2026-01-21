import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n=sc.nextInt();

        int arr[] = new int[n];

        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int i=0;
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                int temp=arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                i++;
            }
        }
        for(int k=0;k<n;k++){
            System.out.print(arr[k]+" ");
        }
    }
}