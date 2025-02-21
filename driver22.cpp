// #include <iostream>
// #include "stack.cpp"
// #include <string>
// #include <math.h>
// using namespace std;

// int checkPrec(char c);
// string infix(string equation);
// void validParanthesis(string str);
// int evaluatePostfix(string exp);

// int main()
// {
//     string input = "(5 + 3) * (8 - 2)";
//     validParanthesis(input);
//     input = infix(input);
//     cout << evaluatePostfix(input);
// }

// // Ex2.2
// //(a)
// void validParanthesis(string str)
// {
//     Stack<char> s;

//     for (int i = 0; i < str.size(); i++)
//     {
//         if (str[i] == '(' || str[i] == '{' || str[i] == '[')
//         {
//             s.Push(str[i]);
//         }

//         else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
//         {
//             if (s.IsEmpty())
//             {
//                 cout << "Invalid parenthesis expression" << endl;
//                 return;
//             }

            
//             if ((str[i] == ')' && s.Top() == '(') || (str[i] == '}' && s.Top() == '{') ||(str[i] == ']' && s.Top() == '['))
//             {
//                 s.Pop();
//             }
//             else
//             {
//                 cout << "Invalid parenthesis expression" << endl;
//                 return;
//             }
//         }
//     }

//     if (s.IsEmpty())
//     {
//         cout << "Valid parenthesis expression" << endl;
//     }
//     else
//     {
//         cout << "Invalid parenthesis expression" << endl;
//     }
// }

// // Ex 2.2
// //(b)
// string infix(string equation)
// {
//     Stack<char> s;
//     string solution;

//     for (int i = 0; i < equation.size(); i++)
//     {
//         if (equation[i] == '(' || equation[i] == '[' || equation[i] == '{')
//         {
//             s.Push(equation[i]);
//         }

//         else if (equation[i] >= '0' && equation[i] <= '9')
//         {
//             solution += equation[i];
//         }

//         // closing

//         else if (equation[i] == ')' || equation[i] == '}' || equation[i] == ']')
//         {
//             while (!s.IsEmpty() && (s.Top() != '(' && s.Top() != '{' && s.Top() != '['))
//             {
//                 solution += s.Top();
//                 s.Pop();
//             }

//             if (!s.IsEmpty())
//             {
//                 s.Pop();
//             }
//         }

//         else if (equation[i] == '-' || equation[i] == '+' || equation[i] == '/' || equation[i] == '*' || equation[i] == '^')
//         {

//             while (!s.IsEmpty() && checkPrec(s.Top()) >= checkPrec(equation[i]))
//             {
//                 solution += s.Top();
//                 s.Pop();
//             }
//             s.Push(equation[i]);
//         }
//     }

//     while (!s.IsEmpty())
//     {
//         solution += s.Top();
//         s.Pop();
//     }

//     return solution;
// }

// int checkPrec(char c)
// {
//     if (c == '^')
//     {
//         return 3;
//     }

//     else if (c == '*' || c == '/')
//     {
//         return 2;
//     }

//     else if (c == '+' || c == '-')
//     {
//         return 1;
//     }

//     else
//     {
//         return -1;
//     }
// }

// int evaluatePostfix(string expression)
// {
//     Stack<int> s;

//     for (char ch : expression)
//     {

//         if (isdigit(ch))
//         {
//             s.Push(ch - '0');
//         }

//         else
//         {
//             if (s.IsEmpty())
//             {
//                 cout << "Error: Invalid expression!" << endl;
//                 return -1;
//             }

//             int operand2 = s.Top();
//             s.Pop();
//             int operand1 = s.Top();
//             s.Pop();

//             int result;
//             switch (ch)
//             {
//             case '+':
//                 result = operand1 + operand2;
//                 break;
//             case '-':
//                 result = operand1 - operand2;
//                 break;
//             case '*':
//                 result = operand1 * operand2;
//                 break;
//             case '/':
//                 if (operand2 == 0)
//                 {
//                     cout << "Error: Division by zero" << endl;
//                     return -1;
//                 }
//                 result = operand1 / operand2;
//                 break;
//             case '^':
//                 result = pow(operand1, operand2);
//                 break;
//             default:
//                 cout << "Unknown operator " << ch << endl;
//                 return -1;
//             }
//             s.Push(result);
//         }
//     }
//     if (!s.IsEmpty())
//     {
//         return s.Top();
//     }
//     else
//     {
//         cout << "Invalid postfix expression" << endl;
//         return -1;
//     }
// }
