class Queue{
    constructor(){
        this.arr=[]
        this.head=0;
        this.tail=0;
    }
    append(x){
        this.arr.push(x)
        this.tail++
    }
    remove(){
        delete this.arr[this.head]
        // if(this.){
        this.head++
        console.log(this.arr);
        // }
    }

}
const q=new Queue()
q.append(1)
q.append(2)
q.append(3)
q.remove()
q.remove()
q.remove()
q.remove()
console.log(q.arr.length,q.head,q.tail);
