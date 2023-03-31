class Ejercicio{

    public static void main(String[] args) {
        short [] matriz = {30,10,64};
        metodo(matriz);
    }

    public static void metodo(short [] a){
        short swp = 0;
        int max = 0;
        for (int j = 0; j < a.length; j++) {
            max = j;
            for (int i = j+1; i < a.length; i++) {
                if(a[max]<a[i]){
                    max = i;
                }
            }
            swp = a[j];
	    a[j] = a[max];
	    a[max] = swp;
	    if (j==0) {
	    	System.out.println(a[0]+" "+a[1]+" "+a[2]);
	    }
        }
    }
}
