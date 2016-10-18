package br.com.hcavalcante;

import java.util.Scanner;

public class AngryProfessor {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		int arrivalTime;
		int onTimeStudents;

		for (int i = 0; i < t; i++) {
			int n = input.nextInt();
			int k = input.nextInt();

			onTimeStudents = 0;
			for (int j = 0; j < n; j++) {
				arrivalTime = input.nextInt();
				if (arrivalTime <= 0) {
					onTimeStudents++;
				}
			}

			if (onTimeStudents >= k) {
				System.out.println("NO");
			} else {
				System.out.println("YES");
			}
		}
		input.close();
	}
}
