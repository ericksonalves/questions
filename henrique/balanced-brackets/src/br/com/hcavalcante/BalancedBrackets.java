package br.com.hcavalcante;

import java.util.Scanner;
import java.util.Stack;

public class BalancedBrackets {

	public static void main(String[] args) {
		int i, j, t, strLength, closingBrackets;
		String str;

		Scanner input = new Scanner(System.in);
		t = input.nextInt();

		Stack<Character> openingBrackets;
		
		for (i = 0; i < t; i++) {
			openingBrackets = new Stack<Character>();
			closingBrackets = 0;

			str = input.next();
			strLength = str.length();

			for (j = 0; j < strLength; j++) {
				if (str.charAt(j) == '(' || str.charAt(j) == '[' || str.charAt(j) == '{') {
					openingBrackets.push(str.charAt(j));
				} else {
					closingBrackets++;
					if (!openingBrackets.isEmpty()) {
						if ((openingBrackets.peek().equals('(') && str.charAt(j) == ')')
								|| (openingBrackets.peek().equals('[') && str.charAt(j) == ']')
								|| (openingBrackets.peek().equals('{') && str.charAt(j) == '}')) {
							openingBrackets.pop();
							closingBrackets--;
						}
					}
				}
			}

			if (openingBrackets.isEmpty() && closingBrackets == 0) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}

			openingBrackets.clear();
		}

		input.close();
	}
}