package br.com.hcavalcante;

import java.util.Scanner;

public class ArrayDS {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int array[] = new int[n];
		int i;

		for (i = 0; i < n; i++) {
			array[i] = input.nextInt();
		}
		input.close();

		for (i = n - 1; i >= 0; i--) {
			System.out.print(array[i] + " ");
		}
	}
}
