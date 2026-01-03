#include<iostream>
using namespace std;
class node{
	public:
	char input;
	int id;
	string dept;
	node *next;
	node(char c,int i,string d){
		input=c;
		id=i;
		dept=d;
		next=NULL;
	}	
};
class stack{
	public:
	node *top;
	int size;
	stack(){
		top=NULL;
		size=0;
	}	
	void push(char c,int i,string d){
		node *newnode=new node(c,i,d);
		if(size==3){
			cout<<"Stack overflow"<<endl;
		}
		if(top==NULL){
			top=newnode;
			size++;
		}else{
			newnode->next=top;
			top=newnode;
			size++;
		}
	}
	void pop(){
		if(size==0){
			cout<<"Stack is empty"<<endl;
		}else{
		top=top->next;
		display();}
	}
	void display(){
		node *temp=top;
		cout<<"Stack of letter: "<<endl;
		while(temp!=NULL){
			cout<<temp->input<<"_"<<temp->id<<"_"<<temp->dept<<", "<<endl;
			temp=temp->next;
		}
	}
};
int main(){
	stack o;
	o.push('D',1,"CS");
	o.push('S',2,"IT");
	o.push('A',3,"SE");
	o.display();
	o.pop();
	o.pop();
	o.display();

}
