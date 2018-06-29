#include <stdio.h>
#include <stdlib.h>

int main()
{
    char keywords[32][10]= {"auto","break","case","char","const","continue","default",
                        "do","double","else","enum","extern","float","for","goto",
                        "if","int","long","register","return","short","signed",
                        "sizeof","static","struct","switch","typedef","union",
                        "unsigned","void","volatile","while"
                       };
    int keywordsCounter=0;
    char operators[30][3]={"+","-","/","*","%","=","!","^","'","" "",".",";",":",",","==","+=","-=","*=","/=","%=","!=","&&","||","<",">","<=",">=","--","++","#"};
    int operatorsCounter=0;

    char paranthesis[6][1]={")","(","{","}","[","]"};
    int paranthesisCounter=0;

    FILE *file;
    char fileName;
    char character;
    int i=0;

    printf("Enter the source file name for Lexical Analyzer:\n");
    gets(fileName);


    file = fopen(fileName,"r");
    if(file==NULL)
    {
        printf("file not found");
        exit(0);
    }




    while((character=fgetc(file))!=EOF){

           for(i=0;i<6;i++){
            if(character==paranthesis[i][0]){

                    printf("%c is a paranthesis\n",character);
                    paranthesisCounter++;

            }//paranthesis  if bitiþ
           }
           for(i=0;i<30;i++){
          if(character==operators[i][2]){
                    printf("%s is a operator\n",character);
                    operatorsCounter++;
            }//operators else if bitiþ

           }




    }



    return 0;
}







