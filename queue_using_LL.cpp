emplate<typename T>
class Queue {
    
    Node<T> *head,*last;
    int size;
    
    
    public :
    
    
    Queue() {
       last=head=NULL;
        size=0;
        
    }
    
    void enqueue(T data) {
        Node<T> *newnode= new Node<T>(data);
        if(head==NULL)
        {
            head=last=newnode;
            size++;
        }
        else
        {
            last->next=newnode;
            last=newnode;
            size++;
        }
    }
    
    int getSize() {
        return size;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    T dequeue() {
        // Return 0 if queue is empty
        if(size==0)
            return 0;
        T ans=head->data;
        Node<T> *p=head;
        head=head->next;
        delete p;
        size--;
        return ans;
    }
    
    T front()  {
        // Return 0 if queue is empty
        return head->data;
    }
};    
