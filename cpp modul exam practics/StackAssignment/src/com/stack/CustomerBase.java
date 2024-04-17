package com.stack;

import java.util.Scanner;
import java.lang.ArrayIndexOutOfBoundsException;

public class CustomerBase implements CustomerStack {

	Scanner sc = new Scanner(System.in);
	int top = -1;
	Customer[] customer = new Customer[SIZE];
	int index = 0;

	@Override
	public void push(String Name, int AcNumber) {
		System.out.println("+-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-+ \n");

		try {

			if (isEmpty()) {
				System.out.println("inside push");
				if (top == -1) {
					top++;
					customer[top] = new Customer(Name, AcNumber);
				} else

					customer[++top] = new Customer(Name, AcNumber);

			}
		} catch (ArrayIndexOutOfBoundsException e) {
			top = top - 1;
			System.out.println("Stack is Full");

		}

		System.out.println("+-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-+ \n");

	}

	@Override
	public void pop() {
		System.out.println("+-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-+ \n");

		if (top != -1) {
			System.out.println("Inside pop");

			System.out.println(customer[top].toString());
			customer[top] = null;
			top--;

		} else
			System.out.println("Stack is Empty");

		System.out.println("+-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-+ \n");

	}

	@Override
	public void peek() {
		System.out.println("+-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-+ \n");

		System.out.println("inside peek");

		// TODO Auto-generated method stub
		if (top == -1) {

			System.out.println("Stack is empty");
		} else
			System.out.println(customer[top].toString());
		System.out.println("+-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-++-+ \n");

	}

	boolean isEmpty() {
		return (top == -1 || top < SIZE);

	}
}
