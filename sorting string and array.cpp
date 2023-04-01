//reordering
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(string[i]>string[j])
			{
				temp=string[i];
				string[i]=string[j];
				string[j]=temp;
			}
		}
	}

 //Sorting out the array elements    
    int j,k,temp; 
	for(j=0; j<n; j++)
	{
		for(k=j+1; k<n; k++)
		{
			if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}