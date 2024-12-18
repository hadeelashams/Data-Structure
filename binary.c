// Binary search tree
#include<stdio.h>
#include<stdlib.h>
struct node
 {
   int data;
   struct node *left,*right;
   };
   void main()
   {
    struct node *root=(struct node *)0; //null list
    struct node *insert(struct node*,int);
    void display(struct node *);
    struct node *search(struct node *,int);
    struct node *delete(struct node *,int);
    
    int opt,data;
    
    do
    {
      printf("\n 1.insert \n 2.search \n 3.delete \n 4.display \n 5.exit \n Your option:");
      scanf("%d",&opt);
      switch(opt)
      {
        case 1:
              printf("Data:");
              scanf("%d",&data);
              root=insert(root,data);
              break;
              
        case 2:
              printf("Data:");
              scanf("%d",&data); 
              
              if(search(root,data)==(struct node *)0)
                   printf("Not found");
              else
                  printf("Found");
              break;
      
       case 3:
             printf("data:");         
             scanf("%d",&data);
             root=delete(root,data);
             break;
              
       case 4:
            display(root);
            break;
            
      case 5:        
            exit(0);
    }
   }
   while(1);
 }
  
 // display bts contents inorder  
 
 void display(struct node *bst)
 {
   if(bst!=(struct node *)0)
    {
      display(bst->left);
      printf("%d\t",bst->data);
      display(bst->right);
    }
 }
 
 // To insert a data in bts
 
 struct node *insert(struct node * bst,int data)
 {
   struct node *t, *t1=bst, *t2=0;
   t=(struct node *)malloc(sizeof(struct node));
   t->data=data;
   t->left=t->right=(struct node *)0;
    
    if(bst==(struct node *)0) //case of null bst
        bst=t;
    else   //find insert
       {
         while(t1!=0 && data!=t1->data)
         {  
            t2=t1;
            if(data<t1->data)
            t1=t1->left;
             
            else
            t1=t1->right;
          }   
           if(t1==0) 
            if(data<t2->data)
               t2->left=t;
            else
                t2->right=t;
            else
               printf("Duplicate");
             }  
               return bst;
      }  
  //search an item in bst
  struct node *search(struct node *bst,int data) 
  {
    while(bst!=(struct node *)0 && bst->data!=data)
      if(data<bst->data)
          bst=bst->left;
      else
         bst=bst->right;
         return bst;
  }
    
   //delete node item from bst
   struct node *delete(struct node *bst,int data)
   {
     struct node *t1=bst, *t2, *sucpar;
       while(t1!=0 && t1->data!=data)
         {
           t2=t1;
           if(data<t1->data)
            t1=t1->left;
           else
             t1=t1->right;
         }
         
         if(t1!=(struct node *)0) //found
         {
           if(bst==t1 && bst->left==0)             //root is to be removed       
             bst=bst->right;
           else if(bst==t1 && bst->right==0)
             bst=bst->left;                   //not a root node
        
        else if(t1->left==0 && t1->right==0) 
        
        // case of 0 child
        
        if(t2->left==t1)
         t2->left=0;
        else
          t2->right=0;
        else if
           (t1->left==0 || t1->right==0)  
           
         // case of 1 child
           
        if(t2->left==t1)
           t2->left=t1->left==0 ? t1->right:t1->left;
        else
          t2->right=t1->left ==0 ? t1->right:t1->left;
        
        //case of two child        
        else                     
         {
            sucpar=t1;
           t2=t1->right;
           while(t2->left!=0)
            {
              sucpar=t2;
                t2=t2->left;
            }
            // copy data
            t1->data=t2->data;
   
           // remove inorder succesor
           if(t2==sucpar->left)
               sucpar->left=t2->right;
           else
              sucpar->right=t2->right;
        }         
        return bst;
      }        
    }            
          
                     
