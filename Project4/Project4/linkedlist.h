#pragma once


#include <iostream>
#include "Node.h"
#include "players.h"
#include"card.h"
using namespace std;
using namespace System;
typedef string ElementType;

class LinkedList
{
public:

    typedef Node* NodePointer;


    //------ DATA MEMBERS
    NodePointer first;


    int mySize;


    //------ List OPERATIONS
    LinkedList();
    void implement(ElementType value, int index, int price, bool o1, bool o2, int r);


    String^ traverse(players& p, players& p2, cards& c);
    String^ traverse2(players& p, cards& c);

    void getback(players& p);
    void start(players& p1, players& p2);
    void traveltojail(players& p1);
    void traveltojailfromcards(players& p1);
    void buy(players& p1, players& p2);
    void buy2(players& p1, players& p2);
    void viewproperties(players& p1, players& p2);
    void paytax(players& p1, players& p2);
    void paytax2(players& p1, players& p2);
    void notvalid(players& p1, players& p2);
    void drawcard(players& p1, players& p2, cards& c);
    void drawcard2(players& p1, players& p2, cards& c);
    void jump3steps(players& p, cards& c);
    bool lose(players& p1, players& p2);

};