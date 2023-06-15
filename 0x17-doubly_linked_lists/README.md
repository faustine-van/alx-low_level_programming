# 0x17. C - Doubly linked lists

## ALGORITHN

* Algorithm to insert node at the beginning of a Doubly linked list
```
%% Input : head {A pointer pointing to the first node of the list}
Begin:
    alloc (newNode)
    If (newNode == NULL) then
        write ('Unable to allocate memory')
    End if
    Else then
        read (data)
        newNode.data ← data;
        newNode.prev ← NULL;
        newNode.next ← head;

        head.prev ← newNode;
        head ← newNode;
        write('Node added successfully at the beginning of List')
    End else
End
```
* Algorithm to insert node at the end of a Doubly linked list
```
%% Input : last {Pointer to the last node of doubly linked list}
Begin:
    alloc (newNode)
    If (newNode == NULL) then
        write ('Unable to allocate memory')
    End if
    Else then
        read (data)
        newNode.data ← data;
        newNode.next ← NULL;
        newNode.prev ← last;

        last.next ← newNode;
        last ← newNode;
        write ('Node added successfully at the end of List')
    End else
End
```

* Algorithm to insert node at any position of a Doubly linked list
```
%% Input : head {Pointer to the first node of doubly linked list}
        : last {Pointer to the last node of doubly linked list}
        : N {Position where node is to be inserted}
Begin:
    temp ← head
    For i←1 to N-1 do
        If (temp == NULL) then
            break
        End if
        temp ← temp.next;
    End for
    If (N == 1) then
        insertAtBeginning()
    End if
    Else If (temp == last) then
        insertAtEnd()
    End if
    Else If (temp != NULL) then
        alloc (newNode)
        read (data)

        newNode.data ← data;
        newNode.next ← temp.next
        newNode.prev ← temp
        If (temp.next != NULL) then
            temp.next.prev ← newNode;
        End if
        temp.next ← newNode;
        write('Node added successfully')
    End if
End
```
