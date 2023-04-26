void insertionSort() 
	{ int in, out;
	for(out=1; out<nElems; out++)     //out is dividing line 
		{ double temp = v[out];          //remove marked item 
		in = out;                      //start shifts at out 
		while(in>0 && v[in-1] >= temp) //until one is smaller, 
			{ v[in] = v[in-1];            //shift item to right 
			--in;                       //go left one position 
			} 
		v[in] = temp;                  //insert marked item 
		}  //end for 
	}  //end insertionSort()
