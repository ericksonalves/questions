package algorithm;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
import java.util.Stack;

public class Solution {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);

		int count = Integer.valueOf(input.nextLine());
		List<String> sequenceBrackets = new ArrayList<>();

		for (int i = 1; i <= count; i++) {
			sequenceBrackets.add(input.nextLine());
		}

		input.close();

		for (String sequence : sequenceBrackets) {
			int sequenceLength = sequence.length();

			if (sequenceLength % 2 != 0) {
				System.out.println("NO");
				continue;
			}

			char[] brackets = sequence.toCharArray();
			Stack<Character> openingBrackets = new Stack<>();

			for (char bracket : brackets) {
				if (bracket == '{' || bracket == '(' || bracket == '[') {
					openingBrackets.push(bracket);
				} else if (!openingBrackets.isEmpty()) {
					char lastOpeningBracket = openingBrackets.peek();

					if ((lastOpeningBracket == '{' && bracket == '}') || (lastOpeningBracket == '(' && bracket == ')')
							|| (lastOpeningBracket == '[' && bracket == ']')) {
						openingBrackets.pop();
					} else {
						break;
					}
				} else {
					openingBrackets = null;
					break;
				}
			}

			if (openingBrackets != null && openingBrackets.isEmpty()) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
