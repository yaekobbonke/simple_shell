#include"simple_shell.h"                                                                   
                                                                                           
/**                                                                                        
 * main - executes execve                                                                  
 *                                                                                         
 * return: always 0                                                                        
 */                                                                                        
int main(void)                                                                             
{                                                                                          
        char *args[] = { "./main2", "This", "is", "done", "by", "Yaekob", "and", "Aymen", NULL};                                                  
                                                                                           
        int val = execve("./main2", args,  NULL);                                           
        if(val == -1)                                                                      
                                                                                           
                perror("error");                                                           
        printf("execve done\n");                                                           
                                                                                           
        return (0);                                                                        
}                
