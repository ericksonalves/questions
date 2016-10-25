package algorithm;

import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		String[] parameters = input.nextLine().split(" ");
		String[] values = input.nextLine().split(" ");

		input.close();

		int count = Integer.valueOf(parameters[0]);
		int rotationCount = Integer.valueOf(parameters[1]);
		String[] output = new String[count];

		for (int i = 0; i < count; i++) {
			int targetIndex;

			if (i >= rotationCount) {
				targetIndex = i - rotationCount;
			} else {
				targetIndex = count + i - rotationCount;
			}

			output[targetIndex] = values[i];
		}

		for (String value : output) {
			System.out.format("%s ", value);
		}
	}
}
