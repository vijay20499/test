

class Ticket {
	private int numAdults, numChildren;
	private int costForAdult, costForChild, adultsCost, childrenCost, totalCost;
	
	Ticket(int costForAdult, int costForChild) {
		this.costForAdult = costForAdult;
		this.costForChild = costForChild;
	}
	
	public int getNumAdults() {
		return numAdults;
	}
	public void setNumAdults(int numAdults) {
		this.numAdults = numAdults;
	}
	public int getNumChildren() {
		return numChildren;
	}
	public void setNumChildren(int numChildren) {
		this.numChildren = numChildren;
	}
	public int getCostForAdult() {
		return costForAdult;
	}
	public void setCostForAdult(int costForAdult) {
		this.costForAdult = costForAdult;
	}
	public int getCostForChild() {
		return costForChild;
	}
	public void setCostForChild(int costForChild) {
		this.costForChild = costForChild;
	}
	public int getAdultsCost() {
		return adultsCost;
	}
	public void setAdultsCost(int adultsCost) {
		this.adultsCost = adultsCost;
	}
	public int getChildrenCost() {
		return childrenCost;
	}
	public void setChildrenCost(int childrenCost) {
		this.childrenCost = childrenCost;
	}
	public int getTotalCost() {
		return totalCost;
	}
	public void setTotalCost(int totalCost) {
		this.totalCost = totalCost;
	}
}

class TicketUtils {
	public static void issue(Ticket ticket, int numAdults, int numChildren, boolean considerDiscount) {
		ticket.setNumAdults(numAdults);
		ticket.setNumChildren(numChildren);
		ticket.setAdultsCost(numAdults * ticket.getCostForAdult()); 
		if (considerDiscount) {
			SalesManager team = new SalesManager(ticket.getCostForAdult(), ticket.getCostForChild(), 1);
			ticket.setCostForChild(team.computeDiscountedChildPrice());
		}
		ticket.setChildrenCost(numChildren * ticket.getCostForChild());
		ticket.setTotalCost(ticket.getAdultsCost() + ticket.getChildrenCost());
	}
	public static void print(Ticket ticket) {
		System.out.println("\n" + ticket.getNumAdults() + " Adults........Rs." + ticket.getAdultsCost());
		System.out.println(ticket.getNumChildren() + " Children......Rs." + ticket.getChildrenCost());
		System.out.println("TOTAL...........Rs." + ticket.getTotalCost() + "\n");
	}
	public static void printPromotion(Ticket ticket) {
		SalesManager team = new SalesManager(ticket.getCostForAdult(), ticket.getCostForChild(), 1);
		team.promote();
	}
}

class SalesManager {
	int costForAdult, costForChild;
	int type;
	public SalesManager(int costForAdult, int costForChild, int type) {
		this.costForAdult = costForAdult;
		this.costForChild = costForChild;
		this.type = type;
	}
	public int computeDiscountedChildPrice() {
		return this.costForChild / 2;
	}
	public void promote() {
		if (type == 1) { // IN PERSON SALES
			/* ASSUME: THE BELOW SYS OUT IS SENT TO PRINTER */
			System.out.println("\nPRINTED: Special Prices for Children!");
			System.out.println("It is now Rs." + this.computeDiscountedChildPrice() + " only!!\n");
		} else if (type == 2) { // REMOTE SALES
			/* ASSUME: THE BELOW SYS OUT IS EMAILED */
			System.out.println("\nEMAILED: Special Prices for Children!");
			System.out.println("It is now Rs." + this.computeDiscountedChildPrice() + " only!!\n");
		}
	}
}

public class ThemePark {
	public static void main(String [] args) {
		Ticket t1 = new Ticket(100, 20);
		TicketUtils.printPromotion(t1);
		TicketUtils.issue(t1, 2, 5, true);
		System.out.println("Congrats! 50% discount applied for children's prices");
		TicketUtils.print(t1);
	}
}
