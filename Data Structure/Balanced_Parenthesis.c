#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include "StackBasedArray.h"

int checkPair(char val1,char val2);
int checkBalanced(char expr[], int len , Stack * ps);


int main() {
  char exp[10] = "({})[]{}";
  Stack s1 ;
  Stack_voidInt(&s1);

  int len = strlen(exp);
  checkBalanced(exp, len ,&s1)?printf("Balanced"): printf("Not Balanced"); 

  return 0;
}

int checkPair(char val1,char val2){
    return (( val1=='(' && val2==')' )||( val1=='[' && val2==']' )||( val1=='{' && val2=='}' ));
}

int checkBalanced(char expr[], int len, Stack * ps){
      
    for (int i = 0; i < len; i++)  
    { 
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')  
        {  
          Stack_voidPush(ps,expr[i]); 
        } 
        else
        {
            // exp = {{}}}
            // if you look closely above {{}} will be matched with pair, Thus, stack "Empty"
            //but an extra closing parenthesis like '}' will never be matched
            //so there is no point looking forward
        if (ps.Top == -1) 
            return 0;
        else if(checkPair(ps->array[ps->Top],expr[i]))
        {
            int val = Stack_intPop(ps);
            continue;
        }
        // will only come here if stack is not empty
        // pair wasn't found and it's some closing parenthesis
        //Example : {{}}(]
        return 0;
        }
    }    
    return 1; 
}