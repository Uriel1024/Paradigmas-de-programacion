import java.util.*;

public class main{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int exponente = 0, objetivo, i = 1;
        System.out.println("Ingrese un numero: ");
        objetivo = in.nextInt();

        if(objetivo<1){

            while(objetivo<1){
                System.out.println("Ingrese un numero valido: ");
                objetivo = in.nextInt();
            }

        }

        while(i<objetivo){

            exponente++;

            i=(int) Math.pow(2,exponente);

        }

        exponente--;

        i=(int) Math.pow(2,exponente);;

        System.out.println("El numero que más se acerca a este objetivo " + objetivo + " y es menor a este es " + i + " que es equivalente a 2 elevado a la " + exponente +".");

    }
}

