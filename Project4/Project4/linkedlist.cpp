#include "linkedlist.h"
#include "card.h"
#include"players.h"
using namespace std;

LinkedList::LinkedList()
{
	first = NULL;
}

void LinkedList::implement(ElementType value, int index, int price, bool o1, bool o2, int r)
{
	NodePointer newptr = new Node(value, price, o1, o2, r);
	NodePointer pred = new Node();

	pred = first;

	if (index == 0) {
		newptr->next = first;
		first = newptr;
		first->prev = NULL;

	}
	else {
		for (int i = 1; i < index; i++) {
			pred = pred->next;
		}
		newptr->next = pred->next;
		pred->next = newptr;
		newptr->prev = pred;
		newptr->next = first;
		first->prev = newptr;

	}


}

void LinkedList::start(players& p1, players& p2)
{
	p1.position = first;
	p2.position = first;


}

void LinkedList::traveltojail(players& p1)
{
	if (p1.position->data == "police") {
		for (int i = 0; i < 10; i++)
		{

			p1.position = p1.position->next;

		}
		p1.balance -= 100;
		cout << "you have been transferred to the prison you will pay 100 LE" << endl;
		cout << p1.name << " new balance = " << p1.balance;

	}
}
void LinkedList::traveltojailfromcards(players& p1)
{
	if (p1.position->data == "draw card") {
		for (int i = 0; i < 5; i++)
		{

			p1.position = p1.position->next;

		}
		p1.balance -= 100;
		cout << "you have been transferred to the prison you will pay 100 LE" << endl;
		cout << p1.name << " new balance = " << p1.balance;

	}
}

void LinkedList::buy(players& p1, players& p2)
{

	if (p1.position->data == "draw card" || p1.position->data == "police" || p1.position->data == "jail" || p1.position->data == "Goo") {
		cout << "This item can not be bought\n";
		return;

	}
	else if (p1.position->isowned == false && p1.position->isowned2 == true) {
		cout << "owned by " << p2.name << endl;
	}
	else if (p1.position->isowned == true && p1.position->isowned2 == false) {
		cout << "owned by " << p1.name << endl;
	}
	else if (p1.position->isowned == false && p1.position->isowned2 == false) {
		if (p1.balance < p1.position->price) {
			cout << "Balance is not enough \n";

		}
		else {
			p1.balance = p1.balance - (p1.position->price);
			p1.position->isowned = true;
			cout << "item " << p1.position->data << " is bought successfully" << endl << "your balance = " << p1.balance << endl;
		}

	}


}

void LinkedList::buy2(players& p1, players& p2)
{

	if (p2.position->data == "draw card" || p2.position->data == "police" || p2.position->data == "jail") {
		cout << "This item cant be bought\n";
		return;

	}


	else if (p2.position->isowned == false && p2.position->isowned2 == true) {
		cout << "owned by " << p1.name << endl;
	}
	else if (p2.position->isowned == true && p2.position->isowned2 == false) {
		cout << "owned by " << p1.name << endl;
	}
	else if (p2.position->isowned == false && p2.position->isowned2 == false) {
		if (p2.balance < p2.position->price) {
			cout << "Balance is not enough \n";

		}
		else {
			p2.balance = p2.balance - (p2.position->price);
			p2.position->isowned2 = true;
			cout << "item " << p2.position->data << " is bought successfully" << endl << "your balance = " << p2.balance << endl;
		}





	}


}

void LinkedList::viewproperties(players& p1, players& p2)
{
	while (p1.position->isowned == true && p1.position->isowned2 == false) {

		cout << p1.position->data << " --- ";
		p1.position = p1.position->next;



		//cout << "no properties" << endl;
	}

}
void LinkedList::paytax(players& p1, players& p2)
{
	if (p1.position->isowned == false && p1.position->isowned2 == true) {
		p1.balance -= p1.position->rentalprice;
		p2.balance += p1.position->rentalprice;
		cout << p1.name << " payed to " << p2.name << " " << p1.position->rentalprice << endl;
		cout << p1.name << " new balance = " << p1.balance << endl;
		cout << p2.name << " new balance = " << p2.balance << endl;
	}
}
void LinkedList::paytax2(players& p1, players& p2)
{
	if (p2.position->isowned == true && p2.position->isowned2 == false) {
		p2.balance -= p2.position->rentalprice;
		p1.balance += p2.position->rentalprice;
		cout << p2.name << " payed to  " << p1.name << " " << p1.position->rentalprice << endl;
		cout << p1.name << " new balance = " << p1.balance << endl;
		cout << p2.name << " new balance = " << p2.balance << endl;
	}
}

void LinkedList::drawcard(players& p1, players& p2, cards& c)
{
	if (p1.position->data == "draw card") {
		cout << "you will draw a card" << endl;
		cout << "your dare is to " << c.top() << endl;
		if (c.top() == "Take from your friend 50 LE") {
			p1.balance += 50;
			p2.balance -= 50;
		}
		else if (c.top() == "Jump 3 steps") {
			jump3steps(p1, c);
		}
		else if (c.top() == "Go Back 4 steps") {
			getback(p1);
		}
		else if (c.top() == "pay 200 LE to your Friend") {
			p1.balance -= 200;
			p2.balance += 200;
			cout << endl;
			cout << p1.name << " new balance = " << p1.balance << endl;
			cout << p2.name << " new balance = " << p2.balance << endl;
		}
		else if (c.top() == "go to jail") {
			traveltojailfromcards(p1);
		}
		else if (c.top() == "Today is your birthday take from your friend 100 LE") {
			p1.balance += 100;
			p2.balance -= 100;
			/*cout << p1.name << " new balance = " << p1.balance << endl;
			cout << p2.name << " new balance = " << p2.balance << endl;*/
		}
		c.pop();
	}
}


void LinkedList::jump3steps(players& p, cards& c)
{
	for (int i = 0; i < 3; i++)
	{
		p.position = p.position->next;
	}

}

bool LinkedList::lose(players& p1, players& p2)
{
	if (p1.balance == 0) {
		cout << p2.name << " wins";
		return true;

	}

	if (p2.balance == 0) {
		cout << p1.name << " wins";

		return true;

	}

	return false;

}

//void LinkedList::display(ostream& out) const
//{
//	Node* current;
//	current = first;
//	int x = 0;
//	while (current != NULL) {
//		cout << current->data << " ";
//		current = current->next;
//		x++;
//		if (x == 20) {
//			break;
//		}
//		if (x % 5 == 0) {
//			out << endl;
//			out << endl;
//		}
//
//	}
//	out << endl;
//}


String^ LinkedList::traverse(players& p, players& p2, cards& c)
{
	int x;
	srand(time(0));
	x = rand() % 6 + 1;

	for (int i = 0; i < x; i++) {
		p.position = p.position->next;
	}


	//cout << "Dice = " << x << endl;
	traveltojail(p);

	drawcard(p, p2, c);
	string f = p.position->data;
	String^ z = gcnew String(f.c_str());
	return z;
}
String^ LinkedList::traverse2(players& p, cards& c)
{
	int x;
	srand(time(0));
	x = rand() % 6 + 1;

	for (int i = 0; i < x; i++) {
		p.position = p.position->next;
	}


	//cout << "Dice = " << x << endl;
	traveltojail(p);

	//drawcard(p,  c);
	string f = p.position->data;
	String^ z = gcnew String(f.c_str());
	return z;
}



void LinkedList::getback(players& p)
{

	for (int i = 0; i < 4; i++) {
		p.position = p.position->prev;
	}
	//cout << p.name << " is now standing on : " << p.position->data << endl;
}
