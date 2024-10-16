#include<stdio.h>
   void main(){
	int ar1[20],ar2[20],ar3[40];
	int n1,n2;
	void readarray(int[],int);
	void printarray(int[],int);
	void sortarray(int[], int);
	void merge(int[],int,int[],int,int[]);
	
	printf("No of emement 1 array[1-20]:");
	scanf("%d",&n1);
	
	printf("enter %d numbe;",n1);
	readarray(ar1,n1);
	
	printf("No.of elements is II array[1-20]:");
	scanf("%d",&n2);
	
	printf("enter %d number",n2);
	readarray(ar2,n2);
	sortarray(ar1,n1);
	sortarray(ar2,n2);
	merge(ar1,n1,ar2,n2,ar3);
	
	printf("I arrray sorted:\n");
	printarray(ar1,n1);
	
	printf("II array soted\n");
	printarray(ar2,n2);
	printf("Merged array:");
	printarray(ar3,n1+n2);
     }	
   //function for reading array
   void readarray(int a[],int n)
   {
   int i;
   for(i=0;i<n;++i)
   scanf("%d",&a[i]);
   }
   //function for printing array
   void printarray(int a[],int n)
   {
   
   int i;
   for(i=0;i<n;++i)
   printf("%d,",a[i]);
   printf("\n");
  } 
   
 //function for sorting an array in non decreasing
 
  void sortarray(int a[],int n)
   {
     int i,j,temp;
      for(i=0;i<n-1;++i)
      for(j=i+1;j<n;++j)
      if(a[i]>a[j])
    
 // intercgange  a[i]and a[j]
  {
   temp=a[i];
   a[i]=a[j];
   a[j]=temp;
   }
   }
  
 // function for merging
   void merge(int a[],int n1,int b[],int n2,int c[])
   { 
   int i,j,k;
   i=j=k=0;
   
 //compare and copy elements
   while(i<n1 && j<n2)
   if(a[i]<b[j])
   c[k++]=a[i++];
   else
   c[k++]=b[j++];
 //copying remaining elements from b
   while(j<n2)
   c[k++]=b[j++];
 //copying remaining elements from a
   while(i<n1)
   c[k++]=a[i++];
 
  
  }
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
 
   	
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
	
	
	

