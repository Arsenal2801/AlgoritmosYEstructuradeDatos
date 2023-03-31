class Ejerciocio2 {
        public static void main (String [] args){
                char [] matriz = {'e','u','o','i','a'};
                metodo(matriz);
                for(int i = 0; i<matriz.length; i++){
                        System.out.println(matriz[i]);
                }
        }
        public static void metodo(char [] vocales){
          	int n = vocales.length;
        	for (int i = 0; i < n-1; i++) {
            		int minIndex = i;
            		for (int j = i+1; j < n; j++) {
            	    		if (vocales[j] < vocales[minIndex]) {
	                   	 minIndex = j;
        	       		 }
           		 }
            	char temp = vocales[minIndex];
            	vocales[minIndex] = vocales[i];
            	vocales[i] = temp;
        	}
        }
}
