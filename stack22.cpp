// #include<iostream>
// #include "stack.h"
// using namespace std;

// template <class ItemType>
// Stack<ItemType>::Stack()
// {
//     maxStack = 500;
//     top = -1;
//     items = new ItemType[500];
// }

// template <class ItemType>
// Stack<ItemType>::Stack(int max)
// {
//     maxStack = max;
//     top=-1;
//     items = new ItemType[max];
// }

// template <class ItemType>
// Stack<ItemType>::~Stack()
// {
//     delete []items;
// }

// template<class ItemType>
// int Stack <ItemType> :: IsEmpty() const
// {
//     return (top == -1);
// }

// template<class ItemType>
// int Stack <ItemType> :: IsFull() const
// {
//     return (top == maxStack - 1);
// }

// template<class ItemType>
// void Stack <ItemType> :: Push(ItemType newItem)
// {
//     if(IsFull()) 
//     {
//         cout<<"Stack overflow"<<endl;
//         return;
//     }

//     else {
//         top++;
//         items[top] = newItem;
//     }
// }

// template<class ItemType>
// void Stack<ItemType> :: Pop() 
// {
//     if(IsEmpty())
//     {
//         cout<<"Stack Underflow"<<endl;
//         exit(1);
//     }
//         top--;
// }

// template<class ItemType>
// ItemType Stack<ItemType> :: Top() 
// {
//     if (IsEmpty()) {
//         cout << "Stack is empty!" << endl;
//         exit(1);  
//     }
//    return items[top];
// }