# CPP NOTES



### 🔹 `map` (Ordered Map)

* Stores key-value pairs (`std::map<Key, Value>`)
* **Ordered by key** (ascending by default using `operator<`)
* **Implemented as**: Balanced binary search tree (typically Red-Black Tree)
* **Time complexity**:

  * Insert: `O(log n)`
  * Search: `O(log n)`
  * Erase: `O(log n)`
* **Duplicates not allowed** for keys
* **Usage**: When you need ordered data with fast access by key

📌 **Example:**

```cpp
std::map<int, std::string> m;
m[1] = "apple";
m[3] = "banana";
m[2] = "cherry";  // Keys will be ordered: 1, 2, 3
```

---

### 🔹 `unordered_set`

* Stores **only keys**, **unique**
* **No ordering**
* **Implemented as**: Hash table
* **Time complexity**:

  * Average: `O(1)` for insert/search/delete
  * Worst-case: `O(n)` (very rare if hash function is good)
* **Usage**: When fast lookup and uniqueness are needed, and order doesn't matter

📌 **Example:**

```cpp
std::unordered_set<int> us;
us.insert(3);
us.insert(1);
us.insert(2);  // Order is not guaranteed
```

---

### 🔹 `set` (Ordered Set)

* Stores **only keys**, **unique**
* **Ordered by key**
* **Implemented as**: Balanced binary search tree
* **Time complexity**: `O(log n)` for insert/search/delete
* **Usage**: When you need ordered unique elements

📌 **Example:**

```cpp
std::set<int> s;
s.insert(3);
s.insert(1);
s.insert(2);  // Elements stored in order: 1, 2, 3
```

---

### 🔹 `unordered_map` 

* Like `map`, but **unordered**
* Implemented using **hash tables**
* Fast average-case performance: `O(1)`
* Keys must be unique

📌 **Example:**

```cpp
std::unordered_map<int, std::string> um;
um[1] = "apple";
um[2] = "banana";  // No ordering of keys
```

---

### Summary Table:

| Container       | Stores    | Ordered | Duplicates | Time (avg) | Implementation       |
| --------------- | --------- | ------- | ---------- | ---------- | -------------------- |
| `map`           | key-value | Yes     | No         | O(log n)   | BST (Red-Black Tree) |
| `unordered_map` | key-value | No      | No         | O(1)       | Hash Table           |
| `set`           | keys only | Yes     | No         | O(log n)   | BST                  |
| `unordered_set` | keys only | No      | No         | O(1)       | Hash Table           |

