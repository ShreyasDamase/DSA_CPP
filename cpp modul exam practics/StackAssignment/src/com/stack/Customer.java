package com.stack;

public class Customer {

	public Customer(String name, int accountno) {
		super();
		this.name = name;
		this.accountno = accountno;
	}

	public String name;
	public int accountno;

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public int getAccountno() {
		return accountno;
	}

	public void setAccountno(int accountno) {
		this.accountno = accountno;
	}

	@Override
	public String toString() {
		return "Customer Name:" + name + " Account No:" + accountno;
	}

}
