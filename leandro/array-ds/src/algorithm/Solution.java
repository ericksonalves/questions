package algorithm;

import java.util.Scanner;

public class Solution {
	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		int count = Integer.valueOf(input.nextLine());
		String[] parameters = input.nextLine().split(" ");
		
		input.close();
		
		for (int i = count - 1; i >= 0; i--) {
			int number = Integer.valueOf(parameters[i]);
			System.out.format("%d ", number);
		}
	}
}
