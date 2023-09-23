 /// Singly linked list

#include<iostream>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

using namespace std;

int create_list();
int display_list();
int add_node();
int search_data();
int remove_last_data();
int remove_any_data();
int first_data_remove();
int update_data();
int add_data_middle();
int add_data_middle();
int add_data_first();
struct node
{
    int data;
    struct node *next;
};

struct node *head,*temp,*tail;

int main()
{
    system("cls");
    int for_;
    cout<<"0--> Create List: "<<endl;
    cout<<"1--> Display Data: "<<endl;
    cout<<"2--> Insert Front: "<<endl;
    cout<<"3--> Search Data: "<<endl;
    cout<<"4--> Remove Last Data: "<<endl;
    cout<<"5--> Remove Any Data: "<<endl;
    cout<<"6--> Remove First Data: "<<endl;
    cout<<"7--> Update Data: "<<endl;
    cout<<"8--> Add Data Middle: "<<endl;
    cout<<"9--> Add Data First: "<<endl;
    cin>>for_;

    if(for_== 0)
    {
        create_list();
    }
    if(for_ == 1)
    {
        display_list();
    }
    else if(for_==2)
    {
        add_node();
    }
    else if(for_==3)
    {
        search_data();
    }
    else if(for_==4)
    {
        remove_last_data();
    }
    else if(for_==5)
    {
        remove_any_data();
    }
    else if(for_==6)
    {
        first_data_remove();
    }
    else if(for_==7)
    {
        update_data();
    }
    else if(for_==8)
    {
        add_data_middle();
    }
    else if(for_==9)
    {
        add_data_first();
    }
}
int node_value;
int create_list()
{
    system("cls");
    head = NULL;
    temp = NULL;
    tail = NULL;
    int i;
    cout<<endl<<"Enter Node Value: ";
    cin>>node_value;
    //cout<<"Enter Your Data: ";
    for(i=1; i<=node_value; i++)
    {
        cout<<"insert - ";
        temp = (struct node*)malloc(sizeof(struct node));
        cin>>temp->data;
        temp->next = NULL;
        if(head == NULL)
        {
            head=temp;
        }
        else
        {
            tail->next = temp;
        }
        tail = temp;
    }
    cout<<endl<<"ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
int display_list()
{
    cout<<"data"<<endl;
    system("cls");

    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";

        temp = temp->next;
    }
    cout<<endl<<"ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
int add_node()
{
    system("cls");
    int i=1,data;
    cout<<"Insert Last - ";
    cin>>data;
    tail = head;
    for(i=1; i<=node_value; i++)
    {
        if(tail->next == NULL)
        {
            temp = (struct node*)malloc(sizeof(struct node));
            temp->data = data;
            temp->next = NULL;
            tail->next = temp;
            node_value+=1;
            break;
        }
        else
        {
            tail= tail->next;
        }
    }

    cout<<endl<<"ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
int search_data()
{
    system("cls");
    int data,i,j=0;
    cout<<"Search data - ";
    cin>>data;
    temp = head;
    while(temp!=NULL)
    {
        if(temp->data == data)
        {
            j++;
            cout<<"DATA FOUND"<<endl;
        }
        temp = temp->next;
    }
    if(j==0)
    {
        cout<<"DATA NOT FOUND"<<endl;
    }
    cout<<endl<<"ENTER ANY KEY FOR GO BACK..";
    getch();
    main();
}
int remove_last_data()
{
    tail = head;
    for(int i=0; i<node_value-1; i++)
    {
        if(tail->next->next == NULL)
        {
            tail->next = NULL;
            node_value-=1;
        }
        else
        {
            tail=tail->next;
        }

    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int remove_any_data()
{
    int Data;
    cout<<"Enter Your data for remove ";
    cin>>Data;
    temp = head;
    for(int i=0; i<node_value; i++)
    {
        tail = temp->next;
        if(tail->data == Data)
        {
            temp->next = tail->next;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int first_data_remove()// for remove first data
{

    head = head->next;
    node_value-=1;
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int update_data() //  Update any data
{
    system("cls");

    int data,update_data;
    cout<<"Enter previous data which is you want to update: ";
    cin>>data;

    cout<<"Enter updated data: ";
    cin>>update_data;

    temp = head;

    while(temp!=NULL)
    {
        if(temp->data == data)
        {
            temp->data = update_data;
        }
        temp = temp->next;
    }
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int add_data_middle()
{
    system("cls");
    int position,Data;
    cout<<"Enter Which Position You want to add : ";
    cin>>position;
    cout<<"Enter data for add : ";
    tail = head;
    for(int i=1; i<=node_value; i++)
    {
        if(i+1==position)
        {
            temp = (struct node*)malloc(sizeof(struct node));
            cin>>temp->data;
            temp->next=tail->next;
            tail->next=temp;

        }
        tail = tail->next;
    }
    node_value++;
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
int add_data_first()
{
    int data;
    cout<<"Enter data for insert first ";
    cin>>data;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = head;
    head = temp;

    node_value++;
    cout<<endl<<"Enter any key for go main function ";
    getch();
    main();
}
