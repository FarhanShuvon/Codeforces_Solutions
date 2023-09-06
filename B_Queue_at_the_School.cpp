#include <bits/stdc++.h> //library header file
using namespace std;     // using declaration command


struct node              // creating structure type variable node
{
    int data;   // declaring data part of the node
    node *next; // declaring address part of the node
};

node *top = NULL;   // initializing top as NULL
void push(int data) // fucntion for push operation
{
    node *temp = new node; // making struct type temp dynamically
    temp->data = data;     // temps data part part will have data
    temp->next = NULL;     // temps next part will have null

    if (top == NULL)
    {
        top = temp; // if the top is null top will be at temp
    }
    else
    {
        temp->next = top; // temps next will be top
        top = temp;       // and top will have temp
    }
}
void pop() // fucntion for pop operation
{
    if (top == NULL)
    {
        return; // if top is null it will return
    }
    top = top->next; // top will move to the next node
}
void print()
{
    if (top == NULL)
    {
        printf("Empty!\n"); // if the top is null it will print empty
    }
    else
    {
        printf("%d\n",top->data); // else it will print the tops data
    }
}

int main()

{
    int t;
    scanf("%d",&t); // creating test case
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if (n == 1)
        {
            int data;
            scanf("%d",&data); // if n is 1 it call push operation
            push(data);
        }
        else if (n == 2)
        {
            pop(); // if the n is 2 it will call the pop operation
        }
        else
        {
            print(); // else it will call the print operation
        }
    }
    return 0;
}