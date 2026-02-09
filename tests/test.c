/*
 * test.c
 * This file contains basic tests for the EasyC framework.
 * It is used to verify that all modules (utils, list, stack, queue,
 * binary tree, dynamic memory, and file I/O) work correctly.
 */

#include "EasyC.h"

int main() {
    printf("=== EasyC Framework Tests ===\n\n");

    // ------------------------
    // 1. Utils & Dynamic Memory
    // ------------------------
    printf("Testing Utils & Dynamic Memory...\n");
    int* arr = allocate_int_array(3);
    if (!arr) { printf("Memory allocation failed!\n"); return 1; }

    arr[0] = 5; arr[1] = 10; arr[2] = 15;
    swap_int(&arr[0], &arr[2]);
    printf("Array after swap (expected 15 10 5): ");
    print_array_int(arr, 3);
    free_memory(arr);
    printf("Utils & Dynamic Memory test passed.\n\n");

    // ------------------------
    // 2. Linked List
    // ------------------------
    printf("Testing Linked List...\n");
    Node* list = NULL;
    append_node(&list, 1);
    append_node(&list, 2);
    append_node(&list, 3);
    printf("List elements (expected 1 -> 2 -> 3 -> NULL): ");
    print_list(list);
    delete_list(&list);
    printf("Linked List test passed.\n\n");

    // ------------------------
    // 3. Stack
    // ------------------------
    printf("Testing Stack...\n");
    StackNode* stack = NULL;
    push(&stack, 100);
    push(&stack, 200);
    push(&stack, 300);
    printf("Stack elements (expected 300 -> 200 -> 100 -> NULL): ");
    print_stack(stack);
    printf("Pop value (expected 300): %d\n", pop(&stack));
    delete_stack(&stack);
    printf("Stack test passed.\n\n");

    // ------------------------
    // 4. Queue
    // ------------------------
    printf("Testing Queue...\n");
    Queue* queue = create_queue();
    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    printf("Queue elements (expected 10 -> 20 -> 30 -> NULL): ");
    print_queue(queue);
    printf("Dequeue value (expected 10): %d\n", dequeue(queue));
    delete_queue(queue);
    printf("Queue test passed.\n\n");

    // ------------------------
    // 5. Binary Tree
    // ------------------------
    printf("Testing Binary Tree...\n");
    TreeNode* tree = NULL;
    tree = insert_tree(tree, 50);
    tree = insert_tree(tree, 30);
    tree = insert_tree(tree, 70);
    tree = insert_tree(tree, 20);
    tree = insert_tree(tree, 40);

    printf("Inorder traversal (expected 20 30 40 50 70): ");
    inorder_traversal(tree);
    printf("\nPreorder traversal (expected 50 30 20 40 70): ");
    preorder_traversal(tree);
    printf("\nPostorder traversal (expected 20 40 30 70 50): ");
    postorder_traversal(tree);
    printf("\n");
    delete_tree(tree);
    printf("Binary Tree test passed.\n\n");

    // ------------------------
    // 6. File I/O
    // ------------------------
    printf("Testing File I/O...\n");
    int nums[3] = {7, 8, 9};
    write_array_to_file("test_numbers.txt", nums, 3);

    int size;
    int* read_nums = read_array_from_file("test_numbers.txt", &size);
    printf("Numbers read from file (expected 7 8 9): ");
    print_array_int(read_nums, size);
    free_memory(read_nums);
    printf("File I/O test passed.\n\n");

    printf("=== All EasyC tests passed successfully ===\n");
    return 0;
}