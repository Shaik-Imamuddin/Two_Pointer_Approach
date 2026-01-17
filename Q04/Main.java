import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n1=sc.nextInt();
        int arr1[] = new int[n1];
        for(int i=0;i<n1;i++){
            arr1[i] =sc.nextInt();
        }

        int n2=sc.nextInt();
        int arr2[] = new int[n2];
        for(int i=0;i<n2;i++){
            arr2[i] =sc.nextInt();
        }

        if(n1!=n2){
            System.out.print("Not Equal");
            return;
        }

        int start=0;
        while(start<n1){
            if(arr1[start]!=arr2[start]){
                System.out.print("Not Equal");
                return;
            }
            start++;
        }
        System.out.print("Equal");
    }
}