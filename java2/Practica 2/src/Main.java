import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Ingresa parentesis (): ");
        String a = in.nextLine();
        int n = parentesis(a);
        System.out.println("Los parentesis () se repiten " + n + " veces" );
     }
    public static int parentesis(String a){
        int n = a.length();
        int j = 0;
        char[] par = a.toCharArray();
        for(int i =0; i<n-1; i++ ){
            if((par[i] == '(') && (par[i+1] == ')')){
                i++;
                j++;
            }
        }
        return j;
    }
}