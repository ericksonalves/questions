package br.com.hcavalcante;

import java.util.Scanner;

public class TwoDArray {
	
	public static void print2DArray (int array[][], int size){
		int i, j;
		
		for(i = 0; i < size; i++){
            for(j = 0; j < size; j++){
                System.out.print(array[i][j] + " ");
            }
            System.out.println();
        }
	}
	
	public static int sumHourglasses (int array[][], int size){
		int sum = 0;
		
		for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                if (i == 1 && j == 0) {
                	continue;
                }
                else if (i == 1 && j == 2) {
                	continue;
                }
                else {
                	sum += array[i][j];
                }
            }
        }
		
		return sum;
	}
	
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
        int array[][] = new int[6][6];
        int i, j, x, y;
        int max = 0;
        
        for(i = 0; i < 6; i++){
            for(j=0; j < 6; j++){
                array[i][j] = input.nextInt();
            }
        }
        
        input.close();
        
        int subArray[][] = new int[3][3];
        
        for(x = 0; x < 4; x++){
        	for(y = 0; y < 4; y++){
	        	for(i = 0; i < 3; i++){
		            for(j = 0; j < 3; j++){
		            	subArray[i][j] = array[i+x][j+y];
		            }
	            }
	        	
//	        	print2DArray(subArray, 3);
//	        	System.out.println(sumHourglasses(subArray, 3));
//	        	System.out.println();	 
	        	
	        	if (sumHourglasses(subArray, 3) > max) {
	        		max = sumHourglasses(subArray, 3);
	        	}
        	}
        }
        
        System.out.println(max);
	}
}

/*
1 1 1 0 0 0
0 1 0 0 0 0
1 1 1 0 0 0
0 0 2 4 4 0
0 0 0 2 0 0
0 0 1 2 4 0
*/