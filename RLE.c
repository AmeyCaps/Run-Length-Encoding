#include <stdio.h>
#include <string.h> 


int main(void)
{
    char string[50];                                          
    char encoded_message[100]="";                             
    int i=0,k;
    printf("Enter string :");
    scanf("%49[^\n]",string);                                 
          for(;string[i];i++){                               
              if(string[i]==' '){                            
                  encoded_message[i==0?0:strlen(encoded_message)]=' ';        
                  continue;                                  
             }
             for(k=1;string[i]==string[i+1];k++,i++);        
                    sprintf(&encoded_message[i==0?0:strlen(encoded_message)],"%d%c",k,string[i]);                                  
           }
     printf("%s",encoded_message);                                    
        
    return 0;

} 
