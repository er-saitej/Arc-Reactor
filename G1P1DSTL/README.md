# Data Structures and Algorithms - Java Collections framework or C++ Standard Template Library

> This framework provides defined objects of various data structures - also called as containers.\
> Containers are objects which can store collections of other objects.\
> Example: Array of integers, strings etc.\
> This container can be as simple as collection of integers like array of integers as well as they can also be as complex as collection of functions or other objects.\
> Accessing can be done using iterators.\
> Not every collections can be iterated using indices. Data Structures like trees, linked lists cannot be iterated through indices.\
> Iterators are objects which are similar to pointers.

# Sequence Containers - Uses continuous memory allocations - different time complexities

> Data is stored linearly inside a sequence.\
> Arrays, Vectors, Deque (Doubly ended queues), Forward Lists, Lists.\
> Arrays are of fixed sizes and Vectors can grow as elements are inserted into it.\
> In doubly ended queue (Deque), elements can be inserted both from front and back.\
> Forward lists are singly linked lists and Lists are doubly linked lists.
> Functionalities: Searching, insertion, deletion - all these operations follow different time complexities based on algorithms and data structures used.

# Associative Containers - Uses Height Balanced Trees - almost time complexities are O(log(n)) mostly.

> Containers which uses associations in data structures.
> Set - never stores duplicates. - they are ordered. [sorted] - uses balanced tree like structure to implement a set.\
> Multi-Set - stores duplicates as well.\
> Map - contains keys and values pairs. - they are ordered. - uses balanced tree to sort keys in a map.\
> Multi-Map - stores duplicate keys as well.\
> Functionalities: Searching, insertion, deletion - all these operations follow mostly log(n) time complexities since they uses balanced binary search trees.

# Unordered Containers - Uses dynamic memory allocations - time complexities are O(1) mostly.

> Unordered-Set - stores elements without duplicates - [not sorted].\
> Unordered-Map - Hash table - [not sorted].\
> Unordered-Multi-Set - stores elements along with duplicates - [not sorted].\
> Unordered-Multi-Map - Hash table with multiple duplicate keys - [not sorted].

# Container Adaptors - Uses different containers to implement certain data structures.

> Stack - First in, Last served.\
> Methods to access data - Insert at top, view at top, remove from top.\
> Queue - First in, First served.\
> Methods to access data - Insert at top, view at bottom, remove from bottom.\
> Priority Queue - Heap.\
> Max Heap - provides data in descending order.\
> Min Heap - provides data in ascending order.