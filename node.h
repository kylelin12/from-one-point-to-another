// Header file

// struct node declaration
struct node{
    int id;
    struct node *next;   
};

// function header declarations
void print_list(struct node *front);
struct node * insert_front(struct node *front, int dataid);
struct node * free_list(struct node *front);