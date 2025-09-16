#include <iostream>
#include <cmath>
using namespace std;
int size=10;
int arr[10];
int curSize=0;
int start = -1;
int last = -1;
bool isEmpty(){
    return curSize == 0;
}
bool isFull(){
    return curSize == size;
}
void enqueue(int n){
    if(isFull()){
        cout<<"queue is Full \n";
    }

    else{
        if(isEmpty()){
            start=0;
            last=0;
        } else {
            last=(last+1)%size;
        }
        arr[last]=n;
        curSize++;
    }
}
int dequeue(){
    
    if(isEmpty()){
        cout<<"queue is empty \n";

    }

    int element = arr[start];
    if(start==last){
        start=-1;
        last=-1;
    }
    else{
        start=(start+1)%size ;
    }
    curSize--;
    return element;
}
void peek(){
    if(isEmpty()){
        cout<<"no element \n";
    }
    else{
        cout<<"element on the top = "<< arr[start]<<endl;;
    }
}


void display(){
    for(int i=start;i<last+1;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
}
int main(){ 
 int choice, value;

    do {
        cout << "\n--- Queue Menu ---\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. if Empty\n";
        cout << "6. if Full\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value -> ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                if (isEmpty())
                    cout << "Queue is EMPTY" << endl;
                else
                    cout << "Queue is NOT empty" << endl;
                break;

            case 6:
                if (isFull())
                    cout << "Queue is FULL" << endl;
                else
                    cout << "Queue is NOT full" << endl;
                break;

            case 0:
                cout << "Exiting program" << endl;
                break;

            default:
                cout << "Invalid choice" << endl;
        }
    }
while (choice != 0);

}
