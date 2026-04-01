# 📚 Data Structures

## What is a Data Structure?

A **data structure** is a way of organizing, managing, and storing data so that it can be accessed and modified efficiently. It defines the relationship between the data and the operations that can be performed on it.

---

## 🧩 Types of Data Structures

### 1. **Linear Data Structures**
These store data in a sequential manner.

- **Array**: A collection of elements identified by index.
- **Linked List**: A series of connected nodes (each with data and a pointer).
- **Stack**: Follows LIFO (Last In, First Out) principle.
- **Queue**: Follows FIFO (First In, First Out) principle.

---

### 2. **Non-Linear Data Structures**
These don’t store data sequentially.

- **Tree**: Hierarchical structure with nodes (e.g., Binary Tree, Binary Search Tree).
- **Graph**: A set of nodes connected by edges (can be directed or undirected).

---

### 3. **Hash-Based Data Structures**
These use a hash function to map keys to values.

- **Hash Table / Hash Map**: Stores key-value pairs for fast retrieval.

---

### 4. **Advanced Data Structures**
Used for specialized operations and optimized performance.

- **Heap**: A complete binary tree used in priority queues.
- **Trie (Prefix Tree)**: Efficient for word searches in dictionaries.
- **Segment Tree / Fenwick Tree (Binary Indexed Tree)**: Used for range queries.

---

## 🔁 Summary Table

| Type         | Example Structures                    | Characteristics                    |
|--------------|----------------------------------------|------------------------------------|
| Linear       | Array, Stack, Queue, Linked List       | Sequential, ordered                |
| Non-Linear   | Tree, Graph                            | Hierarchical or networked          |
| Hash-Based   | Hash Table, Hash Map                   | Fast lookup with keys              |
| Advanced     | Heap, Trie, Segment Tree, Fenwick Tree | Specialized and efficient access   |


---

# 📦 Array

## What is an Array?

An **Array** is a **linear data structure** that stores elements of the **same data type** in **contiguous memory locations**. Each element can be accessed directly using its **index**.

---

## 🧠 Key Characteristics

- **Fixed Size**: The size of an array is defined at the time of declaration.
- **Indexed Access**: Each element is accessed using its index (starting from 0).
- **Homogeneous Data**: All elements are of the same data type.
- **Stored in Contiguous Memory**: Enhances performance when iterating.

---

## 📌 Syntax Examples

### 🔹 In C:
```c
int arr[5] = {1, 2, 3, 4, 5};
```

### 🔹 In Python:
```python
arr = [1, 2, 3, 4, 5]
```

### 🔹 In Java:
```java
int[] arr = {1, 2, 3, 4, 5};
```

---

## 🎯 Basic Operations

| Operation         | Description                        | Time Complexity |
|------------------|------------------------------------|-----------------|
| Access           | Retrieve an element by index       | O(1)            |
| Insertion        | Insert at a position (may shift)   | O(n)            |
| Deletion         | Delete from a position             | O(n)            |
| Search           | Find an element                    | O(n)            |
| Traversal        | Visit all elements                 | O(n)            |

---

## ✅ Advantages

- Fast access to elements using index.
- Easy to implement and use.
- Memory locality improves cache performance.

---

## ❌ Disadvantages

- Fixed size: Cannot grow or shrink dynamically.
- Insertion and deletion are costly (need shifting).
- Wastes memory if size is overestimated.

---

## 📊 Visualization

For an array like:

```
arr = [10, 20, 30, 40, 50]
```

| Index | Value |
|-------|-------|
| 0     | 10    |
| 1     | 20    |
| 2     | 30    |
| 3     | 40    |
| 4     | 50    |

---

## 🔁 Summary

Arrays are the foundation of many other data structures. They're best when you know the number of elements in advance and need fast access by index.


# 🌍 Real-World Applications of Arrays

Arrays are widely used in both software development and real-world systems due to their simplicity and efficiency.

---

## 🛠️ 1. **Storing and Accessing Data**
Arrays are commonly used to store collections of data for quick and direct access.

- Example: Storing student scores:  
  ```python
  scores = [85, 92, 78, 96, 88]
  ```

---

## 🎮 2. **Game Development**
Arrays are used to represent:

- Game boards (e.g., chess, tic-tac-toe):
  ```python
  board = [
    ['X', 'O', 'X'],
    ['O', 'X', 'O'],
    ['X', 'O', 'X']
  ]
  ```
- Player statistics
- Sprite positions in 2D games

---

## 🖼️ 3. **Image Processing**
Images are represented as 2D (or 3D) arrays where each element is a pixel value (grayscale or RGB).

- Example:
  ```python
  image = [
    [255, 128, 0],
    [64, 192, 255],
    [0, 0, 0]
  ]
  ```

---

## 📅 4. **Calendar and Scheduling Apps**
Arrays are used to manage:

- Days of the week
- Events in a calendar view
- Time slots for appointments

---

## 🧮 5. **Matrix Operations in Math & Science**
Used for solving linear equations, physics simulations, and computer graphics.

- Example: Matrix addition, multiplication, etc.

---

## 🔍 6. **Search Engines**
Search engines store indexed web pages in arrays or arrays of structures for fast searching and retrieval.

---

## 🧾 7. **Databases and Tables**
Database rows (records) can be temporarily held in arrays before being processed or displayed.

---

## 🔁 8. **Control Systems**
In embedded systems or IoT devices, sensor data (like temperature or speed over time) is stored in arrays for processing.

---

## 🧠 9. **Machine Learning & AI**
Datasets (like training samples) are often stored as arrays or NumPy arrays for processing in algorithms.

---

## 🧭 10. **Navigation Systems**
Used to store waypoints, GPS coordinates, and route paths.

---

## 📌 Summary

Arrays are fundamental in software systems where:
- Data size is known ahead of time.
- Fast access and iteration are required.
- Memory efficiency is important.

They’re the building blocks of more advanced data structures and real-world logic systems.






---

# 📚 Stack

## What is a Stack?

A **stack** is a **linear data structure** that follows the **LIFO (Last In, First Out)** principle. The element added **last** is the one removed **first**.

---

## 🧠 Key Operations

| Operation | Description                             | Time Complexity |
|-----------|-----------------------------------------|-----------------|
| `push()`  | Adds an element to the top of the stack | O(1)            |
| `pop()`   | Removes the top element                 | O(1)            |
| `peek()`  | Returns the top element without removing it | O(1)        |
| `isEmpty()` | Checks if the stack is empty          | O(1)            |

---

## 🔧 Implementation (Examples)

### 🔹 Python (Using List)
```python
stack = []
stack.append(10)    # push
stack.append(20)
stack.pop()         # pop -> 20
```

### 🔹 Java (Using Stack class)
```java
Stack<Integer> stack = new Stack<>();
stack.push(10);
stack.push(20);
stack.pop(); // returns 20
```

---

# 🥞 Stack in C (Array Implementation)

A **stack** is a **linear data structure** that follows the **LIFO (Last In, First Out)** principle.

---

## ✅ Basic Operations

| Operation | Description                   |
|----------|-------------------------------|
| `push()` | Add item to the top of stack  |
| `pop()`  | Remove and return top item    |
| `peek()` | View the top item (no remove) |
| `isEmpty()` | Check if stack is empty    |
| `isFull()`  | Check if stack is full     |

---

## 👨‍💻 C Code Example

```c
#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// Function to add element to stack
void push(int value) {
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Function to remove element from stack
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Function to view top element
int peek() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Function to display stack elements
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Top element is %d\n", peek());

    printf("%d popped from stack\n", pop());
    display();

    return 0;
}
```

---

## 🖨️ Sample Output

```
10 pushed to stack
20 pushed to stack
30 pushed to stack
Stack elements: 10 20 30
Top element is 30
30 popped from stack
Stack elements: 10 20
```

---

## 📌 Notes

- **Stack Overflow** occurs when pushing to a full stack.
- **Stack Underflow** occurs when popping from an empty stack.

---

## 📚 Real-World Applications of Stack

- Undo/Redo functionality in editors
- Function call management (Call Stack)
- Parentheses matching
- Expression evaluation (Postfix/Infix)
- Browser back button (history)



## 📌 Stack Visualization

```
Initial:       [ ]        -> empty stack
Push 10:       [10]
Push 20:       [10, 20]
Pop:           [10]       -> 20 is removed
```

---

## 🌍 Real-World Applications of Stack

### 1. **Undo/Redo Functionality**
- Applications like MS Word, Photoshop, and code editors.
- Stores recent actions; popping restores the last action.

### 2. **Browser History**
- The "Back" button uses a stack to return to the last visited page.

### 3. **Parentheses Checking / Expression Validation**
- Verifies balanced brackets in compilers or code editors.
- Example: `{[()()]}` is valid, `{[(])}` is not.

### 4. **Expression Evaluation**
- Used in converting and evaluating:
  - Infix → Postfix
  - Postfix evaluation

### 5. **Function Call Stack (Recursion)**
- Keeps track of function calls.
- Each recursive call is pushed, and when it returns, it’s popped.

### 6. **Syntax Parsing in Compilers**
- Compilers use stacks for syntax checking and parsing.

### 7. **Reversing Data**
- Strings, arrays, and other structures can be reversed using a stack.

### 8. **Backtracking Algorithms**
- Used in problems like:
  - Maze solving
  - Puzzle solvers (Sudoku, N-Queens)

---

## ✅ Advantages

- Simple and efficient for LIFO operations.
- Useful in nested/recursive function handling.

---

## ❌ Disadvantages

- Limited access: Only top element is accessible.
- Not suitable for searching or sorting tasks.

---

## 📊 Summary

| Feature          | Description                       |
|------------------|-----------------------------------|
| Structure Type   | Linear                            |
| Access Pattern   | LIFO (Last In, First Out)         |
| Key Operations   | Push, Pop, Peek, isEmpty          |
| Use Cases        | Undo/Redo, Recursion, Expression Parsing |

## 🟢 Beginner Level (Basic Concepts & Operations)

| ✅ Topic                           | 🔍 Problem Description                                           |
|-----------------------------------|------------------------------------------------------------------|
| Stack Basics                      | Implement a stack using array                                    |
| Stack Basics                      | Implement a stack using linked list                              |
| Stack Operations                  | Implement `push()`, `pop()`, `peek()`, `isEmpty()`, `isFull()`   |
| Stack Traversal                   | Print stack elements without altering original stack             |
| Reverse a String                  | Reverse a string using a stack                                   |
| Balanced Parentheses              | Check if parentheses are balanced (`()[]{}`)                     |
| Infix to Postfix Conversion       | Convert infix to postfix notation                                |
| Postfix Evaluation                | Evaluate a postfix expression                                    |
| Infix to Prefix Conversion        | Convert infix to prefix notation                                 |
| Prefix Evaluation                 | Evaluate a prefix expression                                     |
| Delete Middle of Stack            | Delete the middle element from a stack using recursion           |
| Find Middle of Stack              | Find the middle element of the stack without popping             |

---

## 🟡 Intermediate Level (Real Applications & Recursion)

| 🔄 Topic                         | 🔍 Problem Description                                           |
|----------------------------------|------------------------------------------------------------------|
| Sort Stack Recursively           | Sort elements of stack using recursion (no loop)                 |
| Reverse Stack Recursively        | Reverse the stack using recursion                                |
| Two Stacks in One Array          | Implement two stacks in a single array                           |
| Special Stack (Get Min in O(1))  | Design a stack that supports `getMin()` in O(1) time             |
| Next Greater Element             | Find the next greater element for each array item                |
| Implement Stack using Queue      | Implement stack using two queues                                 |
| Implement Queue using Stack      | Implement queue using two stacks                                 |
| Remove Adjacent Duplicates       | Remove consecutive duplicate characters using a stack            |
| Redundant Brackets               | Detect redundant brackets in an expression                       |
| Histogram Problem (Base Level)   | Find max area in histogram using stack                           |

---

## 🔴 Hard Level (Advanced & Real World)

| 🔥 Topic                          | 🔍 Problem Description                                            |
|-----------------------------------|-------------------------------------------------------------------|
| Largest Rectangle in Histogram    | Find max area in histogram (Leetcode hard)                        |
| Max Area Rectangle in Binary Mat  | Convert rows to histograms & use stack                            |
| Stock Span Problem                | Calculate span of stock’s price for each day                      |
| Celebrity Problem                 | Find the celebrity using stack (who knows no one, but known by all)|
| Validate Stack Sequences          | Given push and pop sequences, check if valid stack operations     |
| Decode String with Stack          | Decode nested string patterns like `3[a2[c]]` => `accaccacc`      |
| Next Smaller Element              | Find the next smaller element to the right of each item           |
| Maximum of Minimum in Window Size| Hard problem with stack + windowing                               |
| Expression Evaluation with Precedence | Evaluate fully bracketed expressions with operator precedence |
| Histogram Trapping Rain Water     | Calculate trapped rain water using stack                          |

---

---

# 🚦 Queue Data Structure

## What is a Queue?

A **Queue** is a **linear data structure** that follows the **FIFO (First In, First Out)** principle.  
This means the **first** element added is the **first** one to be removed.

---

## 🧠 Key Characteristics

- **FIFO Order**: The element inserted first is removed first.
- **Front**: The end where elements are **removed**.
- **Rear**: The end where elements are **added**.
- Can be implemented using **arrays**, **linked lists**, or **pointers**.

---

## 🔧 Basic Operations

| Operation     | Description                          | Time Complexity |
|---------------|--------------------------------------|-----------------|
| `enqueue()`   | Add an element at the rear           | O(1)            |
| `dequeue()`   | Remove an element from the front     | O(1)            |
| `peek()`      | Get the front element without removing it | O(1)        |
| `isEmpty()`   | Check if the queue is empty          | O(1)            |
| `isFull()`    | Check if the queue is full (for array) | O(1)          |

---

## 🧪 C Program Example: Simple Queue Using Array

```c
#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1)
        printf("Queue is Full\n");
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeue() {
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else {
        printf("Deleted: %d\n", queue[front]);
        front++;
    }
}

void display() {
    if (front == -1 || front > rear)
        printf("Queue is Empty\n");
    else {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
```

---

## 📌 Queue Visualization

```
Initial:          [ ]
enqueue(10):      [10]
enqueue(20):      [10, 20]
enqueue(30):      [10, 20, 30]
dequeue():        [20, 30]   // 10 removed (FIFO)
```

---

## 🌍 Real-World Applications of Queue

### 1. **Print Queue in Printers**
- Documents are printed in the order they are submitted.

### 2. **CPU Task Scheduling**
- Operating systems manage processes in a queue.

### 3. **Call Center Systems**
- Incoming calls are placed in a queue until an agent is available.

### 4. **Customer Service Line**
- People are served in the order they arrive.

### 5. **Data Buffers (IO Buffers)**
- Temporary storage areas for data before it's processed.

### 6. **Breadth-First Search (BFS)**
- Graph traversal algorithm uses a queue.

### 7. **Messaging Services**
- Emails, SMS, and other notifications are often queued before delivery.

---

## ✅ Advantages

- Simple and efficient for order-based processing.
- Useful when order of processing is important (e.g., FIFO systems).

---

## ❌ Disadvantages

- Static arrays may waste memory or overflow (unless using circular queues).
- Cannot access arbitrary elements directly (no random access).

---

## 🔁 Types of Queues

| Type              | Description                                             |
|-------------------|---------------------------------------------------------|
| **Simple Queue**   | FIFO order                                              |
| **Circular Queue** | Last position connects back to the first to form a circle |
| **Priority Queue** | Elements are processed based on priority               |
| **Deque**          | Double-ended queue, insert/delete from both ends       |

---

## 📊 Summary

| Feature         | Description                         |
|-----------------|-------------------------------------|
| Structure Type  | Linear                              |
| Access Pattern  | FIFO                                |
| Key Operations  | Enqueue, Dequeue, Peek              |
| Use Cases       | Scheduling, buffering, task queues  |



---

# 🔗 Linked List

## What is a Linked List?

A **linked list** is a **linear data structure** where each element (called a **node**) contains:
1. **Data**: The actual value.
2. **Pointer**: A reference to the **next node** in the sequence.

Unlike arrays, linked lists do **not use contiguous memory**, which makes them flexible in size.

---

## 📦 Types of Linked Lists

| Type              | Description                                      |
|-------------------|--------------------------------------------------|
| **Singly Linked List** | Each node points to the next node only.         |
| **Doubly Linked List** | Each node points to both previous and next nodes. |
| **Circular Linked List** | The last node points back to the head.         |

---

## 🧪 C Example: Singly Linked List

```c
#include <stdio.h>
#include <stdlib.h>

// Define a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Insert node at the end
void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Display the list
void display(struct Node* head) {
    printf("Linked List: ");
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Delete first node with a specific value
void deleteNode(struct Node** head, int value) {
    struct Node *temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;

    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);

    display(head);

    deleteNode(&head, 20);

    display(head);

    return 0;
}
```

---

## 📌 Linked List Visualization

```
Initial:         NULL
After Insert:    10 -> 20 -> 30 -> NULL
After Deletion:  10 -> 30 -> NULL
```

---

## ✅ Advantages

- Dynamic size — can grow or shrink during execution.
- Efficient insertion/deletion (no shifting needed like in arrays).
- Memory is allocated as needed.

---

## ❌ Disadvantages

- No direct access to elements (O(n) time for access).
- Uses extra memory for pointers.
- Sequential access only (unlike arrays with random access).

---

## 🌍 Real-World Applications of Linked List

### 1. **Music/Video Playlists**
- Each song/video points to the next one.
- Easy to add/remove without reordering the entire list.

### 2. **Web Browser History**
- A doubly linked list tracks visited pages and allows back/forward navigation.

### 3. **Undo/Redo Functionality**
- Similar to a doubly linked list storing action history.

### 4. **Dynamic Memory Allocation**
- OS uses linked lists to manage free and used memory blocks.

### 5. **Image Viewer**
- Navigate between previous and next images.

### 6. **Implementing Other Data Structures**
- Stacks, queues, hash tables, and graphs can be implemented using linked lists.

### 7. **Job Scheduling**
- In Operating Systems, linked lists help manage task queues.

---

## 📊 Summary Table

| Feature         | Description                            |
|-----------------|----------------------------------------|
| Structure Type  | Linear, dynamic                        |
| Memory          | Non-contiguous                         |
| Access Pattern  | Sequential (no random access)          |
| Key Operations  | Insert, Delete, Traverse               |
| Real Use Cases  | Playlists, Undo/Redo, Memory Mgmt      |



# 🌳 Tree Data Structure

## What is a Tree?

A **Tree** is a **non-linear hierarchical data structure** consisting of nodes.  
Each node contains:
- **Data**
- **Reference(s) to child nodes**

The structure starts from a special node called the **root**, and branches out into **subtrees**.

---

## 🧩 Terminology

| Term         | Meaning |
|--------------|--------|
| **Node**     | Element of the tree |
| **Root**     | Topmost node |
| **Parent**   | Node that has child(ren) |
| **Child**    | Node that descends from a parent |
| **Leaf**     | Node with no children |
| **Subtree**  | Tree formed by a node and its descendants |
| **Depth**    | Number of edges from root to node |
| **Height**   | Number of edges from node to the deepest leaf |
| **Edge**     | Connection between two nodes |

---

## 🧠 Properties of Trees

- One root node.
- Each node has **0 or more children**.
- **No cycles** (unlike graphs).
- Can be empty (null tree).

---

## 🌲 Types of Trees

### 1. **Binary Tree**
- Each node has **at most two children** (left and right).
  
### 2. **Binary Search Tree (BST)**
- Left child < parent < right child

### 3. **AVL Tree**
- Self-balancing BST (difference in height ≤ 1)

### 4. **Heap Tree**
- Complete binary tree used in priority queues

### 5. **Trie (Prefix Tree)**
- Used for storing strings/prefixes efficiently (e.g., autocomplete)

### 6. **B-Trees / B+ Trees**
- Used in databases and file systems

---

## 🔧 Basic Operations

| Operation       | Description                            | Time Complexity (BST) |
|-----------------|----------------------------------------|------------------------|
| `insert()`      | Adds a node                            | O(log n)               |
| `delete()`      | Removes a node                         | O(log n)               |
| `search()`      | Finds a node                           | O(log n)               |
| `traversal()`   | Visits all nodes in a specific order   | O(n)                   |

---

## 🔁 Tree Traversal Methods

### 🔹 Inorder (Left, Root, Right)
### 🔹 Preorder (Root, Left, Right)
### 🔹 Postorder (Left, Right, Root)
### 🔹 Level Order (Breadth-First)

---

## 👨‍💻 C Code: Binary Search Tree (BST)

```c
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

// Create new node
struct Node* newNode(int value) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->left = temp->right = NULL;
    return temp;
}

// Insert node in BST
struct Node* insert(struct Node* root, int value) {
    if (root == NULL)
        return newNode(value);
    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);
    return root;
}

// Inorder Traversal
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);

    printf("Inorder Traversal: ");
    inorder(root);
    return 0;
}
```

---

## 🌍 Real-World Applications of Tree

### 📁 1. **File Systems**
- Folders and files organized in a tree hierarchy.

### 📚 2. **Databases (B/B+ Trees)**
- Efficient searching, insertion, and deletion.

### 📇 3. **Trie Trees in Text Processing**
- Word search engines, autocomplete, spell-checking.

### 📑 4. **XML/HTML Parsers**
- DOM trees represent structured documents.

### 🧮 5. **Arithmetic Expression Trees**
- Used to evaluate expressions like `(2 + 3) * 5`.

### 📶 6. **Computer Networks**
- Routing protocols and multicast trees.

### 🕵️‍♂️ 7. **AI Game Trees**
- Minimax algorithm uses tree structures for decision-making.

### 📊 8. **Binary Search Tree**
- Fast searching and sorting of data in applications.

---

## ✅ Advantages

- Dynamic and non-linear: Efficient for hierarchical data.
- Flexible insertions/deletions (especially in BSTs, AVL, B-trees).
- Powerful traversal techniques (preorder, inorder, etc.)

---

## ❌ Disadvantages

- Requires more memory (due to pointers).
- Operations may be slower than arrays in some cases.
- Needs balancing (e.g., in BSTs) to maintain performance.

---

## 📊 Summary Table

| Feature          | Description                          |
|------------------|--------------------------------------|
| Structure Type   | Non-linear, hierarchical             |
| Main Component   | Node (data + pointers)               |
| Access Pattern   | Recursive or traversal-based         |
| Common Uses      | Filesystems, databases, AI, compilers|

---



# 🌳 Simple C Program: Binary Tree

```c
#include <stdio.h>
#include <stdlib.h>

// Define structure for a tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert node in the tree (simple binary tree, not BST)
void insert(struct Node* root, int value) {
    if (root->left == NULL) {
        root->left = createNode(value);
    } else if (root->right == NULL) {
        root->right = createNode(value);
    } else {
        // Recursively insert to the left subtree
        insert(root->left, value);
    }
}

// Inorder traversal (Left, Root, Right)
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    // Create root node
    struct Node* root = createNode(1);

    // Insert more nodes
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);

    // Display the tree
    printf("Inorder Traversal: ");
    inorder(root);
    return 0;
}
```

## 🖨️ Output:
```
Inorder Traversal: 4 2 1 3
```

---

## 🧠 How It Works

- A simple binary tree is created manually.
- Nodes are inserted recursively to the left first.
- Inorder traversal prints the nodes in Left → Root → Right order.

```
      1
     / \
    2   3
   /
  4
```

---

Let me know if you want a **Binary Search Tree (BST)** version or an **interactive input** version too.



---

# 🌐 Graph Data Structure

## What is a Graph?

A **Graph** is a **non-linear data structure** consisting of:

- **Vertices (Nodes)**: Represent entities (e.g., cities, users).
- **Edges (Links)**: Connect pairs of vertices (e.g., roads, friendships).

Graphs can represent various relationships in real-world systems.

---

## 📊 Types of Graphs

| Type               | Description                                |
|--------------------|--------------------------------------------|
| **Directed Graph** | Edges have a direction (A ➝ B)             |
| **Undirected Graph** | Edges have no direction (A — B)            |
| **Weighted Graph** | Edges have weights (e.g., distance, cost)  |
| **Unweighted Graph** | All edges are equal                        |
| **Cyclic Graph**   | Contains at least one cycle                |
| **Acyclic Graph**  | Contains no cycles                         |
| **Connected Graph**| Path exists between every pair of nodes    |
| **Disconnected Graph**| Some nodes are not reachable             |

---

## 🧠 Graph Representation

### 1. **Adjacency Matrix**

- 2D array to store edge info.
- `matrix[i][j] = 1` if edge exists from i to j.

### 2. **Adjacency List**

- Array of linked lists.
- Each index represents a node and contains a list of connected nodes.
- More space efficient for sparse graphs.

---

## 👨‍💻 Simple C Program: Undirected Graph Using Adjacency Matrix

```c
#include <stdio.h>
#define SIZE 5

void displayGraph(int graph[SIZE][SIZE]) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int graph[SIZE][SIZE] = {0}; // Initialize all edges to 0

    // Add some undirected edges
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[3][4] = 1;
    graph[4][3] = 1;

    // Display graph
    displayGraph(graph);

    return 0;
}
```

### 🖨️ Output
```
Adjacency Matrix:
0 1 1 0 0
1 0 0 1 0
1 0 0 0 0
0 1 0 0 1
0 0 0 1 0
```

---

## 📌 Graph Visualization

```
     (0)
    /   \
  (1)   (2)
   |
  (3)
   |
  (4)
```

---

## 🔁 Basic Graph Operations

| Operation     | Description                     |
|---------------|---------------------------------|
| `addEdge()`   | Adds an edge between two nodes  |
| `removeEdge()`| Removes an edge                 |
| `traverse()`  | BFS or DFS traversal            |
| `isConnected()`| Checks if graph is connected   |

---

## 🔍 Graph Traversal Algorithms

- **DFS (Depth-First Search)**: Explores as far as possible before backtracking.
- **BFS (Breadth-First Search)**: Explores neighbors level-by-level.
- **Dijkstra’s Algorithm**: Finds shortest path in weighted graph.
- **A* Algorithm**: Heuristic-based pathfinding.

---

## 🌍 Real-World Applications of Graphs

### 1. **Social Networks**
- Users are vertices, connections are edges.
- Used for friend recommendations, mutual friends, etc.

### 2. **Google Maps / GPS**
- Locations are vertices, roads are edges (with weights like distance or time).

### 3. **Internet / Network Routing**
- Routers and computers are nodes, connections are edges.

### 4. **Recommendation Engines**
- Products or movies linked by user preferences.

### 5. **Web Crawling**
- Web pages and hyperlinks form a graph structure.

### 6. **Job Scheduling**
- Tasks with dependencies form a **Directed Acyclic Graph (DAG)**.

### 7. **Course Prerequisites**
- Course dependencies modeled as a graph (DAG).

---

## ✅ Advantages

- Great for representing complex relationships.
- Flexible and powerful for modeling real-world systems.
- Supports many efficient traversal/search algorithms.

---

## ❌ Disadvantages

- Can consume more memory (especially adjacency matrix).
- More complex to implement than arrays/lists.

---

## 📊 Summary Table

| Feature            | Description                          |
|--------------------|--------------------------------------|
| Structure Type     | Non-linear                           |
| Data Model         | Vertices and Edges                   |
| Representations    | Adjacency Matrix / List              |
| Common Algorithms  | DFS, BFS, Dijkstra, A*, etc.         |
| Real Use Cases     | Maps, Networks, Social Media, AI     |

---


# 🔐 Hash Table Data Structure

## What is a Hash Table?

A **Hash Table** (or **Hash Map**) is a data structure that stores **key-value pairs**.  
It uses a **hash function** to compute an index (called a **hash code**) into an array of buckets or slots, from which the desired value can be found.

---

## 📌 Key Concepts

- **Key**: The unique identifier for data (e.g., name, ID).
- **Value**: The data associated with a key.
- **Hash Function**: Converts a key to an array index.
- **Collision**: When two keys map to the same index.
- **Collision Handling**:
  - **Chaining** (Linked List at each index)
  - **Open Addressing** (Linear or Quadratic Probing)

---

## 🧠 Properties

| Feature              | Description                     |
|----------------------|---------------------------------|
| Time Complexity      | Average: O(1), Worst: O(n)      |
| Efficient For        | Insert, Search, Delete          |
| Needs Good Hash Func | To minimize collisions          |

---

## 👨‍💻 Simple C Example: Hash Table with Chaining

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

// Node structure for chaining
struct Node {
    char key[100];
    int value;
    struct Node* next;
};

// Hash Table (array of pointers)
struct Node* hashTable[SIZE];

// Hash function (simple sum of chars)
int hash(char* key) {
    int sum = 0;
    for (int i = 0; key[i] != '\0'; i++)
        sum += key[i];
    return sum % SIZE;
}

// Insert key-value pair
void insert(char* key, int value) {
    int index = hash(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->key, key);
    newNode->value = value;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

// Search for a key
int search(char* key) {
    int index = hash(key);
    struct Node* temp = hashTable[index];
    while (temp != NULL) {
        if (strcmp(temp->key, key) == 0)
            return temp->value;
        temp = temp->next;
    }
    return -1; // Not found
}

// Display the hash table
void display() {
    for (int i = 0; i < SIZE; i++) {
        printf("Index %d: ", i);
        struct Node* temp = hashTable[i];
        while (temp != NULL) {
            printf("(%s: %d) -> ", temp->key, temp->value);
            temp = temp->next;
        }
        printf("NULL\n");
    }
}

int main() {
    insert("apple", 100);
    insert("banana", 200);
    insert("grape", 300);
    insert("orange", 400);

    display();

    char searchKey[] = "banana";
    int value = search(searchKey);
    if (value != -1)
        printf("\nValue for '%s': %d\n", searchKey, value);
    else
        printf("\nKey '%s' not found!\n", searchKey);

    return 0;
}
```

---

## 🖨️ Output
```
Index 0: NULL
Index 1: NULL
Index 2: NULL
Index 3: NULL
Index 4: NULL
Index 5: NULL
Index 6: (grape: 300) -> (banana: 200) -> NULL
Index 7: (apple: 100) -> NULL
Index 8: NULL
Index 9: (orange: 400) -> NULL

Value for 'banana': 200
```

---

## 🌍 Real-World Applications of Hash Tables

### 1. **Dictionaries / Word Lookup**
- Word = key, Definition = value (like in Python dictionaries or C++ maps).

### 2. **Databases / Indexing**
- Primary keys mapped to records for fast lookup.

### 3. **Symbol Tables in Compilers**
- Variables/functions stored for quick reference.

### 4. **Caching Systems**
- Fast retrieval of frequently accessed data.

### 5. **Password Storage**
- Passwords are hashed for security.

### 6. **Counting / Frequency Maps**
- Count occurrences of elements (e.g., character frequency).

### 7. **Routing / Network Address Mapping**
- IP addresses mapped to routes or devices.

---

## ✅ Advantages

- **Fast access**: Average O(1) time for search, insert, delete.
- **Efficient use of memory** (with good hashing).
- **Scales well** with large datasets.

---

## ❌ Disadvantages

- **Poor performance if collisions are frequent**.
- **No ordering** of keys.
- **Difficult to resize** dynamically in some languages.

---

## 📊 Summary Table

| Feature           | Description                        |
|-------------------|------------------------------------|
| Structure Type    | Key-Value Store                    |
| Best Time         | O(1) for Insert/Search/Delete      |
| Collision Methods | Chaining, Open Addressing          |
| Used In           | Caching, Indexing, Maps, Compilers |



# 🆚 Static vs Dynamic Data Structures

| Feature                     | Static Data Structure                      | Dynamic Data Structure                        |
|-----------------------------|--------------------------------------------|-----------------------------------------------|
| **Memory Allocation**       | Fixed size at compile time                 | Allocated at runtime (flexible)               |
| **Size**                    | Cannot be changed during execution         | Can grow or shrink during execution           |
| **Speed**                   | Generally faster (less overhead)           | Slightly slower due to memory management      |
| **Memory Usage**            | May waste memory if size is too large      | More efficient use of memory                  |
| **Ease of Implementation**  | Easier to implement                        | More complex to implement                     |
| **Examples**                | Arrays                                     | Linked Lists, Stacks, Queues (dynamic), Trees |
| **Reallocation**            | Not possible                               | Possible using pointers                       |
| **Flexibility**             | Less flexible                              | Highly flexible                               |

---

## 🧠 Summary

- **Use Static** data structures when the size is known and fixed.
- **Use Dynamic** data structures when size changes frequently or is unknown.


