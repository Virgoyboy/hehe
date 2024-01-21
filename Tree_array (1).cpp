#include "iostream"
using namespace std;
const int N = 100;
//Luu cac con
struct Node{
	int Id;
	Node *next;
};

struct Member{
	int infor;
	Node *child;
};

struct Tree{
	Member elems[N];
	int size;
};
int eldestChild(int k, Tree T){
	if(T.elems[k].child != NULL)
		T.elems[k].child->Id;
	else
		return -1;
}
int parent(int k, Tree T){
	int i = 0;
	Node *p;
	while(i < T.size){
		p = T.elems[i].child;
		while(p != null)
			if(p->Id == k)
				return i;
			else 
				p = p->next;		
		i++;
	}
	
	return -1;
}
int main(){
	
}
