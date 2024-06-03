class stack{
    constructor(){
        this.stackArr=[]
    }
    append(x){
        this.stackArr.push(x)
        // console.log(x);
    }
    pop(){
        return this.stackArr.pop();
    }
    length(){
        return this.stackArr.length()
    }
    print(){
        console.log(this.stackArr);
    }
}
let stackElement = new stack;
// for(i=0;i<=4;i++){
//     stackElement.append(i)
//     if(i==3){
//         let x=stackElement.pop()
//         console.log(x);
//     }
// }
function ad(x){
    for(i=0;i<x;i++){
            stackElement.append(i)
    }
}
function re(x){
    for(i=0;i<x;i++){
       stackElement.pop()
    }
}
ad(5)
console.log(stackElement.stackArr);
re(2)
console.log(stackElement.stackArr);