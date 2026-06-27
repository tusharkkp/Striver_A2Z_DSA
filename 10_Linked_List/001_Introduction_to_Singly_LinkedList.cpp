#include <bits/stdc++.h>
 
using namespace std;

class Node{

	int data; 
	int* next;
public:	
	Node(int val , int next1){
		data = val;
		next = next1;
	}
	Node(int val){
		data = val;
		next = NULL;
	}
	
	~Node(){
		if( next != NULL){
			delete next;
			next = NULL;
		}
	}
	~Node(){
		if(next != NULL){
			delete next;
			next = NULL;
		}
	}
};


class List{

	Node* head;
	Node* tail;
	
	public:
		List(){
			head = NULL;
			tail = NULL;
		}
		
		~List(){
			if(head != NULL){
				delete head;
				head = NULL;
			}
		}
};

void push_front(int val){
	
	Node* newnode = new Node(val);
	
	if(head == NULL){
		head = tail = newnode;
	}
	
	else{
		newnode->next = head;
		head = newnode; 
	}
	
}

void push_back(int val){
	
	Node* newnode = new Node(val);
	
	if(head == NULL){
		head = tail = newnode;
	}
	else{
		tail->next = newnode;
		tail = newnode;
	}
	
}

void print_LL(Node* head){
	
	Node* temp = head;
	
	while(temp != NULL){
		cout << temp->data <<"->";
		temp = temp->next;
	}
}

void insert(int val, int pos){

	Node* newnode = new Node(val);
	Node* temp =  head;
	
	for(int i = 0 ; i < pos -1 ; i++){
		
		if(temp == NULL){
			return;
		}
		
		temp = temp->next;
	}
	
	newnode->next = temp->next;
	temp->next = newnode;
	
}


void pop_front(){
	if(head == NULL){
		return;
	}
	
	Node* temp = head;
	head = head->next;
	
	temp->next = NULL;
	delete temp;	
} 

void pop_back(){
	if(head == NULL){
		return;
	}
	
	Node* temp = head;
	
	while(temp -> next ->next != NULL){
		temp = temp->next;
	}
	
	temp -> next = NULL;
	delete tail;
	tail = temp;	
}

int itr_search(int val){
	if(head == NULL){
		return 0;
	}
	
	Node* temp = head;
	int pos = 1;
	
	while(temp -> next != NULL){
		if(temp -> data == val){
			return pos;
		}
		pos++;
		temp = temp ->next;
	}
	return -1;
}


int main() {



}
