#include <stdio.h>
#include <string.h>
 
int top = -1;
char infix[20], postfix[20], stack[20];
 
void push(char ch) {
   ++top;
   stack[top] = ch;
}
 
char pop() {
   char ch = stack[top];
   --top;
   return ch;
}
 
int priority(char ch) {
   int p;
   switch (ch) {
       case '/':
       case '*':
           p = 2;
           break;
       case '+':
       case '-':
           p = 1;
           break;
       case '(':
           p = 0;
           break;
       case '#':
           p = -1;
           break;
       case '^':
           p = 3;
           break;
       default:
           p = -1;
   }
   return p;
}
 
void convert() {
   int i = 0, p = 0;
   char ch;
   push('#');
 
   while (infix[i] != '\0') {
       ch = infix[i];
       switch (ch) {
           case '(':
               push(ch);
               break;
           case ')':
               while (stack[top] != '(') {
                   postfix[p] = pop();
                   ++p;
               }
               pop();
               break;
           case '+':
           case '-':
           case '*':
           case '/':
               while (priority(stack[top]) >= priority(ch)) {
                   postfix[p] = pop();
                   ++p;
               }
               push(ch);
               break;
           default:
               postfix[p] = ch;
               ++p;
       }
       ++i;
   }
 
   while (stack[top] != '#') {
       postfix[p] = pop();
       ++p;
   }
   postfix[p] = '\0';
}
 
void display() {
   printf("%s", postfix);
}
 
int main() {
   printf("Enter valid infix: ");
   scanf("%s", infix);
 
   convert();
 
   printf("Converted postfix is: ");
   display();
 
   return 0;
}