#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front=0,rear=0; // empty stack
int que[SIZE];
void main()
{
   void insertq(int);
   int deleteq();
   int searchq(int);
   int data,opt,ans;
   
do
 {
   printf("\n 1.insert \n 2.Delete \n 3.Search \n 4.Exit \n Enter Your Option :");
   scanf("%d",&opt);
   switch(opt)
   {
     case 1:
              printf("data:");
              scanf("%d",&data);
              insertq(data);
              break;
    case 2:  
             data=deleteq();
   	     printf("Delete data=%d \n",data);
   	     break; 
    case 3:
             printf("Search data:");
             scanf("%d",&data);
               ans=searchq(data);
               if(ans==1)
                  printf(" Data found");
               else
                  printf("Not Found");
                break;
   case 4: exit(0);
   }
  }
  while(1); 
  }               
  
  //function to insert an item to circular queue
    void insertq(int item)
     {  
       int trear=rear;
       trear=(trear+1)%SIZE;
         if (trear==front)
            printf("Que is full");
         else
            {
              rear=trear;
              que[rear]=item;                   
            }
          }
        
   // delete an item from circular queue
   
   int deleteq()
   {
     if(front==rear)
        {
          printf("Que is empty \n");
          exit(1);
          }
          
     else
         {
            front=(front+1)%SIZE;
            return que[front];
            
         }
       }
       
  // search an item in circular queue
  
  int searchq(int item)
  {
     int tfront=front;
     if(tfront!=rear)
     {
    
     do
      tfront=(tfront+1)%SIZE;
      while(tfront!=rear && que[tfront]!=item);
     
     if(que[tfront]==item)
     return 1;
     else
     return 0; }
     return 0;
     }     
            
            
                                      	               	
             	
             	
             	
             	
             	
             	
             	
             	
             	 
   
