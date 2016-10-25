package algorithm;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		List<String> outputs = new ArrayList<>();
		String[] parameters;

		int testCasesCount = Integer.valueOf(input.nextLine());

		for (int i = 1; i <= testCasesCount; i++) {
			parameters = input.nextLine().split(" ");

			int threshold = Integer.valueOf(parameters[1]);

			parameters = input.nextLine().split(" ");

			int currentStudentsCount = 0;

			for (String parameter : parameters) {
				int time = Integer.valueOf(parameter);

				if (time <= 0) {
					currentStudentsCount++;
				}
			}

			if (currentStudentsCount >= threshold) {
				outputs.add("NO");
			} else {
				outputs.add("YES");
			}
		}

		input.close();

		for (String output : outputs) {
			System.out.println(output);
		}
	}
}
