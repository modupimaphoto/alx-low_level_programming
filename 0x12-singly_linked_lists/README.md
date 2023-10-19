# 0x12. C - Singly linked lists
<p>
	A singly linked list is a linear data structure in which each element is connected only to its next element using a pointer. 
	The elements are not stored in contiguous memory locations, unlike arrays. 
	Each element in a singly linked list is called a node and consists of two parts: the **data** and a pointer to the next node. 
	The first node is called the head, and the last node is called the tail. 
	Singly linked lists are used to implement stacks, queues, and adjacency lists.
</p>
<p>
	Arrays and linked lists are both used to store linear data of similar types, but they have different advantages and disadvantages.
	<br>
	Arrays store elements in contiguous memory locations, resulting in easily calculable addresses for the elements stored. 
	This allows faster access to an element at a specific index. However, arrays are less flexible than linked lists in terms of storage structure. 
	If the array is full or needs to be resized, it can be an expensive operation that may not even be possible if memory is fragmented
</p>
<p>
	Linked lists, on the other hand, are less rigid in their storage structure. 
	Elements are usually not stored in contiguous locations, hence they need to be stored with additional tags giving a reference to the next element. 
	Linked lists are more flexible than arrays in terms of storage capacity because there is no size constraint on linked lists. 
	Elements can be inserted into linked lists indefinitely. 
	However, linked lists are slower than arrays when it comes to accessing an element at a specific index because they do not 
	have easily calculable addresses for the elements stored.
</p>
<p>
	In summary, arrays are faster than linked lists when it comes to accessing an element at a specific index, 
	but they are less flexible than linked lists in terms of storage capacity. Linked lists are slower than arrays when it comes to accessing 
	an element at a specific index, but they are more flexible than arrays in terms of storage capacity.
</p>
