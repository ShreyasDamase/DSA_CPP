package com.stack;

import java.util.Scanner;

public class tester {
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		boolean Exit = true;
		System.out.println("Enter choice(FIXED/GROWABLE)");
		String input = sc.next();
		String choice = input.toLowerCase();

		CustomerBase customerBase1 = new CustomerBase();
		CustomerBaseGrowable customerBase2 = new CustomerBaseGrowable();

		while (Exit)

		{
			System.out.println("Enter the choice:1.push 2. pop 3. peek 4.exit");
			switch (sc.nextInt()) {
			case 1:
				System.out.print("Cusomer name:");
				String Name = sc.next();
				System.out.print("");

				System.out.print("Cusomer AcountNumber:");
				int AcNumber = sc.nextInt();
				System.out.print("");

				if (choice.equals("fixed")) {
					customerBase1.push(Name, AcNumber);

				} else if (choice.equals("growable")) {
					customerBase2.push(Name, AcNumber);

				} else {
					System.out.println("Insert valid input");
				}
				break;
			case 2:

				if (choice.equals("fixed")) {

					customerBase1.pop();

				} else if (choice.equals("growable")) {
					customerBase2.pop();

				} else {
					System.out.println("Insert valid input");
				}

				break;
			case 3:

				if (choice.equals("fixed")) {

					customerBase1.peek();

				} else if (choice.equals("growable")) {
					customerBase2.peek();

				} else {
					System.out.println("Insert valid input");
				}

				break;

			case 4:
				Exit = false;
				break;
			default:
				break;

			}

		}
		sc.close();

	}

}
