#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;
void push(char data) {
if (top == MAX - 1) {
printf("Overflow stack!\n");
return;
}
top++;
stack[top] = data;
}
char pop() {
if (top == -1) {
printf("Empty Stack!\n");
return '\0';
}
char data = stack[top];
top--;
return data;
}
void reverse_string(char *str) {
int len = strlen(str);
for (int i = 0; i < len; i++) {
push(str[i]);
}
for (int i = 0; i < len; i++) {
str[i] = pop();
}
}
int main() {
char text[MAX];
printf("Input a string: ");
fgets(text, MAX, stdin);
text[strcspn(text, "\n")] = '\0';
reverse_string(text);
printf("Reversed string using a stack is: %s\n", text);
return 0;
} 