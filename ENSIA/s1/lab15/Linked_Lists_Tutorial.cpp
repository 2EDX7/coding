#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};

void print_list(node *current_ptr)
{
    // iterative version
    while (current_ptr)
    {
        cout << current_ptr->data << endl;
        current_ptr = current_ptr->next;
    }

    // recursion version

    // if (current_ptr)
    // {
    //     cout<<current_ptr->data;
    //     printList(current_ptr->next);
    // }
}

int num_of_nodes(node *current_node)
{
    int nodes = 0;
    bool check = current_node != NULL;
    while (check)
    {
        nodes++;
        current_node = current_node->next;
        check = current_node != NULL;
    }
    return nodes;
}

bool list_sorted_increasing(node *current_node)
{
    for (int i = 0; i < num_of_nodes(current_node); i++)
    {
        if (current_node->data > (current_node->next)->data)
            return false;
        current_node = current_node->next;
    }
    return true;
}

/*  4. Write a procedure to insert a new element at the front of a linked list.*/
void insert_data_in_front_list(node *&head, int data)
{
    // creating a new head
    node *new_head = new node();
    new_head->data = data;

    new_head->next = head;
    head = new_head;
}

/*  5. Write a procedure to insert a new element at the back of a linked list.*/
void insert_data_in_back_list(node *current_node, int value)
{
    // trying to reach the node that is just before the tail
    while (current_node->next)
        current_node = current_node->next;

    // creating a new tail with a data that the user entered
    node *new_tail = new node();
    new_tail->data = value;

    // changing the next pointer of the previous tail to be pointing to the new tail
    current_node->next = new_tail;

    // changing the next pointer of the new tail to be NULL
    new_tail->next = NULL;
}

/*  6. Write a procedure to remove the first element of a linked list. */
void remove_first_element_from_list(node *&head)
{
    node *first_node = head->next;
    delete head;
    head = first_node;
}

void remove_last_element_from_list(node *head)
{
    int i = 0;
    node *new_tail = head;
    while (i < num_of_nodes(head) - 2)
    {
        new_tail = new_tail->next;
        i++;
    }
    new_tail->next = NULL;
}

node *search_data_in_list(node *head, int target_data)
{
    // itterative version

    // while (head->next)
    // {
    //     if (head->data==target_data) return head;
    //     head=head->next;
    // }
    // return NULL;

    // recursion version:
    if (!head)
        return NULL;
    if (head->data == target_data)
        return head;
    return search_data_in_list(head->next, target_data);
}

int data_occurence(node *head, int target_data)
{
    int count = 0;
    while (head)
    {
        if (head->data == target_data)
            count++;
        head = head->next;
    }

    return count;
}

void delete_node_from_list(node *&head, node *target)
{

    node *current_node = head;

    if (head == target)
        remove_first_element_from_list(head);
    else if (target->next == NULL)
        remove_last_element_from_list(head);
    else
    {
        while (current_node->next != target)
        {
            current_node = current_node->next;
        }

        current_node->next = target->next;
        delete target;
        target = NULL;
    }
}

void delete_data_from_list(node *head, int data)
{

    // this function is used to search for all data that are equal to user-entered data and delete it
    node *current_node = head;

    while (current_node)
    {
        if (current_node->data == data)
            delete_node_from_list(head, current_node);
        current_node = current_node->next;
    }
}

node *create_linked_list_of_values_from_0_to_n(int n){
    node *head = new node();
    head->data = 0;
    for (int i = 1; i < n; i++)
        insert_data_in_back_list(head, i);
    return head;
}
node *create_linked_list_of_values_from_n_to_0(int n){
    node *head = new node();
    head->data = n - 1;
    for (int i = n - 2; i >= 0; i--)
        insert_data_in_back_list(head, i);
    return head;
}

node* reverseList(node *head)
{
    
}

int main()
{


    return 0;
}