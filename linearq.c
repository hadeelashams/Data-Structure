#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
   int que[SIZE];
   int front=-1,rear=-1;
   void main()
   {
     void insertq(int);
     int deleteq();
     int searchq(int);
     int data,opt,tfront,ans;
     
     do
     {
        printf("\n1.insert \n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Exit\n");
        printf("Enter your option:");
        scanf("%d",&opt);
     switch(opt)
     {
         case 1:
              printf("Data:");
              scanf("%d",&data);
              insertq(data);
              break;
        
        case 2:
              printf("Delete item=%d \n",deleteq());
              break;
        case 3:   
             printf("Item to search:");
             scanf("%d",&data);
             ans=searchq(data);
             
             if(ans==1)
               printf("Found\n");
             else
               printf("Not found\n");  
               break;
      case 4:
             exit(0);
    }
   }
     while(1);
  }
   // function to insert an itam in linear queue
   
   void insertq(int item)
   
    {
    if(rear==SIZE-1)
    printf("Queue is ful\n");
    
    else
      que[++rear]=item;
   
   }
   
 //funtion to delete an item
  int deleteq()
   {
   if(front==rear)
      {
      printf("Queue is empty\n");
      exit(1);
    }  
   else
    return que[++front];
  
   }
   
 // funtion to search an element in queue 
   int searchq(int item)
   { 
     int tfront=front+1;
     
  //search
   while(tfront!=rear && que[tfront]!=item)
   ++tfront;
   if(que[tfront]==item)
       return 1;
   else 
      return 0;
  }    
      
   
                                                 
      
      
  
  
     
   
   
   
   
   
   
   
   
                       
                   
                    
              
     
        
   
