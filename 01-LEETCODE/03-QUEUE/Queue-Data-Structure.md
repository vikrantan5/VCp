# Queue Data Structure

## 1. What is a queue?

A **queue** is a linear data structure that processes items in the order they arrive. It follows **FIFO**: **First In, First Out**.

Think of a line at a service counter: the first person to join the line is the first person served.

```text
Front                              Rear
  |                                  |
  v                                  v
[10] -> [20] -> [30] -> [40]
 remove                                add
```

- New elements are inserted at the **rear** (back).
- Elements are removed from the **front**.
- A normal queue does not provide direct access to an arbitrary middle element.

## 2. Queue terminology

- **Front / head:** The next element to be removed.
- **Rear / back / tail:** The most recently added element.
- **Enqueue:** Add an element at the rear.
- **Dequeue:** Remove the element at the front.
- **Peek / top:** Read the front element without removing it.
- **Empty queue:** Contains no elements.
- **Capacity:** Maximum number of elements in a fixed-capacity queue.

For the queue `[10, 20, 30]`, `10` is at the front and `30` is at the rear. Enqueuing `40` gives `[10, 20, 30, 40]`; dequeuing next removes `10`.

## 3. Basic operations

| Operation | Meaning | Typical time |
|---|---|---:|
| `enqueue(x)` | Add `x` at the rear | O(1) |
| `dequeue()` | Remove the front element | O(1) |
| `front()` / `peek()` | Read the front element | O(1) |
| `back()` | Read the rear element | O(1) |
| `empty()` | Check whether there are no elements | O(1) |
| `size()` | Get the number of elements | O(1) |

These are the usual complexities for a well-designed queue. A poor array implementation that shifts every element after removal can take O(n) per dequeue.

## 4. Queue states and edge cases

- **Underflow:** Attempting to remove or inspect an element when the queue is empty.
- **Overflow:** Attempting to add an element to a full fixed-capacity queue.
- Always check that a queue is non-empty before calling `front()`, `back()`, or `pop()` in C++.
- A queue can contain duplicate values; values do not need to be unique.
- If an algorithm changes the queue while iterating, capture the original size first when only the original elements should be processed.

## 5. Queue in C++ (`std::queue`)

The standard queue adapter is declared in the `<queue>` header and is in the `std` namespace.

```cpp
#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    q.push(10);                 // enqueue
    q.push(20);
    q.emplace(30);              // construct an element at the rear

    std::cout << q.front();     // 10; does not remove it
    std::cout << q.back();      // 30
    std::cout << q.size();      // 3

    q.pop();                    // removes 10; returns void

    if (!q.empty()) {
        std::cout << q.front(); // 20
    }
}
```

### Common `std::queue` members

- `q.push(value)` — inserts a copy at the rear.
- `q.emplace(args...)` — constructs an element at the rear in place.
- `q.front()` — returns a reference to the front element.
- `q.back()` — returns a reference to the rear element.
- `q.pop()` — removes the front element; it **does not return** the removed value.
- `q.empty()` — returns `true` when the queue is empty.
- `q.size()` — returns the number of elements.
- `q.swap(other)` — swaps the contents of two queues.

To get and remove the front value, read it before calling `pop()`:

```cpp
if (!q.empty()) {
    int value = q.front();
    q.pop();
    // Use value here.
}
```

`std::queue` is a **container adaptor**, not a container with iterators. It exposes queue operations while using an underlying container (by default, `std::deque`). Do not assume it supports indexing or iteration.

## 6. Displaying a queue without losing its contents

Since `std::queue` has no iterators, one approach is to rotate the original elements. Save the original size so the loop processes exactly those elements:

```cpp
#include <iostream>
#include <queue>

void display(std::queue<int>& q) {
    const std::size_t count = q.size();

    for (std::size_t i = 0; i < count; ++i) {
        int value = q.front();
        q.pop();
        std::cout << value << ' ';
        q.push(value);
    }
}
```

This preserves the queue's order and contents, but performs `count` removals and insertions: O(n) time. To avoid modifying the original, pass the queue by value instead; that makes a copy.

## 7. Implementations

### 7.1 Array-based queue

Store elements in an array and track front and rear indices. A simple array that shifts all remaining elements after each dequeue is easy to understand, but removal costs O(n).

### 7.2 Circular array queue

A circular queue treats the array as a ring. After the last index, the next index wraps to zero:

```text
next_index = (current_index + 1) % capacity
```

This reuses free slots at the beginning of the array and supports O(1) enqueue and dequeue. A fixed-size implementation must distinguish a full queue from an empty queue, commonly by maintaining a `size` counter or reserving one slot.

### 7.3 Linked-list queue

Each node points to the next node. Keep pointers to both the front and rear:

- Enqueue: link a new node after the rear and update the rear.
- Dequeue: move the front to its next node and delete the old front.
- Both operations take O(1) time.

Extra memory is needed for links and dynamic allocation. When removing the last node, both front and rear must be updated to indicate an empty queue.

### Choosing an implementation

- Prefer `std::queue` for ordinary FIFO behavior.
- Use a circular buffer for fixed-capacity or performance-sensitive buffering.
- Use a deque when both ends need to be accessed.
- Implement the structure yourself when learning or when the required interface differs from the standard adaptor.

## 8. Queue variants

### Simple queue

Standard FIFO behavior: add at the rear, remove from the front.

### Circular queue

Uses wraparound storage to reuse array capacity efficiently.

### Deque

A **double-ended queue** supports insertion and removal at both ends. In C++, use `std::deque` from `<deque>`. It is not the same interface as `std::queue`.

### Priority queue

A **priority queue** removes the element with the highest priority, not necessarily the earliest inserted element. C++ `std::priority_queue` is a heap-based adaptor declared in `<queue>`. By default, its top is the largest element.

### Monotonic queue

A technique using a deque to maintain elements in increasing or decreasing order. It is often used to find sliding-window minima or maxima efficiently.

## 9. Common queue algorithms

### Reverse a queue using a stack

A stack reverses order because it is LIFO. Move all queue elements to a stack, then move them back:

```cpp
#include <queue>
#include <stack>

void reverse(std::queue<int>& q) {
    std::stack<int> s;

    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}
```

Time: O(n). Extra space: O(n).

### Process the original elements while preserving them

When processing each original element exactly once, capture `q.size()` before the loop. If each item is popped and pushed back, looping until the queue becomes empty will never finish.

```cpp
const std::size_t count = q.size();
for (std::size_t i = 0; i < count; ++i) {
    int value = q.front();
    q.pop();
    // Process value.
    q.push(value); // omit this if the item should be removed
}
```

### Remove elements at even zero-based positions

The first element has index `0`, which is even. This example removes positions `0, 2, 4, ...` from the original queue and retains positions `1, 3, 5, ...`:

```cpp
#include <cstddef>
#include <queue>

void removeEvenPositions(std::queue<int>& q) {
    const std::size_t count = q.size();

    for (std::size_t i = 0; i < count; ++i) {
        int value = q.front();
        q.pop();

        if (i % 2 != 0) {
            q.push(value);
        }
    }
}
```

Time: O(n). Extra space: O(1), excluding the queue itself.

## 10. Where queues are used

- **Breadth-first search (BFS):** Visit graph or tree nodes level by level.
- **Level-order tree traversal:** Process all nodes at one depth before the next.
- **Task scheduling:** Handle jobs in arrival order.
- **Operating systems:** Ready queues, request queues, and event handling.
- **Networking:** Buffer packets and data streams.
- **Producer-consumer systems:** Pass work between producers and consumers.
- **Simulation:** Model lines, service desks, traffic, or other waiting systems.
- **Asynchronous applications:** Schedule callbacks, messages, or events.
- **Shortest paths:** BFS finds shortest paths in unweighted graphs.

## 11. BFS example

For an unweighted graph, BFS uses a queue to visit vertices in increasing distance from a starting vertex. Mark a vertex visited when it is enqueued; this prevents adding it repeatedly.

```cpp
#include <queue>
#include <vector>

std::vector<int> bfs(const std::vector<std::vector<int>>& graph, int start) {
    std::vector<bool> visited(graph.size(), false);
    std::vector<int> order;
    std::queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int vertex = q.front();
        q.pop();
        order.push_back(vertex);

        for (int neighbor : graph[vertex]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return order;
}
```

Time: O(V + E), where V is the number of vertices and E is the number of edges. Space: O(V). This example assumes `start` and every neighbor are valid vertex indices and the graph is represented by adjacency lists.

## 12. Queue versus stack

| Property | Queue | Stack |
|---|---|---|
| Ordering | FIFO | LIFO |
| Insert | Rear (`push`) | Top (`push`) |
| Remove | Front (`pop`) | Top (`pop`) |
| Read next item | Front | Top |
| Common uses | BFS, scheduling, buffering | DFS, undo, recursion |

## 13. Common mistakes

1. **Calling `front()` on an empty queue.** Check `!q.empty()` first.
2. **Expecting `pop()` to return a value.** In C++, save `front()` first, then call `pop()`.
3. **Using the wrong end.** Enqueue at the rear; dequeue from the front.
4. **Looping on a changing size.** If popping and pushing during traversal, use the original size as the loop bound.
5. **Using a queue when random access is needed.** Choose a vector, deque, or another suitable container instead.
6. **Confusing FIFO with priority order.** A priority queue does not preserve arrival order as its primary rule.
7. **Forgetting to reset the rear in a linked-list queue.** When its final node is removed, both front and rear must become empty.
8. **Incorrect circular-buffer wraparound.** Advance indices modulo the capacity and track full/empty state unambiguously.

## 14. Complexity summary

For a typical queue with front and rear tracking:

| Operation | Time |
|---|---:|
| Enqueue | O(1) |
| Dequeue | O(1) |
| Peek at front or rear | O(1) |
| Check empty / size | O(1) |
| Search for an arbitrary value | O(n) |
| Display all elements | O(n) |
| Reverse using a stack | O(n) time, O(n) extra space |

## 15. Quick recap

- A queue is **FIFO**: the earliest inserted element is removed first.
- Add at the rear; remove and inspect at the front.
- `std::queue<T>` is the standard C++ adaptor for queue behavior.
- `pop()` removes but does not return the front value.
- Check for emptiness before accessing the front or back.
- Queues are especially useful for BFS, scheduling, and buffering.
