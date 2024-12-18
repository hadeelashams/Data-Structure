#include<stdio.h>
#include<stdlib.h>
 struct node
 {
   int data;
   struct node *left,*right;
  };
   
   void main()
    {
      struct node *start=(struct node *)0; // null list
      struct node *insert(struct node *,int);
      struct node *delete(struct node *,int);
      struct node *search(struct node *,int);
      void display(struct node *);
      
      int opt,data;
      do
      {
       printf("\n 1.Insert \n 2.Delete \n 3.Search \n 4.Display \n 5.Exit \n Enter Your option: ");
       scanf("%d",&opt);
       switch(opt)
        {
           case 1:
           	   printf("Data: ");
           	   scanf("%d",&data);
           	   start=insert(start,data);
           	   break;
          
          case 2:
           	   printf("Data: ");
           	   scanf("%d",&data);
           	   start=delete(start,data);
           	   break; 
         
          case 3:
           	   printf("Data: ");
           	   scanf("%d",&data);
           	   if(search(start, data)==(struct node *)0)
           	       printf("Not found\n");
           	   else
           	     printf("Found");
           	   break;
         case 4: 
                 display(start);	   
           	   break;
         case 5:
               exit(0);
        }       
       } while(1);       //end of switch
     }           	// end of main   
           	   
   // to display
   void display(struct node *s)
     {
      while(s!=(struct node *)0)
       {
         printf("%d\t",s->data);
         s=s->right;
       } 
     }
   // to search an item
    struct node * search(struct node *s,int data)
    {
      while(s!=(struct node *)0 && s->data!=data)
      s=s->right;
      return s;
    }
    
 // insert a node
   struct node *insert(struct node*s,int data)
   {
   struct node *t;
   t=(struct node *)malloc(sizeof(struct node));
   t->data=data;
   t->left=(struct node *)0;
   if(s!=(struct node *)0)          // not null list
     {
       t->right=s;
       s->left=t;
      return t;
    }
    
    else
    {
    t->right=(struct node *)0;
    }
    return t;
    
  }         	   
 
 // delete a node
  struct node *delete(struct node *s,int data)
  {
  if(s==NULL)
  {
      printf("empty list");
      return NULL;}
   
   struct node *t;
   t=search(s,data);
   if(t!=(struct node *)0)
   {
     if(t->left==(struct node *)0 && t->right==(struct node *)0)
     {
      s=(struct node*)0;
      printf("item %d delete.\n",data);
     } 
     
     else if(t->left==0)    // case of 1st node
     {
       s=s->right;
       s->left=0;
       printf("item %d deleted\n",data);
     }
     else if(t->right==0)   // case of last node
     {
          t->left->right=0;
          printf("item %d deleted\n",data);
      }    
     else
        {
           t->left->right=t->right;
           t->right->left=t->left;
           printf("item %d deleted\n",data);
         }
         free(t);  
      }
      else{
           printf("Not found");
        }
        
           return s;
      }     
     
                    	   
           	   
           
	   
           	      	   	   
           	   
           	   

