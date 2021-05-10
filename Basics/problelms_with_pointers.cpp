// we will discuss about the common  problems that the  devolpers encounter while using pointers

// 1.unintialising the pointer 
// 2.memory leak
// 3.Dangling pointer 

// -------unintialising the pointer-----------
// we should not leave the pointer unintailised,that mean we declares the pointer, but do not assign any address to it 
// this should be avoided 


// -----------memory leak --------
// when we forget to delete the memory in heap ,then the memory leak occurs ,we discussed it more elaboratelly in accessinh_heap_memmory concept 

// -------Danglling pointers ---------
// suppose we decalred a pointer array in main function,and intialized with some values . 
// suppose we pass this pointer to a function and in that function we deleted the array in heap , 
// the pointer in main function now points to the empty memory,such type of pointers are called the dangling pointers 

