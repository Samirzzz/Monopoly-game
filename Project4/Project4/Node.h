//#pragma once
//#include <iostream>
//#include<String>
//using namespace std;
//
//typedef System::String ElementType;
//class Node {
//public:
//
//
//    ElementType data;
//    int price;
//    bool isowned = false;
//    bool isowned2 = false;
//    int rentalprice;
//    Node* next;
//    Node* prev;
//
//    Node()
//        : next(0)
//
//    {}
//
//
//
//    Node(ElementType dataValue, int p, bool o1, bool o2, int r)
//        : data(dataValue), price(p), isowned(o1), isowned2(o2), rentalprice(r), next(0), prev(0)
//    {}
//};
#pragma once
#include <iostream>
using namespace std;
using namespace System;
typedef string ElementType;
struct Node {
public:


    ElementType data;
    int price;
    bool isowned = false;
    bool isowned2 = false;
    int rentalprice;
    Node* next;
    Node* prev;
    Node()
        : next(0)
    {}
    Node(ElementType dataValue, int p, bool o1, bool o2, int r)
        : data(dataValue), price(p), isowned(o1), isowned2(o2), rentalprice(r), next(0), prev(0)
    {}
};