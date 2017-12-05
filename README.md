

# State diagram for TM 

![alt text](https://i.imgur.com/pVjbJKe.png "STD") <br/>


## Transition table


|   	        |      0       |       1      |       x      |      y      |       \0      |
| ------------- |:------------:|:------------:|:------------:|:-----------:| -------------:|
| state0        | (state1,x,r) |   		      |		         | (state3,y,r)|    		   |
| state1        | (state1,0,r) | (state2,y,l) |		         | (state1,y,r)|       		   |
| state2 		| (state2,0,l) | 			  | (state0,x,r) | (state2,y,l)|     		   |
| state3 		| 	           |    		  |   			 | (state3,y,r)| (state4,\0,r) |
| state4 		| 			   | 			  |			     | 			   |        	   |

### input

> 000111

# Result 

![alt text](https://i.imgur.com/NBIgmHE.png "Result") <br/>
