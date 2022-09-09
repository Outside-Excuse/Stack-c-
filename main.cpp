//stack implementation 
//Alejandro Hidalgo Badillo 
// 9 de septiembre del 2022

//https://www.youtube.com/watch?v=GBST5uQ_yos&list=PL43pGnjiVwgS5njI0HMGnqSH18tSSuLz_&index=5
#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> numbers){
    while(!numbers.empty()){
        cout<<numbers.top()<<endl;
        numbers.pop();
    }
}
int main(){
    //empty, size, push, pop, top
    stack<int>numbersStack;

    //agregamos 3 elementos 
    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);

    //eliminamos 3 elementos
    
    /*
    numbersStack.pop();
    numbersStack.pop();
    numbersStack.pop();
    */

    if(numbersStack.empty()){
        cout<<"your stack is empty"<<endl;
    }
    else{
        cout<<"your stack is NOT empty"<<endl;
    }
    cout<<"stack size: "<<numbersStack.size()<<endl;

    cout<<"Print STACK: "<<endl;
    printStack(numbersStack);
}
