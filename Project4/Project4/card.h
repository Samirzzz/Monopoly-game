#pragma once

#include <stdio.h>
#include <iostream>
using namespace std;


typedef int cardsElement;

class cards
{
public:

    cards();


    cards(const cards& original);

    ~cards();

    bool empty() const;

    void push(const cardsElement value, string x);


    void display(ostream& out) const;


    string top() const;

    void pop();


private:

    class Node
    {
    public:
        cardsElement data;
        string dare;
        Node* next;

        Node(cardsElement value, string d, Node* link = 0)

            : data(value), next(link), dare(d)
        {}
    };

    typedef Node* NodePointer;


    NodePointer myTop;

};




