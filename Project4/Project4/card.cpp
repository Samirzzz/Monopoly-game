//
//#include <new>
//using namespace std;
//
//#include "card.h"
//cards::cards()
//    : myTop(0)
//{}
//
//
//cards::~cards()
//{
//
//    cards::NodePointer currPtr = myTop,
//        nextPtr;
//    while (currPtr != 0)
//    {
//        nextPtr = currPtr->next;
//        delete currPtr;
//        currPtr = nextPtr;
//    }
//}
//
//bool cards::empty() const
//{
//    return (myTop == 0);
//}
//
//
//void cards::push(const cardsElement& value, string& x)
//{
//    myTop = new cards::Node(value, x, myTop);
//}
//
//
//void cards::display(ostream& out) const
//{
//    cards::NodePointer ptr;
//    for (ptr = myTop; ptr != 0; ptr = ptr->next)
//        out << ptr->dare << endl;
//}
//
//
//ostream& operator<< (ostream& out, const cards& acards)
//{
//    acards.display(out);
//    return out;
//}
//
//
//string cards::top() const
//{
//
//    return (myTop->dare);
//
//}
//
//
//void cards::pop()
//{
//    if (!empty())
//    {
//        cards::NodePointer ptr = myTop;
//        myTop = myTop->next;
//        delete ptr;
//    }
//    else
//        cerr << "*** cards is empty -- can't remove a value ***\n";
//}

#include <new>
using namespace std;

#include "card.h"
cards::cards()
    : myTop(0)
{}


cards::~cards()
{

    cards::NodePointer currPtr = myTop,
        nextPtr;
    while (currPtr != 0)
    {
        nextPtr = currPtr->next;
        delete currPtr;
        currPtr = nextPtr;
    }
}

bool cards::empty() const
{
    return (myTop == 0);
}


void cards::push(const cardsElement value, string x)
{
    myTop = new cards::Node(value, x, myTop);
}


void cards::display(ostream& out) const
{
    cards::NodePointer ptr;
    for (ptr = myTop; ptr != 0; ptr = ptr->next)
        out << ptr->dare << endl;
}


ostream& operator<< (ostream& out, const cards& acards)
{
    acards.display(out);
    return out;
}


string cards::top() const
{

    return (myTop->dare);

}


void cards::pop()
{
    if (!empty())
    {
        cards::NodePointer ptr = myTop;
        myTop = myTop->next;
        delete ptr;
    }
    else
        cerr << "*** cards is empty -- can't remove a value ***\n";
}
