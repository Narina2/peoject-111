#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a string in the format:\n");
    char input[1024];
    if(fgets(input,sizeof(input),stdin)!=NULL){
            //Remove newline character if present
            input[strcspn(input,"\n")]=0;

    char*parts[1024];
    int i=0;
    char*token=strtok(input,",");
    while(token!=NULL){
            parts[i++]=token;
            token=strtok(NULL,",");
          }
          for(int j=0;j<i;j++){
                printf("index %d:%s\n",j,parts[j]);
          }

          //joining the parts with"@"
          char output[1024]="";
          for(int j=0;j<i;j++){
                strcat(output,parts[j]);
                if(j<i-1){
                        strcat(output,"@");
                }
          }
          printf("%s\n",output);
    }
    return 0;
}
