/*
 ============================================================================
 Name        : TuringMachine.c
 Author      : AbdullahKhan
 Version     :
 Copyright   : OpenSource
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
char inp[20];
int state = 0, head = 0;
int main(){
	scanf("%s",&inp);
    while(1){
        if (state == 0 && inp[head] == '0'){
            inp[head] = 'x';
            state = 1; //move right
            head++;
            printf("input : %s head : %d, state : %d\n",inp,head, state);
        }
        else if (state == 1 && (inp[head] == '0' || inp[head]== 'y')){
            //printf("Show\n");
			if(inp[head]=='0'){
				inp[head]='0';
			}
			else if (inp[head] == 'y'){
				inp[head] = 'y' ;
			}
            state = 1;
            //printf("\n\nState : %d",state);
            if(inp[head] != '1'){
                head++;
            }
            printf("\n\nHEAD : %d",head);

        }
        else if (state == 1 && inp[head] == '1'){
            inp[head] = 'y';
            printf("\n\nlast Input  : %s",inp);
            state = 2;
            head--;
            printf("\n\n Current HEAD : %d\n",head);
        }

        else if (state == 2 && (inp[head]=='0' || inp[head]=='y')){
			if(inp[head] =='0'){
				inp[head]= '0';
			}
			else if(inp[head] == 'y'){
				inp[head]='y';
			}
            while(inp[head] != 'x'){
                head--;//move left
                state = 2;
                printf("\n\n State 2 HEAD : %d\n",head);
            }
        }

        else if(state == 2 && inp[head]=='x'){
        		inp[head] = 'x';
         	 head++;
            state = 0;
            printf("\n\n State 2 secod part HEAD Update : %d, inp %s state 2 end\n",head, inp);
        }

		else if(state ==0 && inp[head] == 'y'){
			state = 3;// move right
			head++;
		}


		else if(state ==3&&inp[head]=='y'){
			while(inp[head]   == 'y'){
				head++;
			}
			if(inp[head]=='\0'){
				state = 4;
				//break;
			}
		}
        else if(state ==4&&inp[head]=='\0'){
            printf("accept\n");
            break;
        }
        else{
        		printf("Reject\n");
            break;
        }
    }// while loooop end
return 0;
}

