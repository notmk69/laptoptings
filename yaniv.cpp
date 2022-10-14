#include <iostream>
using namespace std;


int cards[52]={1,2,3,4,5,6,7,8,9,10,0,10,10,1,2,3,4,5,6,7,8,9,10,0,10,10,1,2,3,4,5,6,7,8,9,10,0,10,10,1,2,3,4,5,6,7,8,9,10,0,10,10};
int p1[5],p2[5],p3[5],p4[5],open,player=1;
int maxi=0,index=0;
int max_index=0;
int sum1,sum2,sum3,sum4,min_index,mini;

int main()
{
	while (index<52)
	{
	
	for(int i=1; i<6; i++)
	{
		p1[i]=cards[index];
		index++;
		p2[i]=cards[index];
		index++;
		p3[i]=cards[index];
		index++;
		p4[i]=cards[index];
		index++;cout<<index<<endl;
	}
		open=cards[index];
		index++;

		
			
	
	while(index<52)
	{
	    if (player==1)
		{
			max_index=0;
			for(int i=0 ; i<5;i++)
			{
				if (maxi<p1[i])
				{
				
					maxi=p1[i];
				    max_index=i;
                }
			}
			if (maxi>open)
			{
				swap(open,p1[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(maxi>open)
			{
				swap(open,p1[max_index]);
			}
			
			
			
			
			player=2;
		}	
		else if(player==2)
		{
			
				max_index=0;
			for(int i=0 ; i<5;i++)
			{
				if (maxi<p2[i])
				{
				
					maxi=p2[i];
				    max_index=i;
                }
			}
			if (maxi>open)
			{
				swap(open,p2[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(maxi>open)
			{
				swap(open,p2[max_index]);
			}
			
			
			
			player=3;
		}
        else if(player==3)
		{
				max_index=0;
			for(int i=0 ; i<5;i++)
			{
				if (maxi<p3[i])
				{
				
					maxi=p3[i];
				    max_index=i;
                }
			}
			if (maxi>open)
			{
				swap(open,p3[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(maxi>open)
			{
				swap(open,p3[max_index]);
			}
			
			
			
			
			player=4;
		}
		else 
		{
				max_index=0;
			for(int i=0 ; i<5;i++)
			{
				if (maxi<p4[i])
				{
				
					maxi=p4[i];
				    max_index=i;
                }
			}
			if (maxi>open)
			{
				swap(open,p4[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(maxi>open)
			{
				swap(open,p4[max_index]);
			}
			
			player=1;
		}		
		
	}	
	}
//	for(int i=0 ; i<5; i++){
//	
//	    cout<<p1[i]<<"  ";
//	    cout<<endl;
//	    
//	    for(int i=0 ; i<5; i++)
//	    cout<<p2[i]<<"  ";
//	    cout<<endl;
//	    
//	    for(int i=0 ; i<5; i++)
//	    cout<<p3[i]<<"  ";
//	    cout<<endl;
//	    
//	    for(int i=0 ; i<5; i++)
//	    cout<<p4[i]<<"  ";
//	    cout<<endl;
//	}
	    for(int i=0; i<5;i++)
	    {
	    	sum1=sum1+p1[i];
	    	sum2=sum2+p2[i];
	    	sum3=sum3+p3[i];
	    	sum4=sum4+p4[i];
		}
	//	cout<<sum1<<"  "<<sum2<<"  "<<sum3<<"  "<<sum4<<endl;
		int arey[4]={sum1,sum2,sum3,sum4};
		mini=arey[0];
		for(int i=0;i<5;i++)
		{
			if(mini>arey[i])
			{
				mini=arey[i];
				min_index=i;
			}
			
		}
	//	cout<<mini<<endl;

		

return 0;
}

