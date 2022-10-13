#include <iostream>
using namespace std;


int cards[52]={1,2,3,4,5,6,7,8,9,10,0,10,10,1,2,3,4,5,6,7,8,9,10,0,10,10,1,2,3,4,5,6,7,8,9,10,0,10,10,1,2,3,4,5,6,7,8,9,10,0,10,10};
int p1[5],p2[5],p3[5],p4[5],index=0,open,player=1;
int main()
{
	while (index<52)
	{
	int max=0,max_index=0;
	for(int i=1; i<5; i++)
	{
		p1[i]=cards[index];
		index++;
		p2[i]=cards[index];
		index++;
		p3[i]=cards[index];
		index++;
		p4[i]=cards[index];
		index++;
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
				if (max<p1[i])
				{
				
					max=p1[i];
				    max_index=i;
                }
			}
			if (max>open)
			{
				swap(open,p1[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(max>open)
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
				if (max<p2[i])
				{
				
					max=p2[i];
				    max_index=i;
                }
			}
			if (max>open)
			{
				swap(open,p2[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(max>open)
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
				if (max<p3[i])
				{
				
					max=p3[i];
				    max_index=i;
                }
			}
			if (max>open)
			{
				swap(open,p3[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(max>open)
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
				if (max<p4[i])
				{
				
					max=p4[i];
				    max_index=i;
                }
			}
			if (max>open)
			{
				swap(open,p4[max_index]);
			}
			else
			{
				open=cards[index];
				index++;
			}
			if(max>open)
			{
				swap(open,p4[max_index]);
			}
			
			player=1;
		}		
		
	}	
	}
	for(int i=0 ; i<5; i++)
	    cout<<p1[i]<<"  ";
	    cout<<endl;
	    
	    for(int i=0 ; i<5; i++)
	    cout<<p2[i]<<"  ";
	    cout<<endl;
	    
	    for(int i=0 ; i<5; i++)
	    cout<<p3[i]<<"  ";
	    cout<<endl;
	    
	    for(int i=0 ; i<5; i++)
	    cout<<p4[i]<<"  ";
	    cout<<endl;
	
}
