//pratical 6 using dfs only
#include<iostream>
using namespace std;
class stack
{
	public:
		int arr[10];
		int top=-1;
		bool isfull()
		{
			if(top==9) 
			return true;
			else
			return false;
		}
		bool isempty()
		{
			if(top==-1)
			return true;
			else
			return false;
		}
		void push(int n)
		{
			if(!isfull())
			{
				top++;
				arr[top]=n;
			}
		}
		int pop()
		{
			int n;
			if(!isempty())
			{
				n=arr[top];
				top--;
				return n;
			}
		}
};
class dfs
{
	public:
		int n,v;
		int visited[10]={0};
		int graph[10][10]={{0},{0}};
		void read_graph()
		{
			cout<<"Enter how many nodes are there in graph: ";
			cin>>n;
			cout<<"Enter how many edges are there in graph: ";
			cin>>v;
			for(int i=0;i<n;i++)
			{
				int x,y;
				cout<<"Enter edge-edge relation: ";
				cin>>x>>y;
				graph[x][y]=1;
				graph[y][x]=1;	
			}
			cout<<"Graph in matrix format: "<<endl;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cout<<graph[i][j]<<" ";	
				}
				cout<<endl;
			}
			
		}
		void bfs()
		{
			cout<<"Enter from which node do you want to start: ";
			cin>>v;
			cout<<"DFS on graph is: ";
			stack s;
			s.push(v);
			visited[v]=1;
			while(!s.isempty())
			{
				int x=s.pop();
				cout<<x<<" ";
				for(int i=0;i<n;i++)
				{
					if(visited[i]==0 && graph[x][i]==1)
					{
						s.push(i);
						visited[i]=1;
					}
				}	
			}
		}
};
int main()
{
	dfs d;
	d.read_graph();
	d.bfs();
}
