// #include "stack.h"
// #include <iostream>
// using namespace std;

// template <class ItemType>
// Stack<ItemType>::Stack() {
//     top = -1;
// }

// template <class ItemType>
// int Stack<ItemType>::IsEmpty() const {
//     return (top == -1);
// }

// template <class ItemType>
// int Stack<ItemType>::IsFull() const {
//     return (top == MAX_ITEMS - 1);
// }

// template <class ItemType>
// void Stack<ItemType>::Push(ItemType newItem) {
//     if (IsFull()) {
//         cout << "Stack Overflow!" << endl;
//     } else {
//         top++;
//         items[top] = newItem;
//     }
// }

// template <class ItemType>
// void Stack<ItemType>::Pop(ItemType& item) {
//     if (IsEmpty()) {
//         cout << "Stack Underflow!" << endl;
//     } 
//     else {
//         item = items[top];
//         top--;
//     }
// }

// template <class ItemType>
// ItemType Stack<ItemType>::Peek()
// {
//     return items[top];
// }
