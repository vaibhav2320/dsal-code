#include<iostream>
using namespace std;
struct node{
    int vertex;
    node*next;
};
node*adj[50];
int i,j,n, val,nb;
void create_graph(){
    cout<<"Enter the how many nodes are there are in graph:";
    cin>>n;
    for(i=1;i<=n;i++){
        adj[i]=NULL;
        cout<<"Enter the value of"<< i<<"th"<<" vertex";
        cin>>val;
        node*nn=new node;
        node*last;
        nn->vertex=val;
        nn->next=NULL;
        adj[i]=last=nn;
        cout<<"Enter how many nodes are connected to"<< val<<":";
        cin>>nb;
        for(int j=1;j<=nb;j++){
            cout<<"Enter value of node:";
            cin>>val;
            node*nn=new node;
            nn->vertex=val;
            nn->next=nn;
            last->next=nn;
        }
    }
    cout<<"Graph in adjecency list format:";
    for(int i=1;i<=n;i++){
        node*temp=adj[i];
        while(temp!=NULL){
            cout<<temp->vertex<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
}
int arr[50];
int front=-1,rear=-1;
void enqueue(int m);
int dqueue();
bool isemphty();
bool isemphty(){
    if((front==-1 && rear==-1)||(front>rear))
    return 1;
    else return 0;
}
void enqueue(int m){
    if(front==-1){
        front=rear=0;
        arr[rear]=0; 
    }
    else{
        rear++;
        arr[rear]=m;
    }
}
int dqueue(){
    int n;
    if(isemphty()){
        cout<<"Queue is underflow";
    }
    else{
        n=arr[front];
        front++;
    }
    return n;
}
const int ready=0,wait=1,processed=2;
int status[10];
int start;
void bfs(){
    for(int i=1;i<=n;i++){
        status[i]=ready;
    }
    cout<<"Enter root node to traverse graph:";
    cin>>start;
    enqueue(start);
    status[start]=wait;
    while(!isemphty()){
        int x=dqueue();
        status[x]=processed;
        cout<<x<<"";
        node*temp=adj[x];
        while(temp!=NULL){
            int v=temp->vertex;
            if(status[v]==ready){
                enqueue(v);
                status[v]=wait;
            }
            temp=temp->next;
        }
    }
}
int main(){
    create_graph();
    bfs();
    return 0;
}

