#include<iostream>
using namespace std;
int main()
{
	
	int opt,i, j, size, temp,del, count=0,max, min,position,value,array[250];
    int arr[200];
    cout << "Enter the Total no. of elements in array: ";
    cin >> size;
    cout << "Enter the elements of the array: " << endl;
    	for (i = 0; i < size; i++)
		{
        	cin >> arr[i];
   		}
    
	cout<<"\n\nPerforming Different Operation on Array:"<<endl;
	cout<<"   \n 1. Ascending Oder."<<endl;
	cout<<"   \n 2. Delete Element."<<endl;
	cout<<"   \n 3. Find Maximum Number."<<endl;
	cout<<"   \n 4. Find Minimum Number."<<endl;
	cout<<"   \n 5. Insert Element."<<endl;
	cout<<"     \n\n   Select Option     =  ";
	cin>>opt;
	
	switch (opt)
	{
	 	case 1:
   				for (i = 0; i < size; i++)
				   {
        				for (j = i; j < size; j++)
							{
           						 if (arr[i] > arr[j+1])
									{
               						 temp = arr[i];
               						 arr[i] = arr[j+1];
                					 arr[j+1] = temp;
           							}
        					}
   					}
   				 cout << "Elements sorted in the Ascending order are: " << endl;
   					 for (i = 1; i <= size; i++)
						{
    					 	cout << arr[i] << endl;   
    					}
				break;
		case 2:
				cout<<"\nEnter element you want to Delete =";
        		cin>>del;

       			 for(i=0; i<size; i++)
       			{
				   
               				 if(arr[i]==del)
                				{
                       				 for(int j=i; j<(size-1); j++)
                       			{
                             arr[j]=arr[j+1];
                        }
                        count++;
                        break;
                		}
        		}
        			if(count==0)
        				{
                			cout<<"\nElement not found..!!\n";
       					 }
       				 else
      					  {
               					 cout<<"\nElement deleted successfully..!!\n";
                				 cout<<"\nNow the new array is = \n";
               		for(i=0; i<(size-1); i++)
                			{
                       				 cout<<arr[i]<<" \n ";
              				}
       				 }
   						 cout<<"\n";
					break;
		case 3:
				
    					max = arr[0];
  						  for (i = 0; i < size; i++)
    							{
    								if (max < arr[i])
      						    	max = arr[i];
    							}
						cout << "\n\n  Largest element in array =" << max;		
					break;
		
		case 4:
			
					min = arr[0];
   					 for (i = 0; i < size; i++)
    				{
       					 if (min > arr[i])
           				 min = arr[i];
   					 }
		
			cout << "\n\n Smallest element : " << min;
		     break;
		     
		case 5:
						cout<<"Enter the location/index where you wish to insert an element=\n"<<endl;
   						cin>>position;
  						cout<<"Enter the value to insert\n"<<endl;
   						cin>>value;
   						for (i = size - 1; i >= position-
						   
						   
						   1; i--)
  							 	{
 								 	array[i+1] = array[i];
 							   }
						array[position-1] = value;
    					cout<<"Resultant array is\n"<<endl;
   								for (i = 0; i <= size ; i++)
   										{
    										  cout<<array[i]<<endl; 
     								    }	     
		     break;
		     
		     
		     
	}
	
	
	
	
}
