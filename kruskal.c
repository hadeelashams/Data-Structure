#include<stdio.h>
#include<stdio.h>

int i,j,u,v,ru,rv,n,ne=0;

int min,mincost=0,cost[9][9],parent[9];

int find(int u){
   //find the root of the set
   while(parent[u])
     u=parent[u];
   return u;
  }
  
  void uni(int ru,int rv){
   //union of two  sets
   parent[rv]=ru;
   
   }
   
   void main(){
     printf("\nEnter the number of vertices:");
     scanf("%d",&n);
     
      printf("\nEnter the cost of adjacenct matrix:\n");
      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
          scanf("%d",&cost[i][j]);
          if(cost[i][j]==0)       //if no edge,set to infinity(999)
             cost[i][j]=999;
        }
       } 
      printf("\nthe edges of minimun cost spanning tree  are:\n");
      // kruskal algorithm 
      while(ne<n-1){    
       min=999;
         for(i=1;i<=n;i++){
           for(j=1;j<=n;j++){
               if(cost[i][j]<min){
                min=cost[i][j];
                 u=i;
                 v=j;
             }
            }
           }
           ru=find(u);
           rv=find(v);
           
           //if the vertices belong to different sets,include this edge
           if(ru!=rv){
            uni(ru,rv);
            printf("Edge (%d,%d)=%d\n",u,v,min);
            mincost+=min;
            ne++;      //increment the number of edges include in the mst
            
          }    
         
      //remove the chosen edge from further consideration 
   cost[u][v]=cost[v][u]=999;
   }
   printf("\nMinimum cost of the spanning tree =%d\n",mincost);
   
   }
   
    
   
