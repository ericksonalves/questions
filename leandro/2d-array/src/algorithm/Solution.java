package algorithm;

import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		final int maximumLineCount = 6;
		final int maximumColumnCount = 6;
		final int maximumLength = 4;

		int[][] values = new int[maximumLineCount][maximumColumnCount];
		int i, j;
		Integer maximumSum = null;

		Scanner input = new Scanner(System.in);

		for (i = 0; i < maximumLineCount; i++) {
			String line = input.nextLine();
			String[] numbers = line.split(" ");

			j = 0;

			for (String number : numbers) {
				values[i][j++] = Integer.valueOf(number);
			}
		}

		input.close();

		i = 0;
		j = 0;

		for (int x = 0; x < maximumLength; x++) {
			for (int y = 0; y < maximumLength; y++) {
				int sum = values[i][j] + values[i][j + 1] + values[i][j + 2] + values[i + 1][j + 1] + values[i + 2][j]
						+ values[i + 2][j + 1] + values[i + 2][j + 2];

				if (maximumSum == null || sum > maximumSum) {
					maximumSum = sum;
				}

				j++;
			}

			i++;
			j = 0;
		}

		System.out.println(maximumSum);
	}
}