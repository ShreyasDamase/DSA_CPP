package com.stack;

import java.util.Scanner;
import java.lang.ArrayIndexOutOfBoundsException;

public class CustomerBaseGrowable implements CustomerStack {

	int size = 1;
	Scanner sc = new Scanner(System.in);
	int top = -1;
	Customer[] customer = new Customer[size];

	@Override
	public void push(String Name, int AcNumber) {
		try {
			System.out.println("******************************************* \n");

			System.out.println("Growable stack");
			if (isEmpty()) {
				System.out.println("Inside Push");
				if (top == -1) {
					top++;

					customer[top] = new Customer(Name, AcNumber);
					System.out.println(customer[top].toString());

				} else {

					customer[++top] = new Customer(Name, AcNumber);
					System.out.println(customer[top].toString());
				}
				System.out.println("******************************************* \n");

			}
		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Stack is Full");

			System.out.println("Length before expantion:" + customer.length);
			size = size * 2;
			Customer[] newCustomerArray = new Customer[size];

			System.arraycopy(customer, 0, newCustomerArray, 0, customer.length);

			customer = newCustomerArray;
			customer[top] = new Customer(Name, AcNumber);

			System.out.println("******************************************* \n");
			System.out.println("Length After expantion:" + customer.length);

			System.out.println("Stack Exapantion take placed \n");
			System.out.println(customer[top].toString());

		}

	}

	@Override
	public void pop() {
		System.out.println("******************************************* \n");

		if (isEmpty()) {
			System.out.println("inside pop");

			System.out.println(customer[top].toString());
			customer[top] = null;
			top--;
			System.out.println("******************************************* \n");

		}

	}

	@Override
	public void peek() {
		System.out.println("******************************************* \n");

		System.out.println("offset 1 checked top" + top);

		System.out.println("inside peek");

		// TODO Auto-generated method stub
		if (top == -1) {

			System.out.println("Stack is empty");
		} else
			System.out.println(customer[top].toString());
		System.out.println("******************************************* \n");
	}

	boolean isEmpty() {
		return (top == -1 || top < customer.length);

	}
}
