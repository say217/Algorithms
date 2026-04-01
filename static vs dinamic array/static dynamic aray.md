| Feature              | Static Array                                             | Dynamic Array                                            |
|----------------------|----------------------------------------------------------|-----------------------------------------------------------|
| Definition           | Fixed-size array with memory allocated at compile time  | Resizable array with memory allocated at runtime         |
| Size                 | Defined at declaration and cannot change                | Can grow or shrink during program execution              |
| Memory Allocation    | Compile-time                                             | Runtime                                                  |
| Resizing             | Not supported                                            | Supported (may involve copying to new memory)            |
| Memory Usage         | Efficient and predictable                               | May waste memory due to over-allocation or resizing      |
| Performance          | Faster for fixed-size data                              | Slower if frequent resizing occurs                       |
| Flexibility          | Rigid and less adaptable                                | More flexible and easier to work with                    |
| Language Examples    | C, C++ (`int arr[10]`)                                   | Python (`list`), Java (`ArrayList`), C++ (`std::vector`) |
| Use Cases            | When size is known and doesn't change                   | When size may vary or is unknown at compile time         |



## 📚 What is an Array?

An **array** is a data structure that stores a fixed-size sequence of elements of the **same data type** in **contiguous memory locations**. Each element in the array is accessed using an **index**, starting from 0.

### ✅ Key Features:
- Stores multiple values in a single variable
- All elements must be of the **same type**
- Accessed by index (e.g., `arr[0]`, `arr[1]`, etc.)
- Memory-efficient for storing collections of data

### 🔧 Syntax Example (C):
```c
int numbers[5] = {10, 20, 30, 40, 50};

```

## ❓ Can an Array Hold Different Types of Elements?

### 🧾 Answer:
In most programming languages, **arrays are designed to hold elements of the same data type**. However, there are **exceptions** depending on the language.


### ✅ Language-Wise Explanation:

| Language          | Can Hold Different Types? | Explanation |
|-------------------|---------------------------|-------------|
| **C / C++**        | ❌ No                    | Arrays must contain elements of the same type (e.g., `int arr[5]`) |
| **Java**           | ❌ No                    | Arrays are type-specific like `int[]`, `String[]` |
| **Python (`list`)**| ✅ Yes                   | Lists can store mixed types (e.g., `[1, "hello", 3.14]`) but it's not a true array |
| **Python (`NumPy`)**| ❌ No                  | Enforces single data type for all elements in the array |
| **JavaScript**     | ✅ Yes                   | Arrays can hold mixed types (e.g., `[1, "text", true]`) |
| **Go**             | ❌ No                    | Arrays must be of the same type |

---

### 📌 Summary:
- **In traditional arrays** (like C, C++, Java, NumPy): ❌ Cannot store mixed types.
- **In flexible structures** (like Python lists, JavaScript arrays): ✅ Mixed types are allowed.











# 📋 Array Interview Questions and Answers

---

## 1. ❓ What is an array?

**Answer:**  
An array is a data structure that stores a fixed-size sequential collection of elements of the same data type. Elements are stored in contiguous memory locations and accessed using indices.

---

## 2. ❓ How is an array different from a linked list?

**Answer:**

| Feature       | Array                       | Linked List                 |
|---------------|-----------------------------|-----------------------------|
| Memory        | Contiguous memory           | Non-contiguous memory       |
| Access Time   | O(1) (direct access)         | O(n) (sequential access)    |
| Insertion/Deletion | Costly (shift elements)     | Efficient (pointer changes) |
| Size          | Fixed (static arrays)       | Dynamic                     |

---

## 3. ❓ What is the time complexity of basic operations on arrays?

**Answer:**

| Operation     | Time Complexity |
|---------------|-----------------|
| Access        | O(1)            |
| Search        | O(n)            |
| Insertion     | O(n) (at beginning or middle) |
| Deletion      | O(n)            |

---

## 4. ❓ How do you reverse an array?

**Answer:**

```python
arr = [1, 2, 3, 4, 5]
arr.reverse()
# or
arr = arr[::-1]
```











# 📚 Dynamic Array – Definition & Interview Questions

---

## 📌 What is a Dynamic Array?

A **dynamic array** is a data structure that allows elements to be added or removed and **resizes automatically** when its capacity is exceeded. Unlike static arrays, dynamic arrays can **grow or shrink** at runtime.

---

### ✅ Key Characteristics:

- **Resizable**: Automatically resizes when needed
- **Random access**: O(1) time for accessing any element by index
- **Efficient operations**: Amortized O(1) for append, O(n) for insert/delete in middle
- **Examples**: `list` in Python, `ArrayList` in Java, `vector` in C++

---

## 🧠 Dynamic Array Interview Questions and Answers

---

### 1. ❓ What is the difference between static and dynamic arrays?

**Answer:**

| Feature        | Static Array                  | Dynamic Array                        |
|----------------|-------------------------------|--------------------------------------|
| Size           | Fixed at compile time         | Can grow/shrink at runtime           |
| Memory         | Contiguous and fixed          | Resized and copied as needed         |
| Performance    | Faster for known size         | Flexible and memory efficient        |
| Example        | `int arr[5]` in C             | `vector<int>` in C++, `ArrayList` in Java |

---

### 2. ❓ How does a dynamic array resize internally?

**Answer:**  
When the array's current capacity is exceeded:
- A new array is created with larger capacity (usually 2× the current size)
- All elements are copied to the new array
- The old array is deleted/freed

This resizing takes O(n) time, but happens rarely, so append operations are **amortized O(1)**.

---

### 3. ❓ What are the time complexities of operations in a dynamic array?

| Operation         | Time Complexity |
|-------------------|-----------------|
| Access by index   | O(1)            |
| Append (push)     | Amortized O(1)  |
| Insert/Delete     | O(n)            |
| Resize            | O(n) (when triggered) |

---

### 4. ❓ Give an example of dynamic array implementation in Python.

```python
arr = []              # empty dynamic array
arr.append(10)        # add element
arr.append(20)
print(arr[0])         # access element
print(len(arr))       # size
```


### ❓ What are the advantages of dynamic arrays?
Answer:

Flexibility to grow/shrink in size

Efficient for large, unpredictable datasets

Random access support

Simplifies coding (e.g., no need to manage memory in Python)

### 6. ❓ Disadvantages of dynamic arrays?
Answer:

Resizing can be costly (O(n) when triggered)

Insertion/deletion in middle is slow (O(n))

More memory overhead compared to linked lists in some cases

### 7. ❓ Name some dynamic array classes in popular languages.
Language	Dynamic Array Type
Python	list
Java	ArrayList
C++	vector
JavaScript	Array
C#	List<T>

### 8. ❓ How would you implement a dynamic array from scratch?
Answer:
To implement:

Start with a static array of capacity n

When full, create a new array of 2n size

Copy all elements into the new array

Add the new item

Update the pointer to the new array





### Time Complexity of Accessing an Element in an Array
Accessing an element by index in an array is O(1) (constant time) in all these languages. This is because arrays use contiguous memory, allowing direct computation of the memory address for any index. 







# Memory Allocation of Static Arrays in C
In C, static arrays are allocated memory at compile-time. This means that the memory for the array is allocated when the program is compiled, rather than at runtime.

Example:

## int myArray[5];
In this example, the compiler allocates memory for an array of 5 integers. The memory is allocated on the stack, and the size of the array is fixed at compile-time.