#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

class List_Node{
public:
    string val;
    List_Node* prev, * next;

    List_Node(string val){
        this->val = val;
        prev = next = nullptr;
    }
};

class LinkedList{
public:
    List_Node* head, * tail;

    LinkedList(){
        head = tail = nullptr;
    }

    void push_back(string val){
        List_Node* newNode = new List_Node(val);
        if(head == nullptr){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
};

string getNums(queue<char>& q){
    string str;
    while(!q.empty()){
        str.push_back(q.front());
        q.pop();
    }
    return str;
}

int calculate(string& s) {
    LinkedList expression;
    queue<char> q;
    for(char& ch:s){
        if(ch == ' '){
            continue;
        }
        else if(ch == '+'){
            expression.push_back(getNums(q));
            expression.push_back("+");
        }
        else if(ch == '-'){
            expression.push_back(getNums(q));
            expression.push_back("-");
        }
        else if(ch == '*'){
            expression.push_back(getNums(q));
            expression.push_back("*");
        }
        else if(ch == '/'){
            expression.push_back(getNums(q));
            expression.push_back("/");
        }
        else{
            q.push(ch);
        }
    }
    expression.push_back(getNums(q));


    List_Node* ptr = expression.head;
    while(ptr!=nullptr){
        string num;
        if (ptr->val == "*" || ptr->val == "/") {
            int a = stoi(ptr->prev->val);
            int b = stoi(ptr->next->val);
            num = (ptr->val == "*") ? to_string(a * b) : to_string(a / b);
        }
        if(num != ""){
            List_Node* newNode = new List_Node(num);
            if(ptr->prev->prev){
                ptr->prev->prev->next = newNode;
                newNode->prev = ptr->prev->prev;            
            }else{
                expression.head = newNode;
            }
            if(ptr->next->next){
                newNode->next = ptr->next->next;
                ptr->next->next->prev = newNode;
            }else{
                expression.tail = newNode;
            }
        }
        ptr = ptr->next;
    }
    
    ptr = expression.head;
    while(ptr!=nullptr){
        string num;
        if (ptr->val == "+" || ptr->val == "-") {
            int a = stoi(ptr->prev->val);
            int b = stoi(ptr->next->val);
            num = (ptr->val == "+") ? to_string(a + b) : to_string(a - b);
        }
        if(num != ""){
            List_Node* newNode = new List_Node(num);
            if(ptr->prev->prev){
                ptr->prev->prev->next = newNode;
                newNode->prev = ptr->prev->prev;            
            }else{
                expression.head = newNode;
            }
            if(ptr->next->next){
                newNode->next = ptr->next->next;
                ptr->next->next->prev = newNode;
            }else{
                expression.tail = newNode;
            }
        }
        ptr = ptr->next;
    }
    
    return stoi(expression.head->val);
}

int main(){

    return 0;
}