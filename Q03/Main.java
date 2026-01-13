import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str= sc.nextLine();
        int start=0,end=str.length()-1;

        while(start<end){
            if(Character.isLetterOrDigit(str.charAt(start))==false){
                start++;
                continue;
            }
            if(Character.isLetterOrDigit(str.charAt(end))==false){
                end--;
                continue;
            }

            if (Character.toLowerCase(str.charAt(start))!=Character.toLowerCase(str.charAt(end))){
                System.out.println("Not Palindrome");
                return;
            }
            start++;
            end--;
        }
        System.out.println("Palindrome");
    }    
}