/* Solved by Tanishq Monga 
https://www.hackerrank.com/tanishq005

Problem Link
https://www.hackerrank.com/challenges/bfsshortreach/
*/
#include<stdio.h>
#include<iostream>
#include<list>
using namespace std;
int visit[10001],cost[10001];
class graph
{
	int v;
	list<int>* adj;
public:
	graph(int a);
	void ae(int a,int b);
	void bfs(int a);

};
 graph::graph(int a)
 {
 	this->v=a;
 	adj=new list <int> [v+1];
 }

 void graph::ae(int a,int b)
 {
 	adj[a].push_back(b);
 }
void graph::bfs(int a)
{
	
	int i,current;
	for(i=0;i<=v;i++)
	{
		visit[i]=0; cost[i]=-1;
	}

	list<int>q;
	list<int> ::iterator it;
	q.push_back(a);
	visit[a]=1;
	cost[a]=0;

	while(!q.empty())
	{
		current=q.front();
		q.pop_front();


		for(it=adj[current].begin();it!=adj[current].end();it++)
		{
			if(visit[*it]==0)
			{
				visit[*it]=1;
				cost[*it]=cost[current]+6;
				q.push_back(*it);
			}
		} 
	}

}

int main()
{	//freopen("input.in","r",stdin);
	
	int t,a,b,n,e,v,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&v,&e);
		graph g(v);

		while(e--)
		{
			scanf("%d %d",&a,&b);
			g.ae(a,b);
			g.ae(b,a);
		}
		scanf("%d",&n);
		g.bfs(n);

			for(i=1;i<=v;i++)
		{
			if(i==n)
				continue;
			else
			{
				printf("%d ",cost[i]);
			}
		}
		printf("\n");
	}
	

	
	return  0;
}