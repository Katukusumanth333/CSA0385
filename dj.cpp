#include<stdio.h>
#define INFINITY 9999
#define max 10
void dj(int graph[max][max],int n,int start){
	int i,j,distance[max],visited[max],mindist,nextnode;
	for(i=0;i<n;i++){
		distance[i]=graph[start][i];
		visited[i]=0
}
	distance[start]=0;
	visited[start]=1;
	for(i=1;i<n;i++){
		mindist=INFINITY;
		for(j=0;j<n;j++)
			if(!visited && distance[j]<mindist){
				mindist=distance[j];
				nextnode=j;
			}
	}
	visited[nextnode]=1;
	for(j=0;j<n;j++)
	if(!visited[j] && mindist+graph[nextnode][j]<distance[j])
	distance[j]=mindist+graph[nextnode][j];
	for(i=0;i<n;i++)
	if(i!=start)
	printf("\ndistance between source to destination is %d :%d",i,distance[i]);
}
int main(){
	int graph[max][max]={{0, 0, 1, 2, 0, 0, 0},
                         {0, 0, 2, 0, 0, 3, 0},
                         {1, 2, 0,1 ,1, 3, 0},
                         {2, 0, 0, 0, 0, 0, 1},
                         {0, 0, 3, 0, 0, 2, 0},
                         {0, 3, 0, 0, 2, 0, 1},
                         {0, 0, 0, 1, 0, 1, 0}};
    int n=7,int start=0;
    dj(graph,n,start);
    return 0;
}
	
