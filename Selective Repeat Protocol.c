#include<stdio.h>
int main(){
	int windowsize,i,ack,sent=0;
	
	printf("Enter Window size \n");
	scanf("%d",&windowsize);
	
	while(1){
		
		for(i=0; i<windowsize; i++){
			
			printf("Frame %d has been transmitted \n", sent+1);
			sent++;
			
			if(windowsize == sent)
				break;
		}
	
			
			printf("Enter the frame for which acknowledgement has not been received \n");
			scanf("%d",&ack);
			
			printf("Frame %d has been sent \n",ack);
			break;
	} 

	printf("All Frames has been sent Successfully: ");
	return 0;

}
