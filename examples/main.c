#include "EasyC.h"

int main() {
    printf("=== EasyC Framework Example ===\n\n");

    // ------------------------
    // 1. Utils & Dynamic Memory
    // ------------------------
    printf("1. Utils & Dynamic Memory\n");
    int* arr = allocate_int_array(5);
    for(int i = 0; i < 5; i++) arr[i] = i + 1;
    print_array_int(arr, 5);

    swap_int(&arr[0], &arr[4]);
    printf("After swap: ");
    print_array_int(arr, 5);

    free_memory(arr);
    printf("\n");

    // ------------------------
    // 2. Linked List
    // ------------------------
    printf("2. Linked List\n");
    Node* list = NULL;
    append_node(&list, 10);
    append_node(&list, 20);
    append_node(&list, 30);
    print_list(list);
    delete_list(&list);
    printf("\n");

    // ------------------------
    // 3. Stack
    // ------------------------
    printf("3. Stack\n");
    StackNode* stack = NULL;
    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);
    print_stack(stack);
    printf("Pop: %d\n", pop(&stack));
    print_stack(stack);
    delete_stack(&stack);
    printf("\n");

    // ------------------------
    // 4. Queue
    // ------------------------
    printf("4. Queue\n");
    Queue* queue = create_queue();
    enqueue(queue, 100);
    enqueue(queue, 200);
    enqueue(queue, 300);
    print_queue(queue);
    printf("Dequeue: %d\n", dequeue(queue));
    print_queue(queue);
    delete_queue(queue);
    printf("\n");

    // ------------------------
    // 5. Binary Tree
    // ------------------------
    printf("5. Binary Tree\n");
    TreeNode* tree = NULL;
    tree = insert_tree(tree, 50);
    tree = insert_tree(tree, 30);
    tree = insert_tree(tree, 70);
    tree = insert_tree(tree, 20);
    tree = insert_tree(tree, 40);

    printf("Inorder: ");
    inorder_traversal(tree);
    printf("\nPreorder: ");
    preorder_traversal(tree);
    printf("\nPostorder: ");
    postorder_traversal(tree);
    printf("\n");
    delete_tree(tree);
    printf("\n");

    // ------------------------
    // 6. File I/O
    // ------------------------
    printf("6. File I/O\n");
    int nums[5] = {1, 2, 3, 4, 5};
    write_array_to_file("numbers.txt", nums, 5);

    int size;
    int* read_nums = read_array_from_file("numbers.txt", &size);
    printf("Numbers read from file: ");
    print_array_int(read_nums, size);
    free_memory(read_nums);

    printf("\n=== End of Example ===\n");
    return 0;
}