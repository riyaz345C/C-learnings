class Node{
    constructor(data,next=null){
        this.data=data;
        this.next=next
    }
}
// let x = new Node(100)
// console.log(x);

class LinkedList{
    constructor(){
        this.head = null;
        this.size = 0;
    }
    // insert 
    insert(x){
        this.head = new Node(x,this.head);
        this.size++
    }
    // insert last
    insertLast(x){
        let node = new Node(x)
        let current;

        if(!this.head){
            this.head=node;
            this.size++
        }
        else{
            current = this.head
            while(current.next){
                current=current.next
            }
            current.next = node;
            this.size++;
        }
    } 
    // inser at index
    inIndex(data,index){
        // out of range
        if(index>0 && index > this.size){

        }
        if(index ===0){
            this.head = new Node(data,this.head)
        }
        let node = new Node(data);
        let current,previous;
    }
    // get at index
    // remove at index
    // clear 
    // print
    print(){
        let current = this.head
        while(current){
            console.log(current.data,current.next);
            current = current.next
        }
    }
}

let ll = new LinkedList()
ll.insert(100)
ll.insert(200)
ll.insert(300)
ll.insertLast(400)
ll.print()
console.log(ll);