#include <stdio.h>
#define  SIZE 2 

typedef enum STATUS 
{
   FULL,
   EMPTY,
   TO_BE_DELETED
}Status ;

typedef struct ENTRY
{
  int value;
  Status status;

}Entry ;

Entry DICTIONARY[SIZE] ;

int insert(int n){

  int h = n % SIZE ;

  if ( DICTIONARY[h].status == EMPTY || TO_BE_DELETED)
  {
    DICTIONARY[h].value=n ; 
    DICTIONARY[h].status= FULL;
    return 1;
  }
  else if(DICTIONARY[h].status != EMPTY || TO_BE_DELETED) {
    
  

    for (int i = h; i < SIZE ; i++)
    {
        if (DICTIONARY[i].status == EMPTY || TO_BE_DELETED)
        {
             DICTIONARY[i].value=n ; 
             DICTIONARY[i].status= FULL;
             i=SIZE;
             return 1;
        }
        
    }
  
    
  }

  else{ 
    return 0 ;
  }
  
  

}

int remov(int n){


  int h = n % SIZE ;

  if ( DICTIONARY[h].value == n)
  {
    DICTIONARY[h].status= TO_BE_DELETED;
    return 1;
  }
  else if( DICTIONARY[h].status != n){

    for (int i = h; i < SIZE ; i++)
    {
        if (DICTIONARY[i].value == n)
        {
            
             DICTIONARY[i].status= TO_BE_DELETED;
             i=SIZE;
             return 1;
        }
        
    }
  
    
  }
  else{
    return 0 ;
  }

}

int member(int n){

  int h = n % SIZE ;

  if ( DICTIONARY[h].value== n)
  {
    
    return 1;
  }
  else if( DICTIONARY[h].value!= n)
  {

    for (int i = h; i < SIZE ; i++)
    {
        if (DICTIONARY[i].value == n)
        {
            
            
             i=SIZE;
             return 1;
        }
        
    }
  
    
  }
  else{
    return 0 ;
  }

}


int main(){

Entry number1;
number1.status= EMPTY;


Entry number2;
number2.status= EMPTY;

DICTIONARY[0]= number1 ;
DICTIONARY[1]= number2 ;

printf(" %d \n", insert(1));
printf(" %d \n", insert(3));
printf(" %d \n", remov(1));

printf(" %d \n", insert(5));
printf(" %d \n", member(5));



  return 1;
}