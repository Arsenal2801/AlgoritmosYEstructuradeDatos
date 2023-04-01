class Ejercicio3 {
	public static void main (String [] args){
		int [] matriz = {1,7,5,9};
		metodo(matriz);
		for(int i = matriz.length-1; i>=0; i--){
			System.out.println(matriz[i]);
		}
		System.out.println();
	}

	public static void metodo(int [] matriz){
		int num, lugar, m;
		m = matriz.length;
		for(int i = 1; i<m; i++){
			num = matriz[i];
			lugar = i;
			while(lugar>0 && matriz[lugar-1]>num){
				matriz[lugar] = matriz[lugar-1];
				lugar--;
			}
			matriz[lugar]=num;
		}
	}
}
