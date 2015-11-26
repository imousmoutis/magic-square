#include <stdio.h>

main(){
    
    int givenNumber, count, i, j, tab[10][10], a, b, c;
    
    printf("Sup?\n");
    printf("You can calculate the magic square for any odd number from 1 to 9.\n\n");
    
    do{
        printf("Please type in the number you want: ");
        scanf("%d", &givenNumber);
        printf("\n");
        
        if (givenNumber > 9){
            
            printf("I am sorry but the number can't be greater than 9.\n\n");
        }else if (givenNumber <0){
            
            printf("I am sorry but the number can't be negative.\n\n");
        }else if (!(givenNumber % 2) || (givenNumber == 0)){
            
            printf("I am sorry but the number can't be even.\n\n");
        }else{
              
            count = givenNumber*givenNumber;
            
            for (i=0; i<givenNumber; i++)
            {
                for (j=0; j<givenNumber; j++)
                    tab[i][j]=0;
            }
            
            i=givenNumber/2;
            j=givenNumber-1;
            tab[i][j]=1; 
            
            for (c=2; c<=count; c++)
            {   
                a=i;
                b=j;
                i++;
                j++;
                if (i==givenNumber)
                    i=0;
                if (j==givenNumber)
                    j=0;
                if (tab[i][j]!=0)
                {
                    b--;
                    i=a;
                    j=b;
                    tab[a][b]=c;
                }
                else
                    tab[i][j]=c;    
            }
            
            for (i=0; i<givenNumber; i++)
            {
                for(j=0; j<givenNumber; j++)
                         printf(" %d",tab[i][j]);
                
                printf("\n");
            }
            
            printf("\n");
        }
        
    }while(1);
}
