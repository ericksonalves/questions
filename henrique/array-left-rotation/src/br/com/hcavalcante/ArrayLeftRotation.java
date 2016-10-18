package br.com.hcavalcante;

import java.util.Scanner;

public class ArrayLeftRotation {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int n = input.nextInt();
		int d = input.nextInt();
		int array[] = new int[n];
		int i;
		int first;

		for (i = 0; i < n; i++) {
			array[i] = input.nextInt();
		}
		input.close();

		while (d > 0) {
			first = array[0];

			for (i = 0; i < n - 1; i++) {
				array[i] = array[i + 1];
			}
			array[n - 1] = first;

			d--;
		}

		for (i = 0; i < n; i++) {
			System.out.print(array[i] + " ");
		}
	}
}
