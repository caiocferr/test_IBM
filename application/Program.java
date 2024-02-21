package application;

public class Program {
    public static void main(String[] args) {
        int vet[] = { -4, -2, -5, 1, 6,2,9 }; // index values were given by default
        int k = 2; // same with k(num of index jumped by the hacker)
        Integer larg_sum = Integer.MIN_VALUE ;
        Integer security_val = null;

        for (int j = 0; j < vet.length; j++) {
            // System.out.println(vet[j]);
            int sum = vet[j];
            int c = j;
            while (c < vet.length) {
                if (c + k < vet.length) {
                    sum += vet[c + k];
                }
                c += k;
            }
            if (sum > larg_sum) {
                // maior_soma = vet[j];
                larg_sum = sum;
                security_val = vet[j];
            }

        }
        System.out.println("A melhor posição para iniciar é: " + security_val);

        /*
         * int sum = vet[j];
         * j+=k;
         * while (j+k<=vet.length) {
         * sum+=vet[j+k];
         * }
         * if(sum>maior_soma){
         * maior_soma=vet[j];
         * }
         * }
         * System.out.println("A melhor posição para iniciar é: "+ maior_soma);
         */

        /*
         * for (int i : vet) {
         * int sum;
         * if (condition) {
         * 
         * }
         * sum= vet[i]+vet[i+k];
         * }
         */

    }
}
