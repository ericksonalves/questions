package br.com.hcavalcante;

import java.util.Scanner;

public class TwoDArray {
	public static int sumHourglasses(int array[][], int size) {
		int sum = 0;

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (!(i == 1 && (j == 0 || j == 2))) {
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

		for (i = 0; i < 6; i++) {
			for (j = 0; j < 6; j++) {
				array[i][j] = input.nextInt();
			}
		}

		input.close();

		int subArray[][] = new int[3][3];
		int max = -999;

		for (x = 0; x < 4; x++) {
			for (y = 0; y < 4; y++) {
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						subArray[i][j] = array[i + x][j + y];
					}
				}

				if (sumHourglasses(subArray, 3) > max) {
					max = sumHourglasses(subArray, 3);
				}
			}
		}

		System.out.println(max);
	}
}
