#include<stdio.h>
#define MAX_SIZE 100    //  maximum elements that can be inserted
#include<stdlib.h>
void insert(int *arr,int *size){    // we have used  * because size will increase
   int pos,value,i;             // last position  ,  we will give position
   printf("Enter Position: ");
   scanf("%d",&pos);
 printf("Enter value");
 scanf("%d",&value);
 
  if(pos>*size || pos <=0)     // position 1 se start hai
  printf("Invalid Position !!!!!\n");
  //else if(*size==pos){
//arr[*size]=value; // insert value
//(*size)++;
//}
else {
   for(i=*size;i>=pos;i--){  // adding value on giving position
    arr[i]=arr[i-1];
   }
   arr[pos-1]=value;
   (*size)++;
   printf("Element Inserted !!!\n");
}
}
void printlist(int *arr, int n){  // normal n because size of an array doesnot change here // displaying
   if(n==0)
   printf("List is empty!!!\n");
   else{
      int i;
   printf("List Elements are:");
    for( i=0;i<n;i++){
   printf("%d ",arr[i]);  
}
   }
}
void delete(int *arr, int *size){
   int pos,i;
   printf("Enter position : ");
   scanf("%d",&pos);
  if(pos<=0 || pos>*size)     // position 1 se start hai
  printf("Invalid Position !!!!!\n");
  else{
   for(i=pos-1;i<*size-1;i++){
      arr[i]=arr[i+1];
   }
   (*size)--;
   printf("Element Deleted !!!!\n");
  }
}
void search(int *arr,int size){
   int value,i,flag=0;
   printf("Enter searching element : ");
   scanf("%d",&value);
   for(i=0;i<size;i++){
      if(arr[i]==value){
         flag=1;
         break;
      }
   }
   if(flag==1)
   printf("Element found!!!\n");
   else {
      printf("NOT FOUND");
}
}
    int main(){
      system("cls");
       int arr[MAX_SIZE],size,i;  //size =  actual size
       printf("Enter List size : ");
       scanf("%d",&size);
printf("Enter List Elements: ");
    for(int i=0;i<size;i++){
   scanf("%d",&arr[i]);  
       }
       while(1){
        printf("1. Insertion\n");
         printf("2. Deletion\n");
          printf("3. Traversing \n");
             printf("4.Searching\n");
              printf("5. Exit \n");
              int choice;
              printf("Enter choice");
              scanf("%d",&choice);
              switch(choice)
              {
               case 1:
               insert(arr,&size);
               break;
                case 2:
                delete(arr,&size);
               break;
                case 3:
                printlist(arr, size);
               break;
                case 4:
                search(arr,size);
               break;
                case 5:
                exit(0);
               break;
               default:
               printf("Invalid Choice !!!!!\n");
              }
              printf("\n");
              system("pause"); // withou pressing system will not work
       }
   return 0;
}